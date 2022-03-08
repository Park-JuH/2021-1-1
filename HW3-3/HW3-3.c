#include <stdio.h>

void main()
{
	int C = 30;
	printf("Celsius \tFahrenheit\n");
	for (C = 30; C <= 50; C++)
	{
		printf("%d \t = \t%f\n", C, C * 1.8 + 32);
	}
}