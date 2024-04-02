#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int a;
	printf("단을 입력하세요.");
	scanf("%d", &a);

	for(int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", a, i, a * i);
	}
	printf("세 번째 프로그램입니다.\n");
	printf("줄을 바꾸어 출력합니다.\n");
	printf("여기까지 출력하고\n");
	printf("줄을 바꿉니다.\n");

	printf("%d * %d = %d\n", 2, 1, 2 * 1);
	printf("%d * %d = %d\n", 2, 2, 2 * 2);
	printf("%d * %d = %d\n", 2, 3, 2 * 3);
	printf("%d * %d = %d\n", 2, 4, 2 * 4);
	printf("%d * %d = %d\n", 2, 5, 2 * 5);
	printf("%d * %d = %d\n", 2, 6, 2 * 6);
	printf("%d * %d = %d\n", 2, 7, 2 * 7);
	printf("%d * %d = %d\n", 2, 8, 2 * 8);
	printf("%d * %d = %d\n", 2, 9, 2 * 9);

}