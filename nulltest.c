#include "types.h"
#include "stat.h"
#include "user.h"
#define NULL ((void*)0)

// Reference: https://github.com/conoroliver/cosc301-proj03
int main(int argc, char *argv[]) {
  int *intptr = NULL;
  printf(1, "Dereferencing a NULL pointer looks like: %p\n", *intptr);
  exit();
}