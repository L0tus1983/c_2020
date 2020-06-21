#include <stdio.h>

int main(void) {
  // 月を入力すると、対応する陰暦の月を表示する
  // 例：1 → 睦月

  int month;
  // input
  printf("**現在の月→陰暦の月変換プログラム**\n");
  printf("変換したい月を入力：");
  scanf("%d", &month);

  // judge
  switch (month) {
    case 1:
      printf(" 睦月 です。\n");
      break;
    case 2:
      printf(" 如月 です。\n");
      break;
    case 3:
      printf(" 弥生 です。\n");
      break;
    case 4:
      printf(" 卯月 です。\n");
      break;
    case 5:
      printf(" 皐月 です。\n");
      break;
    case 6:
      printf(" 水無月 です。\n");
      break;
    case 7:
      printf(" 文月 です。\n");
      break;
    case 8:
      printf(" 葉月 です。\n");
      break;
    case 9:
      printf(" 長月 です。\n");
      break;
    case 10:
      printf(" 神無月 です。\n");
      break;
    case 11:
      printf(" 霜月 です。\n");
      break;
    case 12:
      printf(" 師走 です。\n");
      break;

    default:
      printf("存在しません\n");
      break;
  }

  return 0;
}