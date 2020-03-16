/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Project 1
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         Mar 15th, 2020
//    FILE:         user_interface.c
//    DESCRIPTION:  The interface to control the program.
//
****************************************************************************/

/**
 * 
 * TODO:
 * ADD SUCCESS AND FAILURE FLAGS TO ALL FUNCTIONS
 * FORMATTING
 * MAKEFILE
 * NOT WANTING TO DIE
 * 
**/

#include <stdio.h>
#include <string.h>
#include "database.c"

int debugMode;

void displayMenu(void);
void getAddress(char [], int size);

/***************************************************************************
//
//    FUNCTIONNAME: main
//    DESCRIPTION:  The main function that runs the program
//    PARAMETERS:   argc    (int)       : command
//                  *argv   (char [])   : pointer
//
****************************************************************************/

int main(int argc, char *argv[])
{
    struct record * start = NULL;

    int choice;

    char tempChoice[3];
    char tempAddress[80];
    char tempAccountNumber[25];
    char tempName[25];

    int accountNumber;
    char name[25];
    char address[80];

    if (argc == 1)
    {
        debugMode = 0;
        readFile(&start, "file.txt");
    } 
    else if (argc == 2 && strcmp(argv[1], "debug") == 0)
    {
        debugMode = 1;
        printf("**********************\n");
        printf("*DEBUG MODE ACTIVATED*\n");
        printf("**********************\n");
        readFile(&start, "file.txt");
    } 
    else 
    {
        printf("Invalid Arguments!\n");
        printf("If you would like to run the program in debugmode, use 'debug' as the argument.\n");
        choice = 6;
    }

    while (choice != 6) 
    {
        displayMenu();
        fgets(tempChoice, sizeof(tempChoice), stdin);
        choice = atoi(tempChoice);
        if (choice < 1 || choice > 6)
        {
            printf("Invalid choice. Please try again.\n");
        }

        if (choice == 1)
        {
            printf("Please give the account a number: \n");
            fgets(tempAccountNumber, sizeof(tempAccountNumber), stdin);
            accountNumber = atoi(tempAccountNumber);
            
            while (accountNumber <= 0) {
                printf("The account number cannot be below or zero!\n");
                printf("Please give the account a number: \n");
                fgets(tempAccountNumber, sizeof(tempAccountNumber), stdin);
                accountNumber = atoi(tempAccountNumber);
            }
            
            printf("Please enter their name: \n");
            fgets(tempName, sizeof(tempName), stdin);
            strcpy(name, tempName);
            name[strlen(name) - 1] = '\0';

            printf("Please enter their address: \n");
            printf("Type '#' on a new line to finish typing.\n");
            getAddress(address, sizeof(tempAddress));

            addRecord(&start, accountNumber, name, address);

            printf("You've created a new record for: %s\n", name);
            printf("Account Number: #%d\n", accountNumber);
            printf("Account Name: %s\n", name);
            printf("Account Address: %s\n", address);
            printf("\nPress enter to continue.\n");
            getchar();
        } 
        else if (choice == 2)
        {
            printf("Please enter the account number you wish to view: \n");
            fgets(tempAccountNumber, sizeof(tempAccountNumber), stdin);
            accountNumber = atoi(tempAccountNumber);

            printRecord(start, accountNumber);
            printf("\nPress enter to continue.\n");
            getchar();
        }
        else if (choice == 3)
        {
            printAllRecords(start);
            printf("\nPress enter to continue.\n");
            getchar();
        }
        else if (choice == 4)
        {
            printf("Please enter which account number you wish to modify: \n");
            fgets(tempAccountNumber, sizeof(tempAccountNumber), stdin);
            accountNumber = atoi(tempAccountNumber);

            printf("Please enter their new address\n");
            printf("Type '#' on a new line to finish typing.\n");
            getAddress(address, sizeof(tempAddress));

            modifyRecord(start, accountNumber, address);
            printf("\nPress enter to continue.\n");
            getchar();
        }
        else if (choice == 5)
        {
            printf("Please enter the account number you wish to delete: \n");
            fgets(tempAccountNumber, sizeof(tempAccountNumber), stdin);
            accountNumber = atoi(tempAccountNumber);
            deleteRecord(&start, accountNumber);
            printf("\nPress enter to continue.\n");
            getchar();
        }
    }

    if (choice == 6 && debugMode == 1)
    {
        printf("Program exiting...\n");
    }

    writeFile(start, "file.txt");
    cleanUp(start);
    return 0;
}


/***************************************************************************
//
//    FUNCTIONNAME: displayMenu
//    DESCRIPTION:  Displays the main menu
//    PARAMETERS:   NONE
//
****************************************************************************/

void displayMenu()
{
        printf("\t\t=====Project 1 Banking=====\n");
        printf("\t\t What would you like to do?\n");
        printf("\t\t     Choose an option.\n");
        printf("-------------------------------------------------------------\n");
        printf("1. Add a new record in the database\n");
        printf("2. Print information about a record using the account number\n");
        printf("3. Print all records in the database\n");
        printf("4. Modify the address field of a record specified by account number\n");
        printf("5. Delete an existing record using the account number\n");
        printf("6. Quit\n");
        printf("-------------------------------------------------------------\n");
}

/***************************************************************************
//
//    FUNCTIONNAME: getAddress
//    DESCRIPTION:  Gets the given address and determines if the entry is finished
//    PARAMETERS:   address   (char[])  : The address given for the account
//                  size      (int)     : The max size of the address
//
****************************************************************************/

void getAddress(char address[], int size)
{
    char tempAddress[size];

    if(debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: getAddress();\n");
        printf("Parameters Passed:\n");
        printf("Account Address: %s\n", address);
        printf("Size: %d\n", size);
        printf("*********************************************\n");
    }

    fgets(tempAddress, sizeof(tempAddress), stdin);

    if (tempAddress[strlen(address) - 2] != '#')
    {
        strcpy(address, tempAddress);

        while (tempAddress[strlen(tempAddress) - 2] != '#')
        {
            fgets(tempAddress, sizeof(tempAddress), stdin);
            strcat(address, tempAddress);
        }
    }
    else
    {
        strcpy(address, tempAddress);
    }

    address[strlen(address) - 3] = address[strlen(address) - 2];
    address[strlen(address) - 2] = address[strlen(address) - 1];
    address[strlen(address) - 1] = '\0';
    address[strlen(address) - 2] = '\0';
}