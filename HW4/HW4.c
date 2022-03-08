#include <stdio.h>

void main()
{
	char line1[81], line2[81];
	int i = 0, j = 0;

	printf("Type a sentence : ");
	gets(line1);
	printf("Type a sentence : ");
	gets(line2);

	while (line1[i] != '\0')
	{
		i++;
	}
	while (line2[j] != '\0')
	{
		if (line2[j] == '"')
		{
			if (j == 0)
			{
				j++;
				i--;
			}
		}
		line1[i] = line2[j];
		j++;
		i++;
	}
	line1[i] = '\0';
	puts(line1);

}