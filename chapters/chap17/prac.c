#include <stdio.h>
#include <string.h>

typedef struct {
  int number;
  char name[64];
  int avg;
} student;

int main(void) {
  FILE *file;
  student students[4];
  students[0].number = 1;
  strcpy(students[0].name, "野比のび太");
  students[0].avg = 0;

  students[1].number = 2;
  strcpy(students[1].name, "源静香");
  students[1].avg = 90;

  students[2].number = 3;
  strcpy(students[2].name, "剛田武");
  students[2].avg = 40;

  students[3].number = 4;
  strcpy(students[3].name, "骨川スネ夫");
  students[3].avg = 70;

  file = fopen("test.csv", "w");

  fwrite(students, sizeof(students), 1, file);

  fclose(file);

  return 0;
}