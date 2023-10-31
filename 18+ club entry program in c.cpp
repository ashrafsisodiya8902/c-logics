#include <stdio.h>

int main() {
  int age;
  char name[20];

  printf("Please enter your age: ");
  scanf("%d", &age);

  printf("Please enter your name: ");
  scanf("%s", name);

  if (age >= 18) {
    printf("Welcome, %s! You are allowed to enter the club.\n", name);
  } else {
    printf("Sorry, %s. You are not allowed to enter the club. You must be at least 18 years old.\n", name);
  }

  return 0;
}