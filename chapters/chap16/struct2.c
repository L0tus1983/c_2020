#include <stdio.h>
#include <string.h>

typedef struct {
  int year;       // 学年
  int class;      // クラス
  int number;     // 出席番号
  char name[64];  // 名前
  double high;    // 身長
  double weight;  // 体重
} student;

void student_print(student);

int main(void) {
  student data;
  data.year   = 3;
  data.class  = 4;
  data.number = 18;
  strcpy(data.name, "WARIO");
  data.high   = 168.2;
  data.weight = 72.4;

  student_print(data);
  return 0;
}

void student_print(student data) {
  printf("data.year = %d\n", data.year);
  printf("data.class = %d\n", data.class);
  printf("data.number = %d\n", data.number);
  printf("data.name = %s\n", data.name);
  printf("data.high = %f\n", data.high);
  printf("data.weight = %f\n", data.weight);
}