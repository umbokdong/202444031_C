#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

	//void log() {
	//	printf("������ ������ ������.\n");
	//	printf("���� �� ���� m, �۱� s, �Ա� i, ��� c\n");
	//	
	//}

int main() {
	int  yongmoney = 0, number;
	long long my_money = 100000000, calnumber = 0;
	char yesOrNo = 'y', upmu;

	printf("����� ���¹�ȣ�� �Է��ϼ���.");
	scanf("%d", &number);


	while (yesOrNo == 'y') {
		if (number == 1) {
		
			printf("������ ������ ������.\n");
			printf("���� �� ���� m, �۱� s, �Ա� i, ��� c: ");
			scanf(" %c", &upmu);

		}
		else {
			exit(0);
		}

		switch (upmu) {
		case 's':
			printf("�۱ݾ��� �����ϼ���.\n");

			scanf("%d", &calnumber);
			if (calnumber < my_money) {
				my_money = my_money - calnumber;
				yongmoney = yongmoney + calnumber;
			}
			else {
				printf("����� ������ ���� �ݾ��� �Է��Ͻ� �� �����ϴ�.\n");
			}

			printf("���� ��� ���� y, �ƴϸ� n\n\n");
			scanf(" %c", &yesOrNo);

			if (yesOrNo == 'y') {
				break;
			}
			else {
				break;
			}
		

		case 'm':
			printf("����� ���� : %d\n\n", my_money);
			printf("���� ��� ���� y, �ƴϸ� n\n\n");
			scanf(" %c", &yesOrNo);
			if (yesOrNo == 'y') {
				break;
			}
			else {
				break;
			}
		case 'i':
			printf("�Աݾ��� �����ϼ���.\n");
			scanf("%d", &calnumber);
			my_money = my_money + calnumber;
			printf("���� ��� ���� y, �ƴϸ� n\n\n");
			scanf(" %c", &yesOrNo);
			if (yesOrNo == 'y') {
				break;
			}
			else {
				break;
			}

		case 'c':
			printf("��ݾ��� �����ϼ���.\n");
			scanf("%d", &calnumber);
			if (calnumber < my_money) {
				my_money = my_money - calnumber;
			}
			else {
				printf("����� ������ ���� �ݾ��� �Է��Ͻ� �� �����ϴ�.\n");
			}
			printf("���� ��� ���� y, �ƴϸ� n\n\n");
			scanf(" %c", &yesOrNo);
			if (yesOrNo == 'y') {
				break;
			}
			else {
				break;
			}
		}
	}
}