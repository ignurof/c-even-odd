#include <stdio.h>

int main() {
	int num;
	
	printf("Find out if the input number is even or odd!\n\n");
	printf("Enter number: ");
	// Receive from input stream, specifies int format, using & to specify the adress to the variable
	scanf_s("%d", &num);

	// % modulo division meaning what is remaining after division of num / 2
	//if (num % 2 == 0)
	//	printf("%d is even\n", num);
	//else
	//	printf("%d is odd\n", num);

	// If-else ternary
	num % 2 == 0 ? printf("%d is even\n", num) : printf("%d is odd\n", num);

	return 0;
}