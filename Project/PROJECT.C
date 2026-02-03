/*
   18-Nov-2025
   Bank Management system...
   Developed in C
*/

// Declaring header
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#define yellow "\033[33m"
#define cyan "\033[36m"
#define red "\033[31m"
#define white "\033[37m"

#define width 80
#define height 22

int op, choice, nav, count, y, page;

// Declaring struct
// Account Structure
struct account{
    int a_id;
    char a_name[20];
    char a_addr[40];
    int a_bal;
}a1;

// Transaction Structure
struct transaction{
    int t_id;
    char a_no[20];
    char t_date[12];
    int t_type;
    int t_amt;
}t1;

// Loan Structure
struct loan{
    int l_id;
    int a_no;
    char l_date[12];
    char l_type[20];
    int l_amt;
    int l_dur;
}l1;

// Declaration
// Menu
int operationMenu();
int manageAccount();
int manageTransaction();
int manageLoan();

// Creations
int createAccount();
int createTransaction();
int createLoan();

// Edit
int editAccount();
int editTransaction();
int editLoan();

// Delete
int deleteAccount();
int deleteTransaction();
int deleteLoan();

// View
int viewAccount();
int viewTransaction();
int viewLoan();

//utlitize
void gotoxy( int, int);
void delay();
void tuiFrame();
void drawLine(char, int);
void clearInside();
void clearScreen();
void renderScreen(const char *title);
void screenMainMenu();
int nextButton();
int exiting();
int bottomBar();
void screenAccounts();
void screenTransaction();
void screenLoan();


//move cursor
void gotoXY(int x, int y) {
    printf("\033[%d;%dH", y, x);  // \033 ansi value of escape, H move cursor.
}

//delayer
void delay(){
    gotoXY(52, height);
    printf(cyan"Press any key to continue...");
    gotoXY(79, height);
    getch();
    return;
}

// Styling
void tuiFrame() {

    int i,j;

    // TOP BORDER
    for(i = 0; i < width; i++) printf(cyan"-");
    printf("\n");

    // SIDES
    for(i = 0; i < height - 2; i++) {
	printf(cyan"|");
	for(j = 0; j < width - 2; j++) {
	    printf(" ");
	}
	printf(cyan"|\n");
    }

    // BOTTOM BORDER
    for(i = 0; i < width; i++) printf("-");
    printf("\n");
}

void drawLine(char ch, int limit){
    int i;
    for(i = 0; i < limit; i++){
	printf(cyan"%c", ch);
    }
}

// Clear Inside
void clearInside() {
    int x,y;
    for (y = 3; y <= 22; y++) {  // Leave title line intact
	gotoXY(2, y);
	for (x = 0; x < 76; x++)
	    printf(" ");
    }
}

void clearScreen() {
    printf("\033[2J\033[1;1H");
}

void renderScreen(const char *title){
    int len = strlen(title);
    int y = 0;
    y = (80 - len)/2;
    tuiFrame();
    gotoXY(1,1);
    drawLine('-', 80);       // Draw the fixed 80x22 frame
    gotoXY(1,2);
    drawLine('-', 80);
    gotoXY(y,2);        // Put title inside the box
    printf("%s", title );
    printf(cyan);
    clearInside();      // Clear the content area for next screen
}


void screenMainMenu() {
    renderScreen(yellow"Main Menu");   // clears and draws frame
    gotoXY(10, 4);  printf(white"1. Manage Accounts");
    gotoXY(10, 5);  printf("2. Manage Transactions");
    gotoXY(10, 6);  printf("3. Manage Loans");

    gotoXY(10, 8);  printf("0. Exit");
}

int nextButton(){
    return 0;
}

int exiting(){
    gotoXY(39,20);
    printf(red"Exiting....");
    exit(0);
    return 0;
}

int bottomBar() {
    int op;
    gotoXY(10,20);
    printf("9. Exit");

    gotoXY(71,20);
    printf("0. Next");

    gotoXY(39,20);
    scanf("%d", &op);

    switch (op) {
        case 0: return 0;   // next page
        case 9: return 9;   // exit
        default:
            gotoXY(30,20);
            printf("Enter valid choice...");
            getch();
            return bottomBar(); 
    }
}


void screenAccounts() {
    clearInside();
    gotoXY(30, 4);  renderScreen(yellow"ACCOUNT MENU");
    gotoXY(10, 6);  printf(white"1. Add Account");
    gotoXY(10, 7);  printf("2. Edit Account");
    gotoXY(10, 8);  printf("3. Delete Account");
    gotoXY(10, 9);  printf("4. View Account");
    gotoXY(10, 11);  printf("9. Back");
    gotoXY(10, 12); printf("0. Exit");
}

