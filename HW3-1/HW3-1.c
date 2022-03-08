#include <stdio.h>

void main()
{
	int a, b, c;
	printf("Enter a five-digit number: ");
	scanf_s("%d", &a);
	while (a < 10000 || a >= 100000)
	{
		printf("Not a valid value\n");
		printf("Enter a five-digit number: ");
		scanf_s("%d", &a);
	}
	b = a / 10000;
	c = (a - b * 10000) / 1000;
	if (a / 10000 == a % 10 && a % 100 / c >= 10)
	{
		printf("\n%d is a palindrome", a);
	}
	else
	{
		printf("\n%d is not a palindrome", a);
	}
}