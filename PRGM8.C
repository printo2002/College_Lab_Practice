// 8. Program to find the lowest of 3 numbers using nested if statement.


#include <stdio.h>
#include <conio.h>
void main()
{
    int low, first, second, third;
    clrscr();
    printf("Enter 1st number:\n");
    scanf("%d", &first);
    printf("Enter 2nd number:\n");
    scanf("%d", &second);
    printf("Enter 3rd number:\n");
    scanf("%d", &third);

    if (first < second)
    {
	if (first < third)
	    low = first;
	else
	    low = third;
    }
    else
    {
	if (second < third)
	    low = second;
	else
	    low = third;
    }

    printf("%d is the lowest number.", low);
    
getch();
}
