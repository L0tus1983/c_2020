#include <stdio.h>

int sum(int);  // prototype

int main(void) {
  sum(200);
  return 0;
}

int sum(int max) {
  printf("%d\n", (1 + max) * max / 2);
  return 0;
}
