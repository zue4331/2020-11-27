#include<stdio.h>

typedef struct _student {
	char nu[7];
	char c[20];
	char na[20];
	int s[3];
}student;

void sub(student *p) {
	for (int i = 0; i < 3; i++) {
		(p + i)->s[0] += 10;
		(p + i)->s[1] += 10;
		(p + i)->s[2] += 10;
	}
}
