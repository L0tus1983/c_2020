#include <stdio.h>

int main(void) {
  // 番号を入力すると対応する名前を表示する
  int num;

  // input
  printf("番号を入力：");
  scanf("%d", &num);

  // judge
  switch (num) {
    case 1:
    case 3:
    case 4:
      printf("男性\n");
      break;
    case 2:
      printf("女性\n");
      break;
    default:
      printf("不明\n");
      break;
  }
  return 0;
}