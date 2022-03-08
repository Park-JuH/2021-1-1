#include <stdio.h>

void main()
{
	int num;
	int b, c, d;
	printf("Enter a five-digit number :\n");
	scanf_s("%d", &num);

	if ((num % 10000) < 1000)
	{
		b = 0;
	}
	else if ((num % 10000) >= 1000 && (num % 10000) < 2000)
	{
		b = 1;
	}
	else if ((num % 10000) >= 2000 && (num % 10000) < 3000)
	{
		b = 2;
	}
	else if ((num % 10000) >= 3000 && (num % 10000) < 4000)
	{
		b = 3;
	}
	else if ((num % 10000) >= 4000 && (num % 10000) < 5000)
	{
		b = 4;
	}
	else if ((num % 10000) >= 5000 && (num % 10000) < 6000)
	{
		b = 5;
	}
	else if ((num % 10000) >= 6000 && (num % 10000) < 7000)
	{
		b = 6;
	}
	else if ((num % 10000) >= 7000 && (num % 10000) < 8000)
	{
		b = 7;
	}
	else if ((num % 10000) >= 8000 && (num % 10000) < 9000)
	{
		b = 8;
	}
	else if ((num % 10000) >= 9000 && (num % 10000) < 10000)
	{
		b = 9;
	}
	if ((num % 1000) < 100)
	{
		c = 0;
	}
	else if ((num % 1000) >= 100 && (num % 1000) < 200)
	{
		c = 1;
	}
	else if ((num % 1000) >= 200 && (num % 1000) < 300)
	{
		c = 2;
	}
	else if ((num % 1000) >= 300 && (num % 1000) < 400)
	{
		c = 3;
	}
	else if ((num % 1000) >= 400 && (num % 1000) < 500)
	{
		c = 4;
	}
	else if ((num % 1000) >= 500 && (num % 1000) < 600)
	{
		c = 5;
	}
	else if ((num % 1000) >= 600 && (num % 1000) < 700)
	{
		c = 6;
	}
	else if ((num % 1000) >= 700 && (num % 1000) < 8000)
	{
		c = 7;
	}
	else if ((num % 1000) >= 800 && (num % 1000) < 900)
	{
		c = 8;
	}
	else if ((num % 1000) >= 900 && (num % 1000) < 1000)
	{
		c = 9;
	}
	if ((num % 100) < 10)
	{
		d = 0;
	}
	else if ((num % 100) >= 10 && (num % 100) < 20)
	{
		d = 1;
	}
	else if ((num % 100) >= 20 && (num % 100) < 30)
	{
		d = 2;
	}
	else if ((num % 100) >= 30 && (num % 100) < 40)
	{
		d = 3;
	}
	else if ((num % 100) >= 40 && (num % 100) < 50)
	{
		d = 4;
	}
	else if ((num % 100) >= 50 && (num % 100) < 60)
	{
		d = 5;
	}
	else if ((num % 100) >= 60 && (num % 100) < 70)
	{
		d = 6;
	}
	else if ((num % 100) >= 70 && (num % 100) < 80)
	{
		d = 7;
	}
	else if ((num % 100) >= 80 && (num % 100) < 90)
	{
		d = 8;
	}
	else if ((num % 100) >= 90 && (num % 100) < 100)
	{
		d = 9;
	}
	printf("%d   %d   %d   %d   %d", num / 10000, b, c, d, num % 10);
}