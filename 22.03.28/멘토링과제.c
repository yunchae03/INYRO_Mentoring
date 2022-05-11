#include <stdio.h>

int main(void)
{
	int sum = 1;
	for (int i = 1; i < 6; i++) {
		sum = sum * i;
	}
	printf("sum = %d", sum);
	return 0;
}