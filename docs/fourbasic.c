#include<stdio.h>

int plus(int a, int b) {
	return a + b;
}

int minus(int a, int b) {
	return a - b;
}

int multi(int a, int b) {
	return a * b;
}

float divide(int a, int b) {
	return a / b;
}




int main() {
	int c = 10;
	int d = 20;
	int result = 0;
	result = plus(c, d);
	printf("%d + %d = %d\n", c, d, result);
	result = minus(c, d);
	printf("%d - %d = %d\n", c, d, result);
	result = multi(c, d);
	printf("%d * %d = %d\n", c, d, result);
	result = divide(c, d);
	printf("%d / %d = %d\n", c, d, result);
}