void screenTransaction() {
    clearInside();
    gotoXY(30, 4);  renderScreen(yellow"TRANSACTION MENU");
    gotoXY(10, 6);  printf(white"1. Add Transaction");
    gotoXY(10, 7);  printf("2. Edit Transaction");
    gotoXY(10, 8);  printf("3. Delete Transaction");
    gotoXY(10, 9);  printf("4. View Transaction");
    gotoXY(10, 11);  printf("9. Back");
    gotoXY(10, 12); printf("0. Exit");
}

void screenLoan() {
    clearInside();
    gotoXY(30, 4);  renderScreen(yellow"LOAN MENU");
    gotoXY(10, 6);  printf(white"1. Add Loan");
    gotoXY(10, 7);  printf("2. Edit Loan");
    gotoXY(10, 8);  printf("3. Delete Loan");
    gotoXY(10, 9);  printf("4. View Loan");
    gotoXY(10, 11);  printf("9. Back");
    gotoXY(10, 12); printf("0. Exit");
}



// Main func
int main(){

    // Declaring Menu Option
    // This Will be the one function triggered
    // All the actions are followed
    renderScreen(yellow"Bank Management System");
    gotoXY(32, 11);
    printf("Welcome to Bank MIS");
    gotoXY(32, 12);
    printf("-------------------");
    gotoXY(59, 22);
    printf("Enter to continue...");
    getch();
    operationMenu();
    return 0;
}



// All Banking Operations
int operationMenu(){
    while(1){
    // A pause which hlp with a gap
    screenMainMenu();
    gotoXY(10,13);
    printf("Enter Choice...\n");
    gotoXY(14,14);
	scanf("%d", &choice);

        switch (choice){
            case 1:
                manageAccount();
                break;

            case 2:
                manageTransaction();
                break;

            case 3:
                manageLoan();
                break;

            case 0:
                exiting();
                break;

            default:
                printf("Invalid Choice.\n");
	    }
    }
}

// Insert Operation
int manageAccount(){

    screenAccounts();
    gotoXY(10,13);
    printf("Enter Choice...\n");
    gotoXY(14,14);
    scanf("%d", &op);

    switch (op){
	    case 1:
		    createAccount();
		    break;
	    case 2:
            editAccount();
	        break;
	    case 3:
            deleteAccount();
	        break;
        case 4:
            viewAccount();
            break;
        case 9:
            operationMenu();
            break;
        case 0:
            exiting();
        break;
        default:
            printf("Invalid Operation.");
    }
    return 0;
}

// Edit Opeeration
int manageTransaction(){

    screenTransaction();
    gotoXY(10,13);
    printf("Enter Choice...\n");
    gotoXY(14,14);
    scanf("%d", &op);

    switch (op){
	    case 1:
		    createTransaction();
		    break;
	    case 2:
            editTransaction();
	        break;
	    case 3:
            deleteTransaction();
	        break;
        case 4:
            viewTransaction();
            break;
	    case 9:
	        operationMenu();
	        break;
        case 0:
            exiting();
            break;
        default:
            printf("Invalid Operation.");
    }
    return 0;
}

// Delete Operation
int manageLoan(){

    screenLoan();
    gotoXY(10,13);
    printf("Enter Choice...\n");
    gotoXY(14,14);
    scanf("%d", &op);

    switch (op){
	    case 1:
		    createLoan();
		    break;
	    case 2:
            editLoan();
	        break;
	    case 3:
            deleteLoan();
	        break;
        case 4:
            viewLoan();
            break;
	    case 9:
	        operationMenu();
	        break;
        case 0:
            exiting();
            break;
        default:
            printf("Invalid Operation.");
    }
    return 0;
}



// Validations for Unique ID
int validAcc(int id){
    FILE *fAcc = fopen("accounts.txt", "r");
    while (fscanf(fAcc, "%d|%[^|]|%[^|]|%d\n",
		  &a1.a_id, a1.a_name, a1.a_addr, &a1.a_bal) != EOF) {
        if(a1.a_id == id){
            fclose(fAcc);
            return 0;
        }
    }
    fclose(fAcc);
    return 1;
}

