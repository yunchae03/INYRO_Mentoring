#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 0;
	int a, b;
	while (1) {
		printf("1. µ¡¼À, 2. »¬¼À, 3. °ö¼À, 4. ³ª´°¼À, 5.³ª°¡±â\n");
		scanf("%d", &i);
		if (i <= 5 && i > 0) {
			if (i == 5) {
				break;
			}
			printf("¼ýÀÚ µÎ°³¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä.");
			scanf("%d %d", &a, &b);
			if (i == 1) {
				printf("%d + %d = %d\n", a, b, a + b);
			}
			else if (i == 2) {
				if (a >= b) {
					printf("%d - %d = %d\n", a, b, a - b);
				}
				else if (a < b) {
					printf("%d - %d = %d\n", b, a, b - a);
				}
			}
			else if (i == 3) {
				printf("%d * %d = %d\n", a, b, a * b);
			}
			else if (i == 4) {
				printf("%d / %d = %d\n", a, b, a / b);
			}
		}
		else {
			printf("Àß¸øÀÔ·ÂÇÏ¼Ì½À´Ï´Ù.\n");
		}
	}
	return 0;
}