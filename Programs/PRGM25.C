// 25. Program to find factorial of a number using recursion.

#include <stdio.h>
#include <conio.h>

long factorial(int n) {
    if (n == 0 || n == 1) {
	return 1;
    }
    return n * factorial(n - 1);
}

void  main() {
    int num;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
	printf("Factorial of negative numbers is not defined.\n");
    } else {
	printf("Factorial of %d = %lld\n", num, factorial(num));
    }

    getch();
}

