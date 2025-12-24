// 49. Create an employee file, read and display the details on console.

#include <stdio.h>
#include <conio.h>
#include <string.h>

struct employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
};

void main() {
    FILE *fp;
    struct employee emp;
    int n, i;
    clrscr();
    printf("Enter number of employees: ");
    scanf("%d", &n);
    getchar(); 

    fp = fopen("employee.txt", "w"); 
    if(fp == NULL) {
        printf("Cannot create file");
        getch();
        return 0;
    }

    // Input employee details and write to file
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d details:\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp.id);
        getchar(); // clear buffer

        printf("Name: ");
        gets(emp.name);

        printf("Designation: ");
        gets(emp.designation);

        printf("Salary: ");
        scanf("%f", &emp.salary);
        getchar(); 

        fprintf(fp, "%d %s %s %.2f\n", emp.id, emp.name, emp.designation, emp.salary);
    }

    fclose(fp);

    // Read and display file content
    fp = fopen("employee.txt", "r");
    if(fp == NULL) {
        printf("Cannot open file");
        getch();

    }

    printf("\nEmployee Details:\n");
    printf("ID\tName\tDesignation\tSalary\n");

    while(fscanf(fp, "%d %s %s %f", &emp.id, emp.name, emp.designation, &emp.salary) != EOF) {
        printf("%d\t%s\t%s\t%.2f\n", emp.id, emp.name, emp.designation, emp.salary);
    }

    fclose(fp);

    getch();

}
