#include <stdio.h>

int main(void) {
  // テストの点数を入力するプログラム
  // １００点より大きい点数を間違えて入力した場合、
  // 自動的に１００点に修正して記憶する機能がある
  int score;
  printf("点数を入力： ");
  scanf("%d", &score);
  if (score > 100) {
    printf("*** 修正 ***\n");
    score = 100;
  }
  printf("点数が入力された： %d 点\n", score);
}