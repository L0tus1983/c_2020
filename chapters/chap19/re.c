#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *heap;
  heap = (int *)malloc(sizeof(int) * 10);
  heap = (int *)malloc(sizeof(int) * 100);
  free(heap);
  return 0;
}