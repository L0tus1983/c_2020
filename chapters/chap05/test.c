#include <stdio.h>

int main(void) {
  double pi = 3.14159;

  printf("%07.2f\n", pi);
  printf("%07.3f\n", pi);
  printf("%07.4f\n", pi);
  printf("%07.5f\n", pi);
  printf("%07.f\n", pi);

  return 0;
}