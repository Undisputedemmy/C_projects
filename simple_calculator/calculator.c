#include <stdio.h>

/**
 * This is a simple calculator program
 * It performs simple arithmetic
 */

int main()
{
	char operator;
	double first, second;
	printf("Enter the operator (+, -, /, *): ");
	scanf("%c", &operator);


	printf("Enter two numbers one by one: ");
	scanf("%lf %lf", &first, &second);

	switch (operator)
	{
	case '+':
		printf("%lf + %lf = %lf", first, second, (first + second));
		break;
	case '-':
		printf("%lf - %lf = %lf", first, second, (first - second));
		break;
	case '*':
		printf("%lf * %lf = %lf", first, second, (first * second));
		break;
	case '/':
		if ( second != 0.0 )
			printf("%lf / %lf = %lf", first, second, (first / second));
		else
			printf("Divide by zero situation ");
		break;
	default:
			printf("invalid operator");
	return 0;
	}
}

