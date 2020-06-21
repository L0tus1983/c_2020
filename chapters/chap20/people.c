#include "people.h";

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