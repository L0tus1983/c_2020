#include <stdio.h>

int main(void) {
  // テストの点数を入力する
  // テストの点数は0−100まで
  // それ以外が入力されたら再入力させるぞ

  int score;
  do {
    printf("テストの点数を入力：");
    scanf("%d", &score);
  } while (score < 0 || score > 100);
  printf("確認： %d 点\n", score);
}