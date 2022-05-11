#include <stdio.h>

int main(void)
{
	int sum = 0;
	int a = 1;
	for (int i = 0; i < 10; i++;){
		sum = sum + a;
		a++;
	}
	printf("sum = %d", sum);
	return 0 ;
}