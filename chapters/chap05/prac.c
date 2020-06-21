#include <stdio.h>

int main(void) {
  // 198 yen  drink
  // 138 yen  milk
  // ??? yen  change
  int drink  = 198;
  int milk   = 138;
  double tax = 1.05;  // 当時
  int change = 1000 - (int)((drink + (milk * 2)) * tax);
  printf("解答: %d 円\n", change);
}