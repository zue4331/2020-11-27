#include <stdio.h>
#include "inf.h"

int main() {
	Person person;
	printf("Please input your name¡G\n");
	scanf_s("%s", &person.name, 8);

	printf("Please input your gender(0 is for woman and 1 is for man)\n");
	scanf_s("%d", &person.gender);

	printf("Please input your age¡G\n");
	scanf_s("%d", &person.age);

	printf("Hi¡I%s\n", person.name);

	if (person.gender == 0)
		printf("You're %d years-old woman.\n", person.age);
	else
		printf("You're %d years-old man.\n", person.age);

	return 0;
}