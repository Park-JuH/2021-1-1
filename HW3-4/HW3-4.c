#include <stdio.h>

void main()
{
	int num, a = 2;
	printf("Enter a number: ");
	scanf_s("%d", &num);
	if (num == 1)
	{
		printf("%d is not a prime number.", num);
	}
	for (a = 2; a < num; a++)
	{
		if (num % a == 0)
		{
			printf("\n%d is not a prime number.\n", num);
			break;
		}
	}
	if (a == num)
	{
		printf("\n%d is a prime number.", num);
	}
}