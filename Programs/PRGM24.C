// 24. Program to find sum of series 1! + 2! + 3! ...... N! Using Function.


#include<stdio.h>
#include<conio.h>
long factorial(int n) {
    long long fact = 1;
    int i;
    for (i = 1; i <= n; i++) {
	fact = fact * i;
    }
    return fact;
}

long sumOfSeries(int N) {
    long sum = 0;
    int i;
    for (i = 1; i <= N; i++) {
	sum += factorial(i);
    }
    return sum;
}

void main() {
    int N;
    long result;
    clrscr();

    printf("\n");
    printf("Enter the value of N:\t ");
    scanf("%d", &N);

    result = sumOfSeries(N);

    printf("Sum of series 1! + 2! + ... + %d! = %lld\n", N, result);

    getch();
}
