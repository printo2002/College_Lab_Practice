//19. Program to print prime numbers within a given range.

#include<stdio.h>
#include<conio.h>

void main()
{
    int start, end, i, j, flag;

    clrscr();

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d are:\n", start, end);

    for(i = start; i <= end; i++)
    {
	if(i < 2)
	    continue;

	flag = 0;

	for(j = 2; j <= i/2; j++)
	{
	    if(i % j == 0)
	    {
		flag = 1;
		break;
	    }
	}

	if(flag == 0)
	    printf("%d ", i);
    }

    getch();
}

