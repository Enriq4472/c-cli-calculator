#include <stdio.h>

float sum(float n1, float  n2)
{
	return (n1+n2);
}


float subtraction(float n1, float  n2)
{
	return (n1-n2);
}

float multiplication(float n1, float n2)
{
	return (n1*n2);
}

float division(float n1, float n2)
{
	return (n1/n2);
}
int main()
{
	float num1, num2;
	int option;

	// Collecting numbers
	printf("Enter your fist number: ");
	scanf("%f", &num1);
	printf("Enter your second number: ");
	scanf("%f", &num2);
	
	// Showing options
	printf("\nOptions:\n");
	printf("\n1 - Sum");
	printf("\n2 - Subtraction");
	printf("\n3 - Multiplication");
	printf("\n4 - Division");
	printf("\nEnter your desired option number: ");
	scanf("%d", &option);

	switch(option)
	{
		case (1):
		printf("\nFinal result = %.2f\n", sum(num1,num2));
		break;
		
		case (2):
		printf("\nFinal result = %.2f\n", subtraction(num1,num2));
		break;

		case (3):
		printf("\nFinal result = %.2f\n", multiplication(num1,num2));
		break;

		case (4):
		printf("\nFinal result = %.2f\n", division(num1,num2));
		break;

		default:
		printf("\nInvalid option.\n");

	}
	return 0;
}
