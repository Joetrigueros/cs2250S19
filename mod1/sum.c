#include <stdio.h>

int main()
{
	// Task: Define two integers
	
	// Display their values
	
	// Display the sum of them
	int number1  = 1;
	int number2 = 5;
	printf("Please enter an integer value\n");
	// To capture user input use the scanf() function
	// Use same placeholders as printf: %d for integers
	// BUT remember to use the Address operator (&) before the
	// variable name, &number1
	scanf("%d", &number1);
	printf("The value of number 1 is = %d\n", number1);
	
	printf("Please enter another integer value\n");
	scanf("%d", &number2);
	printf("The value of number 2 is = %d\n", number2);
	
	printf("The sum of %d + %d is = %d\n", number1, number2, number1 + number2);

	return 0;


}
