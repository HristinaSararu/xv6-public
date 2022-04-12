#include "types.h"
#include "stat.h"
#include "user.h"
#define NULL ((void*)0)

// Reference: https://github.com/conoroliver/cosc301-proj03
int main(int argc, char *argv[]) {
  int *p = NULL;
  printf(1, "Dereferencing a NULL pointer: %p\n", *p);
  exit();
}