#include <stdio.h>
#include <string.h>

typedef struct {
  char name[256];
  int age;
  int sex;
} people;

void inputPeople(people *data);
void showPeople(people data);

int main(void) {
  people data[3];
  for (int i = 0; i < 3; i++) {
    inputPeople(&data[i]);
  }

  for (int i = 0; i < 3; i++) {
    showPeople(data[i]);
  }
  return 0;
}

void inputPeople(people *data) {
  printf("Name:");
  scanf("%s", data->name);
  printf("Age:");
  scanf("%d", &data->age);
  printf("Sex(0..Male 1.. Female other.. Other):");
  scanf("%d", &data->sex);
  printf("\n");
}

void showPeople(people data) {
  char sex[16];

  printf("Name:%s\n", data.name);
  printf("Age :%d\n", data.age);
  if (data.sex == 0) {
    strcpy(sex, "Male");
  } else if (data.sex == 1) {
    strcpy(sex, "Female");
  } else {
    strcpy(sex, "Other");
  }
  printf("Sex :%s\n\n", sex);
}
