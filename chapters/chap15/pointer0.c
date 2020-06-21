#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char str[256] = "Dragon";
  scanf("%s", &str[6]);
  printf("%s\n", str);

  return 0;
}