int validTran(int id){
    FILE *fTran = fopen("transaction.txt", "r");
    while (fscanf(fTran, "%d|%[^|]|%[^|]|%d|%d\n",
		  &t1.t_id, t1.a_no, t1.t_date,&t1.t_type, &t1.t_amt) != EOF) {

        if(t1.t_id == id){
            fclose(fTran);
            return 0;
        }
    }
    fclose(fTran);
    return 1;
}

int validLoan(int id){

    FILE *fLoan = fopen("loan.txt", "r");

    while (fscanf(fLoan, "%d|%d|%[^|]|%[^|]|%d|%d\n",
		  &l1.l_id, &l1.a_no, l1.l_date,l1.l_type, &l1.l_amt, &l1.l_dur) != EOF) {

        if (l1.l_id == id){
            fclose(fLoan);
            return 0;
        }
    }

    fclose(fLoan);
    return 1;
}



// FILE INSERTION OPERATIONS
// Inserting data into Accounts file
int createAccount() {
    int id;
    FILE *fAcc = fopen("accounts.txt", "a");
    if (fAcc == NULL) {
	gotoXY(10,4);
	printf(red"Error opening Accounts file.\n");
	return 1;
    }


    do{
        renderScreen("Create Account");
        gotoXY(10,4);
        printf(white"Enter Account Number: ");
        scanf("%d", &id);

        if(!validAcc(id)){
            gotoXY(10,6);
            printf(yellow"Account No. already exists! Enter another.");
            printf(white);
            delay();
        }
    }while (!validAcc(id));
    
    a1.a_id = id;

    gotoXY(10,6);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", a1.a_name);
    gotoXY(10,8);
    printf("Enter Address: ");
    scanf(" %[^\n]", a1.a_addr);
    gotoXY(10,10);
    printf("Enter Balance: ");
    scanf("%d", &a1.a_bal);
    

    fprintf(fAcc, "%d|%s|%s|%d\n", a1.a_id, a1.a_name, a1.a_addr, a1.a_bal);
    fclose(fAcc);
    gotoXY(10,16);
    printf(yellow"Account Created Successfully.\n\n");
    delay();
    return 0;
}

// Inserting data into Transactions file
int createTransaction() {

    int id;
    FILE *fTran = fopen("transaction.txt", "a");
    if (fTran == NULL) {
	gotoXY(10,4);
	printf(red"Error opening Transactions file.\n");
	return 1;
    }



    do{
        renderScreen("Create Transaction");
        gotoXY(10,4);
        printf(white"Enter Transaction ID: ");
        scanf("%d", &id);

        if(!validTran(id)){
            gotoXY(10,6);
            printf(yellow"Transaction ID already exists! Enter another.");
            printf(white);
            delay();
        }
    }while (!validTran(id));
    
    t1.t_id = id;
    gotoXY(10,6);
    printf("Enter Account Number: ");
    scanf(" %[^\n]", t1.a_no);
    gotoXY(10,8);
    printf("Enter Transaction Date (DD-MM-YYYY): ");
    scanf(" %[^\n]", t1.t_date);
    gotoXY(10,10);
    printf("Enter Transaction Type (enter no. 1 = Debit, 2 = Credit): ");
    scanf("%d", &t1.t_type);
    gotoXY(10,12);
    printf("Enter Transaction Amount: ");
    scanf("%d", &t1.t_amt);

    fprintf(fTran, "%d|%s|%s|%d|%d\n",
	    t1.t_id, t1.a_no, t1.t_date, t1.t_type, t1.t_amt);
    fclose(fTran);

    gotoXY(10,16);
    printf(yellow"Transaction Data Added Successfully.\n\n");
    delay();
    return 0;
}

// Inserting data into Loan file
int createLoan() {
    int id;
    FILE *fLoan = fopen("loan.txt", "a");
    if (fLoan == NULL) {
        gotoXY(10,4);
	printf(red"Error opening Loans file.\n");
	return 1;
    }

    do{
        renderScreen("Create Loan");
        gotoXY(10,4);
        printf(white"Enter Loan ID: ");
        scanf("%d", &id);

        if(!validLoan(id)){
            gotoXY(10,6);
            printf(yellow"ID already exists! Enter another.");
            printf(white);
        }
    }while (!validLoan(id));
    
    l1.l_id = id;
 
    gotoXY(10,6);
    printf("Enter Account Number: ");
    scanf("%d", &l1.a_no);
    gotoXY(10,8);
    printf("Enter Loan Date (DD-MM-YYYY): ");
    scanf(" %[^\n]", l1.l_date);
    gotoXY(10,10);
    printf("Enter Loan Type (secure, unsecure, business): ");
    scanf(" %[^\n]", l1.l_type);
    gotoXY(10,12);
    printf("Enter Loan Amount: ");
    scanf("%d", &l1.l_amt);
    gotoXY(10,14);
    printf("Enter Loan Duration: ");
    scanf("%d", &l1.l_dur);
    
    fprintf(fLoan, "%d|%d|%s|%s|%d|%d\n",
	    l1.l_id, l1.a_no, l1.l_date, l1.l_type, l1.l_amt, l1.l_dur);
    fclose(fLoan);

    gotoXY(10,16);
    printf(yellow"Loan Data Added Successfully.\n\n");
    getch();
    return 0;
}



