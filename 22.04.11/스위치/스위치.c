#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	printf("1~5������ ������ �Է����ּ���.");
	scanf("%d", &n);
	switch (n) {
	case 1:
		printf("1�� one");
		break;
	case 2:
		printf("2�� two");
		break;
	case 3:
		printf("3�� three");
		break;
	case 4:
		printf("4�� four");
		break;
	case 5:
		printf("5�� five");
		break;
	default:
		printf("�߸��Է��߽��ϴ�.");
	}
	return 0;
}