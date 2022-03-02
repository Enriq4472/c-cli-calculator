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

	if(option == 1)
	{
		// Showing result for sum
		printf("\nFinal result = %.2f\n", sum(num1,num2));

	}

	else if(option == 2)
	{
		// Showing result for subtraction
		printf("\nFinal result = %.2f\n", subtraction(num1,num2));
	}

	else if(option == 3)
	{
		// Showing result for multiplication
		printf("\nFinal result = %.2f\n", multiplication(num1,num2));
	}

	else if(option == 4)
	{
		// Showing result for division
		printf("\nFinal result = %.2f\n", division(num1,num2));
	};

	return 0;
}
