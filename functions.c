//This is the line causing issue in the conflict branch
//This is the second line causing issue in the conflict branch
//Functionality to add, subtract, multiply,divide
//with each option added in seprate commit

#include <stdio.h>

int main() 
{
	printf("Maths Functions\n");
	int first, second, add, subtract, multiply;
	float divide, remainder;
	
	printf("Enter first integer: ");
	scanf("%d", &first);
	printf("Enter second integer: ");
	scanf("%d", &second);
	
	add = first + second;
	subtract = first - second;
	multiply = first * second;
	divide = first / second;
	remainder = first % second;
	
	printf("Addition = %d\n", add);
	printf("Subtraction = %d\n", &subtract);
	printf("Multiply = %d\n", &multiply);
	printf("Divide = %d\n", &divide);
	printf("Remainder = %d\n", &remainder);

	printf("Function Completed\n");
	
	return 0;
}
