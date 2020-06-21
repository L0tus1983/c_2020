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

void student_print(student *);

int main(void) {
  student data[10];

  data[1].year = 3;
  strcpy(data[1].name, "Luigi");

  return 0;
}

void student_print(student *data) {
  printf("data.year = %d\n", data->year);
  printf("data.class = %d\n", data->class);
  printf("data.number = %d\n", data->number);
  printf("data.name = %s\n", data->name);
  printf("data.high = %.1f\n", data->high);
  printf("data.weight = %.1f\n", data->weight);
}