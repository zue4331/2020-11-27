#include<stdio.h>
#include"inf.h"

int main(void) {
	student stud[3] = { {"970101", "�|�l�@��", "���p��", 61, 71, 81},
					   {"970102", "�|�l�@��", "������", 92, 82, 72},
					   {"970103", "�|�l�@��", "�i�j��", 73, 63, 83} };
	student *ps;
	ps = stud;
	printf("\n");
	printf("=========================================================\n");
	printf("   �Ǹ�  �Z��\t�m�W\t  ���  �^��  �ƾ�\n");
	printf("=========================================================\n");

	for (int i = 0; i < 3; i++) {
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i) ->nu, 
				(ps + i) ->c, (ps + i) ->na, (ps + i) ->s[0],
				(ps + i) ->s[1], (ps + i) ->s[2]);
	}

	printf("\t�I�s�禡�e\n\n");
	sub(ps);
	printf("\n\t�I�s�禡�e\n");

	for (int i = 0; i < 3; i++) {
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->nu,
			(ps + i)->c, (ps + i)->na, (ps + i)->s[0],
			(ps + i)->s[1], (ps + i)->s[2]);
	}
	printf("\n");
	return 0;	
}