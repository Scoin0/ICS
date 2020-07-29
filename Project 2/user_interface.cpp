/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Project 2
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         Apr 19, 2020
//    FILE:         user_interface.cpp
//    DESCRIPTION:  Most of this is ported directly from Project 1
//
****************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include "record.h"
#include "llist.h"

using namespace std;

#include "llist.cpp"

void displayMenu();

/***************************************************************************
//
//    FUNCTIONNAME: main
//    DESCRIPTION:  The main function that runs the program
//    PARAMETERS:   argc    (int)       : command
//                  *argv   (char [])   : pointer
//
****************************************************************************/

int function1()

{

    int a[10], *pa;

    a[1] = 4;

    pa = a;

    *pa = a[1];

    return a[1];

}

int main(int argc, char *argv[])
{
    #ifdef DEBUG
    cout << "**********************\n";
    cout << "*DEBUG MODE ACTIVATED*\n";
    cout << "**********************\n";
    #endif

    cout << function1();

    int accountNumber;
    char name[25];
    char address[80];
    int choice;

    llist list;
    llist mylist("file.txt");

    while (choice != 7)
    {
        displayMenu();
        cin >> choice;
        cin.clear();

        if (choice < 1 || choice > 7)
        {
            cout << "\nInvalid choice. Please try again. \n";
        }

        if (choice == 1)
        {
            cout << "Please give the account a number: \n";
            cin >> accountNumber;
            cin.clear();
            cin.ignore(256, '\n');

            while (accountNumber <= 0)
            {
                cout << "The account number cannot be below or zero!\n";
                cout << "Please give the account a number: \n";
                cin >> accountNumber;
                cin.clear();
                cin.ignore(256, '\n');
            }

            cout << "Please enter their name: \n";
            cin.getline(name, 25);

            cout << "Please enter their address: \n";
            cout << "Type '#' on a new line to finish typing.\n";
            cin.getline(address, 80, '#');
            cin.ignore(256, '\n');

            if (list.addRecord(accountNumber, name, address) == 0)
            {
                cout << "\nYou've created a new record for: " << name << "\n";
                cout << "Account Number: " << accountNumber << "\n";
                cout << "Account Name: " << name << "\n";
                cout << "Account Address: " << address << "\n";
                cout << "\nPress enter to continue...\n";
                cin.get();
                cin.ignore(256, '\n');
            }
            else
            {
                cout << "The record was not added to the list as it has a duplicate account number.\n";
                cout << "\nPress enter to continue...\n";
                cin.get();
                cin.ignore(256, '\n');
            }
        }
        else if (choice == 2)
        {
            cout << "Please enter the account number you wish to view: \n";
            cin >> accountNumber;
            cin.clear();
            if (list.printRecord(accountNumber) == 0)
            {
                cout << "The record has been printed.\n";
                cout << "\nPress enter to continue...\n";
                cin.get();
                cin.ignore(256, '\n');
            }
            else
            {
                cout << "The account you are trying to view does not exist.\n";
                cout << "\nPress enter to continue...\n";
                cin.get();
                cin.ignore(256, '\n');
            }
        }
        else if (choice == 3)
        {
            cout << "Printing all records...\n";
            cout << list;
            cout << "\nPress enter to continue...\n";
            cin.get();
            cin.ignore(256, '\n');
        }
        else if (choice == 4)
        {
            cout << "Please enter the account number you wish to modify: \n";
            cin >> accountNumber;
            cin.clear();
            cin.ignore(256, '\n');

            cout << "Please enter their address: \n";
            cout << "Type '#' on a new line to finish typing.\n";
            cin.getline(address, 80, '#');
            cin.ignore(256, '\n');

            if (list.modifyRecord(accountNumber, address) == 0)
            {
                cout << "The account's address has been modified.\n";
                cout << "\nPress enter to continue...\n";
                cin.get();
                cin.ignore(256, '\n');
            }
            else
            {
                cout << "The account you are trying to modify does not exist.\n";
                cout << "\nPress enter to continue...\n";
                cin.get();
                cin.ignore(256, '\n');
            }
            
        }
        else if (choice == 5)
        {
            cout << "Please enter the account number you wish to delete: \n";
            cin >> accountNumber;
            cin.clear();
            if (list.deleteRecord(accountNumber) == 0)
            {
                cout << "The account has been deleted.\n";
                cout << "\nPress enter to continue...\n";
                cin.get();
                cin.ignore(256, '\n');
            }
            else
            {
                cout << "The account you are trying to delete does not exist.\n";
                cout << "\nPress enter to continue...\n";
                cin.get();
                cin.ignore(256, '\n');
            }
        }
        else if (choice == 6)
        {
            list.reverse();
            cout << "The list has been reversed.\n";
            cout << "\nPress enter to continue...\n";
            cin.get();
            cin.ignore(256, '\n');
        }
    }

    if (choice == 7)
    {
        cout << "Shutting down...";
    }
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
    #ifdef DEBUG
    cout << "\n****************DEBUGMODE********************\n";
    cout << "\nFunction Called: displayMenu()\n";
    cout << "\nParameters Passed: NONE\n";
    cout << "\n*********************************************\n";
    #endif

    cout << "\t\t=====Project 2 Banking=====\n";
    cout << "\t\t What would you like to do?\n";
    cout << "\t\t     Choose an option.\n";
    cout << "-------------------------------------------------------------\n";
    cout << "1. Add a new record in the database\n";
    cout << "2. Print information about a record using the account number\n";
    cout << "3. Print all records in the database\n";
    cout << "4. Modify the address field of a record specified by account number\n";
    cout << "5. Delete an existing record using the account number\n";
    cout << "6. Reverse the list\n";
    cout << "7. Quit\n";
    cout << "-------------------------------------------------------------\n";
}