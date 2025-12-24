// 44. Program to read the personal data (name, address, phone no etc…) of N people and 
//     search the details of a particular person using structures and functions.


#include<stdio.h>
#include<conio.h>
#include<string.h>

struct person {
    char name[50];
    char address[100];
    char phone[15];
};

// Function to read data

void readData(struct person p[], int n) 
{
    int i;
    for(i = 0; i < n; i++) 
    {
        printf("\nPerson %d\n", i + 1);

        printf("Enter name: ");
        gets(p[i].name);

        printf("Enter address: ");
        gets(p[i].address);

        printf("Enter phone number: ");
        gets(p[i].phone);
    }
}

// Function to search data

void searchData(struct person p[], int n) 
{
    char searchName[50];
    int i, found = 0;

    printf("\nEnter name to search: ");
    gets(searchName);

    for(i = 0; i < n; i++) 
     {
        if(strcmp(p[i].name, searchName) == 0)
        {
            printf("\n--- Person Found ---\n");
            printf("Name    : %s\n", p[i].name);
            printf("Address : %s\n", p[i].address);
            printf("Phone   : %s\n", p[i].phone);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("\nPerson not found");
}

void main() {
    struct person p[20];
    int n;

    printf("Enter number of people: ");
    scanf("%d", &n);
    getchar();   // clear buffer

    readData(p, n);
    searchData(p, n);

    getch();
}




