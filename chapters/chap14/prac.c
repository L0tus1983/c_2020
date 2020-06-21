#include <stdio.h>
#include <string.h>

int main(void) {
  // 苗字と名前を別々に入力させて、それを結合して表示するプログラム
  // char full_name[256] = {'\0'};
  char first_name[128];
  char family_name[128];

  printf("苗字を入力：");
  scanf("%128s", family_name);
  printf("名前を入力：");
  scanf("%128s", first_name);

  // sprintf(full_name, "%s %s", family_name, first_name);
  strcat(family_name, first_name);
  printf("%s\n", family_name);
  return 0;
}