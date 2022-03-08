#include <stdio.h>

void main()
{
	float kg, meter, bmi;
	printf("Enter weightInKilograms :\n");
	scanf_s("%f", &kg);
	printf("Enter heightInMeters :\n");
	scanf_s("%f", &meter);
	bmi = kg / (meter * meter);

	printf("\nBMI : %f", bmi);
	if (bmi < 18.5)
	{
		printf("\nYou are underweight");
	}
	else if (bmi >= 18.5 && bmi <= 24.9)
	{
		printf("\nYou are normal");
	}
	else if (bmi >= 25 && bmi <= 29.9)
	{
		printf("\nYou are overweight");
	}
	else if (bmi >= 30)
	{
		printf("\nYou are obese");
	}
	else
	{
		printf("\nThe value is not correct.");
	}
}