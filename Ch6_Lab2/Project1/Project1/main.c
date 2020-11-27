#include<stdio.h>
#include"inf.h"

int main(void) {
	order ord1 = { "AHK08A1024", {1994, 3,8}, 1487 };
	order ord2 = { "USA08A1025", {2015, 5, 20}, 54530 };
	order ord3 = { "UNK08A1028", {2020, 8, 7}, 6638613 };

	printf("   ***************************\n");
	printf("   *         訂單資料        *\n");
	printf("   ***************************\n");

	printf("==========================================\n");
	printf("訂單編號        訂貨日期          訂貨金額\n");
	printf("==========================================\n");

	printf("%-10s %8d/%02d/%02d   NT$%10d\n", ord1.n,
		ord1.date.y, ord1.date.m, ord1.date.d, ord1.a);

	printf("%-10s %8d/%02d/%02d   US$%10d\n", ord2.n,
		ord2.date.y, ord2.date.m, ord2.date.d, ord2.a);

	printf("%-10s %8d/%02d/%02d   HK$%10d\n", ord3.n,
		ord3.date.y, ord3.date.m, ord3.date.d, ord3.a);

	return 0;
}