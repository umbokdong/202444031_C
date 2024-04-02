#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int input = 0, year;
	printf("윤년이면 1, 아니면 0");
	printf("연도 입력 : ");
	scanf("%d", &input);

	year = ((input % 4 == 0) && (input % 100 != 0)) || (input % 400 == 0);

	printf("당신의 숫자는 %d", year);
}