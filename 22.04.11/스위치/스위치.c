#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	printf("1~5사이의 정수를 입력해주세요.");
	scanf("%d", &n);
	switch (n) {
	case 1:
		printf("1은 one");
		break;
	case 2:
		printf("2는 two");
		break;
	case 3:
		printf("3은 three");
		break;
	case 4:
		printf("4는 four");
		break;
	case 5:
		printf("5는 five");
		break;
	default:
		printf("잘못입력했습니다.");
	}
	return 0;
}