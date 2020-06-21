#include <memory.h>
#include <stdio.h>

int main(void) {
  int array1[5] = {42, 79, 13, 7, 64};
  int array2[5];
  int length = sizeof(array1) / sizeof(array1[0]);
  memcpy(array2, array1, sizeof(array1));
  for (int i = 0; i < length; i++) {
    printf("%d\n", array2[i]);
  }
}