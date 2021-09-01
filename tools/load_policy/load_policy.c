#include <errno.h>
#include <libintl.h>
#include <selinux/selinux.h>
#include <sepol/sepol.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {
  int ret, enforce = 0;

  if ((ret = selinux_init_load_policy(&enforce))) {
    if (enforce > 0) {
      fprintf(stderr,
              "%s:  Can't load policy and enforcing mode requested:  %s\n",
              argv[0], strerror(errno));
      exit(3);
    }
  } else {
    ret = selinux_mkload_policy(0);
  }

  if (ret < 0) {
    fprintf(stderr, "%s:  Can't load policy:  %s\n", argv[0], strerror(errno));
    exit(2);
  }
  exit(0);
}
