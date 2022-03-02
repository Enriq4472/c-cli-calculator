#include <stdio.h>

float sum(float n1, float  n2)
{
	return (n1+n2);
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
	printf("Options:\n");
	printf("\n 1 - Sum");
	printf("\nEnter your desired option number: ");
	scanf("%d", &option);

	if(option == 1)
	{
		// Showing result for sum
		printf("\nFinal result = %.2f\n", sum(num1,num2));

	};
	
	return 0;
}
