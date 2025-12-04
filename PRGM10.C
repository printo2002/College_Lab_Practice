// 10. Program to convert decimal numbers to different bases using switch.
#include<stdio.h>
#include<stdlib.h>

void contobin(int num);
void contooct(int num);
void contohexa(int num);

int main()
{
    int num, choice;
    clrscr();
    while (1)
    {
	printf("\nChoose conversion\n");
	printf("1. Binary\n");
	printf("2. Octal\n");
	printf("3. Hexadecimal\n");
	printf("4. Exit\n");
	printf("Enter choice:\t");
	scanf("%d", &choice);
	if(choice != 4){
	printf("\Enter a decimal no:\t");
	scanf("%d",&num);
	}
	switch (choice)
	{
	case 1:
            contobin(num);
            break;

        case 2:
            contooct(num);
            break;

        case 3:
            contohexa(num);
            break;

        case 4:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
        printf("\n");
    }

    return 0;
}

void contobin(int num)
{
    int bin[32], i = 0, j;

    if (num == 0)
    {
        printf("Binary:\t0\n");
        return;
    }

    while (num > 0)
    {
        bin[i++] = num % 2;
        num /= 2;
    }

    printf("Binary:\t");
    for (j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);
}

void contooct(int num)
{
    int oct[32], i = 0, j;

    if (num == 0)
    {
        printf("Octal:\t0\n");
        return;
    }

    while (num > 0)
    {
        oct[i++] = num % 8;
        num /= 8;
    }

    printf("Octal:\t");
    for (j = i - 1; j >= 0; j--)
        printf("%d", oct[j]);
}

void contohexa(int num)
{
    char hex[32];
    int i = 0, j, rem;

    if (num == 0)
    {
        printf("Hexadecimal:\t0\n");
        return;
    }

    while (num > 0)
    {
        rem = num % 16;
        hex[i++] = (rem < 10) ? rem + '0' : (rem - 10) + 'A';
        num /= 16;
    }

    printf("Hexadecimal:\t");
    for (j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
}
