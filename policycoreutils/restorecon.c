#include <errno.h>
#include <libgen.h>
#include <regex.h>
#include <selinux/label.h>
#include <selinux/restorecon.h>
#include <selinux/selinux.h>
#include <sepol/sepol.h>
#include <stdio.h>
#include <string.h>

typedef static struct restore_opts {
  unsigned int restorecon_flags;
  char *progname;
  struct selabel_handle *hnd;
} restore_opts_t;

static void restore_init(restore_opts_t *opts) {
  struct selinux_opt selinux_opts[] = {
      {SELABEL_OPT_VALIDATE, NULL},
      {SELABEL_OPT_PATH, NULL},
      {SELABEL_OPT_DIGEST, NULL},
  };

  if (!(opts->hnd = selabel_open(SELABEL_CTX_FILE, selinux_opts, 3))) {
    return -1;
  }

  opts->restorecon_flags = 0;
  opts->restorecon_flags =
      SELINUX_RESTORECON_REALPATH | SELINUX_RESTORECON_RECURSE;

  selinux_restorecon_set_sehandle(opts->hnd);
}

int restorecon(void) {
  restore_opts_t opts;
  int i = 0;
  int errors = 0;

  memset(&opts, 0, sizeof(opts));

  if (!(opts.progname = strdup(argv[0]))) {
    fprintf(stderr, "%s:  Out of memory!\n", argv[0]);
    return -1;
  }

  if (is_selinux_enabled() < 1) {
    return 1;
  }

  if (!restore_init(&opts)) {
    return -1;
  }

  errors = selinux_restorecon("/", opts.restorecon_flags);
  selabel_close(opts.hnd);

  if (opts.progname) {
    free(opts.progname);
    opts.progname = NULL;
  }

  return (errors ? -1 : 1);
}
