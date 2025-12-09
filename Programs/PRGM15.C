// 15.Program to find the occurrences of a digit in a number

#include <stdio.h>

void main() {
    int num, digit, count = 0, remainder;
    clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    while (num != 0) {
	remainder = num % 10;
	if (remainder == digit)
	{
	    count++;
	}
	num = num / 10;
    }

    printf("The digit %d occurs %d times.\n", digit, count);
    getch();
}
