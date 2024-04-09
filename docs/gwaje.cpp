#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)

	//void log() {
	//	printf("수행할 업무를 고르세요.\n");
	//	printf("현재 돈 보기 m, 송금 s, 입금 i, 출금 c\n");
	//	
	//}

int main() {
	int  yongmoney = 0, number;
	long long my_money = 100000000, calnumber = 0;
	char yesOrNo = 'y', upmu;

	printf("당신의 계좌번호를 입력하세요.");
	scanf("%d", &number);


	while (yesOrNo == 'y') {
		if (number == 1) {
		
			printf("수행할 업무를 고르세요.\n");
			printf("현재 돈 보기 m, 송금 s, 입금 i, 출금 c: ");
			scanf(" %c", &upmu);

		}
		else {
			exit(0);
		}

		switch (upmu) {
		case 's':
			printf("송금액을 결정하세요.\n");

			scanf("%d", &calnumber);
			if (calnumber < my_money) {
				my_money = my_money - calnumber;
				yongmoney = yongmoney + calnumber;
			}
			else {
				printf("당신의 돈보다 많은 금액은 입력하실 수 없습니다.\n");
			}

			printf("업무 계속 진행 y, 아니면 n\n\n");
			scanf(" %c", &yesOrNo);

			if (yesOrNo == 'y') {
				break;
			}
			else {
				break;
			}
		

		case 'm':
			printf("당신의 돈은 : %d\n\n", my_money);
			printf("업무 계속 진행 y, 아니면 n\n\n");
			scanf(" %c", &yesOrNo);
			if (yesOrNo == 'y') {
				break;
			}
			else {
				break;
			}
		case 'i':
			printf("입금액을 결정하세요.\n");
			scanf("%d", &calnumber);
			my_money = my_money + calnumber;
			printf("업무 계속 진행 y, 아니면 n\n\n");
			scanf(" %c", &yesOrNo);
			if (yesOrNo == 'y') {
				break;
			}
			else {
				break;
			}

		case 'c':
			printf("출금액을 결정하세요.\n");
			scanf("%d", &calnumber);
			if (calnumber < my_money) {
				my_money = my_money - calnumber;
			}
			else {
				printf("당신의 돈보다 많은 금액은 입력하실 수 없습니다.\n");
			}
			printf("업무 계속 진행 y, 아니면 n\n\n");
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