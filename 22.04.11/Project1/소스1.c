#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {
	if (n == 1) {
		return n;
	}
	return n * factorial(n - 1);
}

int main(void) {
	int a;
	int result;
	printf("수 입력:");
	scanf("%d", &a);
	printf("결과: %d\n", factorial(a));

	return 0;
}