#include <stdio.h>

// 西暦年を入力するとオリンピックが開かれるか表示する
void checkOlympic(int);

int main(void) {
  int year;
  printf("西暦を入力:");
  scanf("%d", &year);
  checkOlympic(year);
  return 0;
}

void checkOlympic(int year) {
  if (year % 2 == 0) {
    if (year % 4 == 0) {
      printf("夏季オリンピック開催\n");
    } else {
      printf("冬季オリンピック開催\n");
    }
  } else {
    printf("オリンピックは開催されない\n");
  }
}