// FILE EDIT OPERATIONS
// Edit data in Account file
int editAccount() {
    FILE *fAcc = fopen("accounts.txt", "r");
    FILE *temp = fopen("temp_acc.txt", "w");

    int id, found = 0;

    renderScreen("Edit Account");
    gotoXY(10,4);
    printf(white"Enter Account ID: ");
    scanf("%d", &id);

    while (fscanf(fAcc, "%d|%[^|]|%[^|]|%d\n",
		  &a1.a_id, a1.a_name, a1.a_addr, &a1.a_bal) != EOF) {

        if (a1.a_id == id) {
            found = 1;
            gotoXY(10,6);
            printf("New Account Name: ");
            scanf(" %[^\n]",a1.a_name);
            gotoXY(10,8);
            printf("New Address: ");
            scanf(" %[^\n]",a1.a_addr);
            gotoXY(10,10);
            printf("New Balance: ");
            scanf("%d", &a1.a_bal);
        }

        fprintf(temp, "%d|%s|%s|%d\n",
            a1.a_id, a1.a_name, a1.a_addr, a1.a_bal);
    }

    fclose(fAcc);
    fclose(temp);

    remove("accounts.txt");
    rename("temp_acc.txt", "accounts.txt");

    if (found){
        gotoXY(10,12);
	    printf(yellow"Accounts Updated!\n");
    }
    else{
        gotoXY(10,12);
	    printf(red"Id Not Found!\n");
    }
    getch();
    return 0;
}

// Edit data in Transaction file
int editTransaction() {
    FILE *fTran = fopen("transaction.txt", "r");
    FILE *temp = fopen("temp_tran.txt", "w");
    int id, found = 0;

    renderScreen("Edit Transaction");
    gotoXY(10,4);
    printf(white"Enter Transaction ID: ");
    scanf("%d", &id);

    while (fscanf(fTran, "%d|%[^|]|%[^|]|%d|%d\n",
		  &t1.t_id, t1.a_no, t1.t_date,&t1.t_type, &t1.t_amt) != EOF) {

	if (t1.t_id == id) {
	    found = 1;
        gotoXY(10,6);
	    printf("New Account Number: ");
	    scanf(" %[^\n]", t1.a_no);
        gotoXY(10,8);
	    printf("New Transaction Date: ");
	    scanf(" %[^\n]", t1.t_date);
        gotoXY(10,10);
	    printf("New Transaction Type: ");
	    scanf("%d", &t1.t_type);
        gotoXY(10,12);
	    printf("New Transaction Amount: ");
	    scanf("%d", &t1.t_amt);
	}

	fprintf(temp, "%d|%s|%s|%d|%d\n",
		t1.t_id, t1.a_no, t1.t_date,t1.t_type, t1.t_amt);
    }

    fclose(fTran);
    fclose(temp);
    remove("transaction.txt");
    rename("temp_tran.txt", "transaction.txt");

    if (found){
    gotoXY(10,14);
	printf(yellow"Transaction Updated!");
    }
    else{
    gotoXY(10,14);
	printf(red"Not Found!");
    }
    delay();
    return 0;
}

