// 14. Program to generate sum of N natural numbers and their squares

#include <stdio.h>

void main() {
    int n, i;
    int sum = 0, squareSum = 0;
    clrscr();
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
        squareSum += i * i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);
    printf("Sum of squares of first %d natural numbers = %d\n", n, squareSum);

    getch();
}
