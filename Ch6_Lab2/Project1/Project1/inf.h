#include<stdio.h>

typedef struct _dates {
	int y, m, d;
}dates;

typedef struct _order {
	char n[11];
	dates date;
	int a;
}order;
