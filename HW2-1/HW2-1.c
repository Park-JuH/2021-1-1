#include <stdio.h>

void main()
{
	int hour, min, sec;
	printf("\n Enter total time passed in seconds:\n");
	scanf_s("%d", &sec);
	printf("\n%d seconds is equivalent to:\n", sec);
	min = sec / 60;
	hour = min / 60;
	sec = sec % 60;
	printf("%d:%d:%d [hours : minutes : seconds]", hour, min, sec);
}