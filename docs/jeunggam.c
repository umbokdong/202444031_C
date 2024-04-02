#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	int val, a;
	a = 8;
	val = ++a;
	
	printf("a는 8일 때");
	printf("val = %d, a = %d", val, a);

	int val1, a1;
	a1 = 8;
	val = a1++;

	printf("a는 8일 때");
	printf("val = %d, a = %d", val1, a1);

}