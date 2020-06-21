#include <stdio.h>
// 0 - 100の範囲で入力された複数の数値の中から、
// 最大値と最小値を求めて表示する

// 最大値と最小値はmain関数以外の一つの関数の中で求める

// 入力された数値を格納する配列の要素数は10とし
// それ以上入力されたら、エラーが出ても致し方ない

void func(int *array);

int main(void) {
  int input;
  int array[10];
  for (int i = 0; array[i - 1] != -1; i++) {
    scanf("%d", &input);
    if (input >= 0 && input <= 100) {
      array[i] = input;
    } else {
      array[i] = -1;
    }
  }

  func(array);

  return 0;
}

void func(int *array) {
  int max = array[0], min = array[0];
  for (int i = 0; array[i] != -1; i++) {
    if (max < array[i + 1]) {
      max = array[i + 1];
    }
  }
  for (int j = 0; array[j] != -1; j++) {
    if (min > array[j + 1] && array[j + 1] != -1) {
      min = array[j + 1];
    }
  }
  printf("最大値： %d\n", max);
  printf("最小値： %d\n", min);
}