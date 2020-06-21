#ifndef _PEOPLE_IO_
#define _PEOPLE_IO_

#include <stdio.h>
#include <string.h>
typedef struct {
  char name[256];
  int age;
  int sex;
} people;

extern void inputPeople(people *data);
extern void showPeople(people data);
#endif