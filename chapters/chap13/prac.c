#include <memory.h>
#include <stdio.h>

int main(void) {
  // 入力された10個の数値を最後から表示するプログラム
  int nums[10];
  for (int i = 0; i < 10; i++) {
    printf("nums[%d]の値を入力：", i);
    scanf("%d", &nums[i]);
  }

  int length = sizeof(nums) / sizeof(nums[0]);

  for (int i = length - 1; i >= 0; i--) {
    printf("nums[%d] = %d\n", i, nums[i]);
  }

  return 0;
}