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
		printf("1.���ϱ� 2.���� 3.���ϱ� 4.������ 5.������");
		scanf_s("%d", &n);
		if (n == 5) {
			break;
		}
		printf("���ڸ� �Է��ϼ��� : ");
		scanf_s("%d %d", &a, &b);
		printf("����� ����մϴ� : ");

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
			printf("�ٽ� �Է��ϼ��� :"); 
			break;
		}
	}
}