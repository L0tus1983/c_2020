#include <stdio.h>
#include <string.h>

// 学生Data
struct student {
  int year;       // 学年
  int class;      // クラス
  int number;     // 出席番号
  char name[64];  // 名前
  double high;    // 身長
  double weight;  // 体重
};

int main(void) {
  struct student data, data2;

  data.year   = 3;
  data.class  = 4;
  data.number = 18;
  strcpy(data.name, "WARIO");
  data.high   = 168.2;
  data.weight = 72.4;

  data2 = data;
  printf("data.year = %d   year = %d \n", data.year, year);
  printf("data.class = %d   class = %d \n", data.class, class);
  printf("data.number = %d   number = %d \n", data.number, number);
  printf("data.name = %s   name = %s \n", data.name, name);
  printf("data.high = %f   high = %f \n", data.high, high);
  printf("data.weight = %f   weight = %f \n", data.weight, weight);

  return 0;
}