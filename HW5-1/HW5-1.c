#include <stdio.h>

int case1(char);

void main()
{
	char i;
	int newcase1, count;
	for (count = 0; count < 3; count++)
	{
		printf("Enter a character:");
		scanf_s(" %c", &i);
		newcase1 = case1(i);
		if (newcase1 == 1)
		{
			printf("%c is in Uppercase\n\n", i);
		}
		else if (newcase1 == 0)
		{
			printf("%c is in Lowercase\n\n", i);
		}
		else
		{
			printf("%c is not a character\n\n", i);
		}
	}
}

int  case1(char c)
{
	printf("\n%c\n", c);
	if (c >= 65 && c <= 90)
	{
		return 1;
	}
	else if (c >= 97 && c <= 122)
	{
		return 0;
	}
}