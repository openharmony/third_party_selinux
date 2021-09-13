#include <errno.h>
#include <selinux/selinux.h>
#include <sepol/sepol.h>
#include <stdio.h>

int load_policy(void) {
  int ret, enforce = 0;

  if ((ret = selinux_init_load_policy(&enforce))) {
    if (enforce > 0) {
      fprintf(stderr,
              "Can't load policy and enforcing mode requested:  %s\n",
              strerror(errno));
      return -1;
    }
  }

  if ((ret = selinux_mkload_policy(0)) < 0) {
    fprintf(stderr, "Can't load policy:  %s\n", strerror(errno));
    return -1;
  }

  return 1;
}
