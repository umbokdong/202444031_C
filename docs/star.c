#include<stdio.h>
#include<stdlib.h>

int main() {
	system("title 정수 1개 입력 후 출력");

	int cnt;
	printf("대문자 출력\n");
	for (int i = 5; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;

}
