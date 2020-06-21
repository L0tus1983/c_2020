#include <stdio.h>

int main(void) {
  // 西暦年を入力すると、その年にオリンピックが
  // 開催されるか表示する
  // 可能であれば、夏季と冬季の区別も表示してほしい

  // 定義
  int year;

  // 入力
  printf("西暦年数を入力:");
  scanf("%d", &year);

  // 判断
  // winter olympic
  // 1994 1998 2002 2006 2010 2014
  if (year % 2 == 0 && year % 4 != 0) {
    printf(" %d 年は冬季オリンピックが開催\n", year);
  }

  // summer olympic
  // 1996 2000 2004 2008 2012 2016
  if (year % 4 == 0) {
    printf(" %d 年は夏季オリンピックが開催\n", year);
  }
}