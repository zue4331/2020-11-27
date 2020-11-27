#include<stdio.h>
#include"inf.h"

int main(void) {
	student stud[3] = { {"970101", "四子一甲", "王小明", 61, 71, 81},
					   {"970102", "四子一甲", "李中熊", 92, 82, 72},
					   {"970103", "四子一甲", "張大成", 73, 63, 83} };
	student *ps;
	ps = stud;
	printf("\n");
	printf("=========================================================\n");
	printf("   學號  班級\t姓名\t  國文  英文  數學\n");
	printf("=========================================================\n");

	for (int i = 0; i < 3; i++) {
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i) ->nu, 
				(ps + i) ->c, (ps + i) ->na, (ps + i) ->s[0],
				(ps + i) ->s[1], (ps + i) ->s[2]);
	}

	printf("\t呼叫函式前\n\n");
	sub(ps);
	printf("\n\t呼叫函式前\n");

	for (int i = 0; i < 3; i++) {
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->nu,
			(ps + i)->c, (ps + i)->na, (ps + i)->s[0],
			(ps + i)->s[1], (ps + i)->s[2]);
	}
	printf("\n");
	return 0;	
}