// Edit data in Loan file
int editLoan() {
    FILE *fLoan = fopen("loan.txt", "r");
    FILE *temp = fopen("temp_loan.txt", "w");
    int id, found = 0;

    renderScreen("Edit Loan");
    gotoXY(10,4);
    printf(white"Enter Loan ID: ");
    scanf("%d", &id);

    while (fscanf(fLoan, "%d|%d|%[^|]|%[^|]|%d|%d\n",
		  &l1.l_id, &l1.a_no, l1.l_date,l1.l_type, &l1.l_amt, &l1.l_dur) != EOF) {

	if (l1.l_id == id) {
	    found = 1;
        gotoXY(10,6);
	    printf("New Account Number: ");
	    scanf("%d", &l1.a_no);
        gotoXY(10,8);
	    printf("New Loan Date: ");
	    scanf(" %[^\n]",l1.l_date);
        gotoXY(10,10);
	    printf("New Loan Type: ");
	    scanf(" %[^\n]",l1.l_type);
        gotoXY(10,12);
	    printf("New Loan Amount: ");
	    scanf("%d", &l1.l_amt);
        gotoXY(10,14);
	    printf("New Duration: ");
	    scanf("%d", &l1.l_dur);
	}

	fprintf(temp, "%d|%d|%s|%s|%d|%d\n",
		l1.l_id, l1.a_no, l1.l_date,l1.l_type, l1.l_amt, l1.l_dur);
    }

    fclose(fLoan);
    fclose(temp);
    remove("loan.txt");
    rename("temp_loan.txt", "loan.txt");

    if (found){
        gotoXY(10,16);
	    printf(yellow"Updated!");
    }
    else{
        gotoXY(10,16);
	    printf(red"Not Found!");
    }
    delay();
    return 0;
}



// FILE DELETE OPERATIONS
// Delete data in Account file
int deleteAccount() {
    int found = 0;
    FILE *fAcc = fopen("accounts.txt", "r");
    FILE *temp = fopen("temp_acc.txt", "w");

    int id;

    renderScreen("Delete Account");
    gotoXY(10,4);
    printf(white"Enter Account ID to Delete: ");
    scanf("%d", &id);

    while (fscanf(fAcc, "%d|%[^|]|%[^|]|%d\n",
		  &a1.a_id, a1.a_name, a1.a_addr, &a1.a_bal) != EOF) {
        if (a1.a_id == id){
            found = 1;
        }

        if (a1.a_id != id) {
            fprintf(temp, "%d|%s|%s|%d\n",
                a1.a_id, a1.a_name, a1.a_addr, a1.a_bal);
        }
    }

    if (found == 0){
        printf(red"Cann't find ID...");
        printf(white);
    }
    fclose(fAcc);
    fclose(temp);

    remove("accounts.txt");
    rename("temp_acc.txt", "accounts.txt");
    gotoXY(10,10);
    if(found == 1){
        printf(yellow"Deleted!\n");
        printf(white);
    }
    delay();
    return 0;
}

// Delete data in Transaction file
int deleteTransaction() {
    int found = 0;
    FILE *fTran = fopen("transaction.txt", "r");
    FILE *temp = fopen("temp_tran.txt", "w");

    int id;

    renderScreen("Delete Transaction");
    gotoXY(10,4);
    printf(white"Enter Transaction ID to Delete: ");
    scanf("%d", &id);

    while (fscanf(fTran, "%d|%[^|]|%[^|]|%d|%d\n",
		  &t1.t_id, t1.a_no, t1.t_date, &t1.t_type, &t1.t_amt) != EOF) {

        if (t1.t_id == id){
            found = 1;
        }
        if (t1.t_id != id) {
            fprintf(temp, "%d|%s|%s|%d|%d\n",
                t1.t_id, t1.a_no, t1.t_date, t1.t_type, t1.t_amt);
        }
    }

    if (found == 0){
        printf(red"Cann't find ID...");
        printf(white);
    }

    fclose(fTran);
    fclose(temp);

    remove("transaction.txt");
    rename("temp_tran.txt", "transaction.txt");
    gotoXY(10,10);
    if(found == 1){
        printf(yellow"Deleted!\n");
        printf(white);
    }
    delay();
    return 0;
}

// Delete data in Loan file
int deleteLoan() {
    int found = 0;
    FILE *fLoan = fopen("loan.txt", "r");
    FILE *temp = fopen("temp_loan.txt", "w");


    int id;

    renderScreen("Delete Loan");
    gotoXY(10,4);
    printf(white"Enter Loan ID to Delete: ");
    scanf("%d", &id);

    while (fscanf(fLoan, "%d|%d|%[^|]|%[^|]|%d|%d\n",
		  &l1.l_id, &l1.a_no, l1.l_date, l1.l_type, &l1.l_amt, &l1.l_dur) != EOF) {
        if (l1.l_id == id){
            found = 1;
        }

    
        if (l1.l_id != id) {
            fprintf(temp, "%d|%d|%s|%s|%d|%d\n",
                l1.l_id, l1.a_no, l1.l_date, l1.l_type, l1.l_amt, l1.l_dur);
        }

    }

    if (found == 0){
        printf(red"Cann't find ID...");
        printf(white);
    }

    fclose(fLoan);
    fclose(temp);

    remove("loan.txt");
    rename("temp_loan.txt", "loan.txt");
    gotoXY(10,10);
    if(found == 1){
        printf(yellow"Deleted!\n");
        printf(white);
    }
    delay();
    return 0;
}



