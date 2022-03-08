#include <stdio.h>

int qualityPoints(int);

void main()
{
	int avg, i;
	for (i = 0; i < 5; i++)
	{
		printf("Enter the student's average: ");
		scanf_s("%d", &avg);

		printf("%d on a 4-pints scale is %d\n\n", avg, qualityPoints(avg));
	}
}

int qualityPoints(int newavg)
{
	int i;
	if (newavg >= 90 && newavg <= 100)
	{
		i = 4;
	}
	else if (newavg >= 80 && newavg < 90)
	{
		i = 3;
	}
	else if (newavg >= 70 && newavg < 80)
	{
		i = 2;
	}
	else if (newavg >= 60 && newavg < 70)
	{
		i = 1;
	}
	else if (newavg >= 0 && newavg < 60)
	{
		i = 0;
	}
	else
	{
		printf("Not a valid value.");
	}
	return i;
}