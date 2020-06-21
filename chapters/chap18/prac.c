#include <stdio.h>

enum {
  SUMMER_OLYMPIC,
  WINTER_OLYMPIC,
  NOTHING,
};

int checkOpenOlympic(int *year);

int main(void) {
  int year, result;
  printf("西暦を入力：");
  scanf("%d", &year);

  result = checkOpenOlympic(&year);
  switch (result) {
    case 0:
      printf("夏のオリンピックが開催\n");
      break;
    case 1:
      printf("冬のオリンピックが開催\n");
      break;
    case 2:
      printf("その年はオリンピックが開催されない\n");
      break;
  }

  return 0;
}

int checkOpenOlympic(int *year) {
  printf("%d\n", *year);
  if (*year % 2 == 0) {
    if (*year % 4 == 0) {
      return SUMMER_OLYMPIC;
    } else {
      return WINTER_OLYMPIC;
    }
  } else {
    return NOTHING;
  }
}