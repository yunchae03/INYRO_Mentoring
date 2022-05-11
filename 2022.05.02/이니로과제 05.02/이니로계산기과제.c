#include<stdio.h>

int plus(int a, int b) {
	return a + b;
}
int minus(int a, int b) {
	return a - b;
}
int mu(int a, int b) {
	return a * b;
}
int di(int a, int b) {
	return a / b;
}

int main()
{

	while (1) {
		int a, b;
		int n;
		printf("1.더하기 2.빼기 3.곱하기 4.나누기 5.나가기");
		scanf_s("%d", &n);
		if (n == 5) {
			break;
		}
		printf("숫자를 입력하세요 : ");
		scanf_s("%d %d", &a, &b);
		printf("결과를 출력합니다 : ");

		switch (n) {
		case 1:
			printf("%d + %d = %d\n\n", a, b, plus(a, b)); 
			break;
		case 2:
			printf("%d - %d = %d\n\n", a, b, minus(a, b)); 
			break;
		case 3:
			printf("%d * %d = %d\n\n", a, b, mu(a, b)); 
			break;
		case 4:
			printf("%d / %d = %d\n\n", a,  b, di(a, b)); 
			break;
		default:
			printf("다시 입력하세요 :"); 
			break;
		}
	}
}