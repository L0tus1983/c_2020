#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char name[256];
  int age;
  int sex;
} people;

void inputPeople(people *data);
void showPeople(people data);

int main(void) {
  int i, count, datasize;
  people *data;

  datasize = 10;
  data     = malloc(sizeof(people) * datasize);

  count = 0;
  while (1) {
    inputPeople(&data[count]);
    if (data[count].age == -1) {
      break;
    }
    count++;

    if (count >= datasize) {
      datasize += 10;
      data = realloc(data, sizeof(people) * datasize);
    }
  }

  for (i = 0; i < count; i++) {
    showPeople(data[i]);
  }

  free(data);

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
