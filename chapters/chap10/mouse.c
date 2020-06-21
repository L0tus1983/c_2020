#include <stdio.h>

int main(void) {
  // 倍額ゲーム
  int value = 1;
  int num   = 1;
  while (value < 1000000) {
    printf("%2d月め：%10d 円\n", num, value);
    value *= 2;
    num++;
  }
  printf("%d月めに100万円を超えました: %7d 円\n", num, value);
}