#include <stdio.h>

int main(void) {
  int i, j;
  FILE *file;

  file = fopen("text.txt", "r");
  fscanf(file, "%d, %d", &i, &j);
  fclose(file);

  printf("%d, %d\n", i, j);
  return 0;
}