// FILE VIEW OPERATIONS
// View data in Account file
int viewAccount() {
    FILE *fAcc = fopen("accounts.txt", "r");
    if (!fAcc) {
        renderScreen("View Account");
        gotoXY(10,4); printf("No accounts found.");
        getch();
        return 1;
    }

    page = 1;

    while (1) {
        renderScreen("View Account");

        count = 0;
        y = 6;

        gotoXY(10,4);
        printf("Accounts - Page %d", page);

        while (count < 2 && fscanf(fAcc, "%d|%[^|]|%[^|]|%d\n",
               &a1.a_id, a1.a_name, a1.a_addr, &a1.a_bal) != EOF) {

            gotoXY(10, y++); printf("Account ID : %d", a1.a_id);
            gotoXY(10, y++); printf("Name       : %s", a1.a_name);
            gotoXY(10, y++); printf("Address    : %s", a1.a_addr);
            gotoXY(10, y++); printf("Balance    : %d", a1.a_bal);

            gotoXY(10, y++); drawLine('-', 60);
            count++;

            if (y >= 18) break;
        }

        if (count == 0) break;

        nav = bottomBar();
        if (nav == 9) break;

        page++;
    }

    fclose(fAcc);
    return 0;
}


// View data in Transaction file
int viewTransaction() {
    FILE *fTran = fopen("transaction.txt", "r");
    if (!fTran) {
        renderScreen("View Transaction");
        gotoXY(10,4); printf("No transactions found.");
        getch();
        return 1;
    }

    page = 1;

    while (1) {
        renderScreen("View Transaction");

        count = 0;
        y = 6;

        gotoXY(10,4);
        printf("Transactions - Page %d", page);

        while (count < 2 && fscanf(fTran, "%d|%[^|]|%[^|]|%d|%d\n",
               &t1.t_id, t1.a_no, t1.t_date, &t1.t_type, &t1.t_amt) != EOF) {

            gotoXY(10, y++); printf("Transaction ID : %d", t1.t_id);
            gotoXY(10, y++); printf("Account No     : %s", t1.a_no);
            gotoXY(10, y++); printf("Date           : %s", t1.t_date);
            gotoXY(10, y++); printf("Type           : %d", t1.t_type);
            gotoXY(10, y++); printf("Amount         : %d", t1.t_amt);

            gotoXY(10, y++); drawLine('-', 60);
            count++;

            if (y >= 18) break;
        }

        if (count == 0) break;

        nav = bottomBar();
        if (nav == 9) break;

        page++;
    }

    fclose(fTran);
    return 0;
}

// View data in Loan file
int viewLoan() {
    FILE *fLoan = fopen("loan.txt", "r");
    if (!fLoan) {
        renderScreen("View Loan");
        gotoXY(10,4); printf("No loans found.");
        getch();
        return 1;
    }

    page = 1;

    while (1) {
        renderScreen("View Loan");

        count = 0;
        y = 6;

        gotoXY(10,4);
        printf("Loan Records - Page %d", page);

        while (count < 2 && fscanf(fLoan,
                "%d|%d|%[^|]|%[^|]|%d|%d\n",
                &l1.l_id, &l1.a_no, l1.l_date, l1.l_type,
                &l1.l_amt, &l1.l_dur) != EOF) {

            gotoXY(10, y++); printf("Loan ID      : %d", l1.l_id);
            gotoXY(10, y++); printf("Account No   : %d", l1.a_no);
            gotoXY(10, y++); printf("Date         : %s", l1.l_date);
            gotoXY(10, y++); printf("Type         : %s", l1.l_type);
            gotoXY(10, y++); printf("Amount       : %d", l1.l_amt);
            gotoXY(10, y++); printf("Duration     : %d months", l1.l_dur);

            gotoXY(10, y++); drawLine('-', 60);

            count++;

            if (y >= 18) break;
        }

        if (count == 0) break;

        nav = bottomBar();
        if (nav == 9) break;

        page++;
    }

    fclose(fLoan);
    return 0;
}