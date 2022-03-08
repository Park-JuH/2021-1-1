#include <stdio.h>

void main()
{
	int a, b;
	int c = 0;
	printf("현재년도를 입력하세요:");
	scanf_s("%d", &a);
	printf("출생년도를 입력하세요:");
	scanf_s("%d", &b);

	c = a - b;
	printf("나의 (만)나이: %d", c);
}