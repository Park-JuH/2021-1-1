#include <stdio.h>

void main()
{
	int a, b;
	int c = 0;
	printf("����⵵�� �Է��ϼ���:");
	scanf_s("%d", &a);
	printf("����⵵�� �Է��ϼ���:");
	scanf_s("%d", &b);

	c = a - b;
	printf("���� (��)����: %d", c);
}