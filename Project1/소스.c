#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include <stdlib.h>

int main(void) {
	int dice[7] = { 0, };
	
	for (int i = 0; i < 100000; i++) {
		dice[(rand() % 6) + 1]++;
	}
	//�� ���ڰ� ���� ȸ�� ���, ���� ����� ���
	for (int i = 1; i <= 6; i++) {
		printf("%d: %.1f%% ", i, (float)dice[i] / 1000);
	}
	return 0;
}