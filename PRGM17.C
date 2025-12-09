// 17. Program to print Fibonacci series up to a particular number.

#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,nextTerm;
    int a = 0, b = 1;

    printf("Enter the limit: \n");
    scanf("%d",&n);

    printf("%d %d ",a,b);

    for(i = 2; i < n; i++){
	nextTerm = a + b;
	printf("%d ",nextTerm);
	a = b;
	b = nextTerm;
    }

    getch();
}