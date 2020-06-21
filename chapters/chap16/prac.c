
#include <stdio.h>
#include <string.h>

typedef struct {
  char name[64];
  int age;
  int jender;  // 0:male, 1:female, 2:other
} profile;

void inputData(profile[]);
void dispData(profile[]);

int main(void) {
  profile persons[3];
  inputData(persons);
  dispData(persons);

  return 0;
}

void inputData(profile persons[]) {
  int num;
  char str[64];
  for (int i = 0; i < 3; i++) {
    printf("*** %d人目 ***\n", i + 1);
    printf("名前入力：");
    scanf("%s", str);
    strcpy(persons[i].name, str);
    printf("年齢入力：");
    scanf("%d", &num);
    persons[i].age = num;
    printf("性別入力(0:男性 1:女性 2:その他)：");
    scanf("%d", &num);
    persons[i].jender = num;
  }
}

void dispData(profile persons[]) {
  char str[32];
  for (int i = 0; i < 3; i++) {
    printf("*** %d人目 ***\n", i + 1);
    printf("名前：%s\n", persons[i].name);
    printf("年齢：%d\n", persons[i].age);
    switch (persons[i].jender) {
      case 0:
        strcpy(str, "Male");
        break;
      case 1:
        strcpy(str, "Female");
        break;
      case 2:
        strcpy(str, "Other");
        break;
      default:
        strcpy(str, "Unknown");
        break;
    }
    printf("性別：%s\n", str);
  }
}