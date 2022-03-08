#include <stdio.h>

void main()
{
	int a, b, c;
	float d = 1.0;
	printf("Type a posotive float number (N) : ");
	scanf_s("%d", &a);
	printf("\nType an integer number (P) : ");
	scanf_s("%d", &b);
	for (c = 1; c <= b; c++)
	{
		d = d * a;
	}
	printf("\nresult is %f", d);
}