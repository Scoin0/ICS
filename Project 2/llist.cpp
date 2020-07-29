/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Project 2
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         Apr 19, 2020
//    FILE:         llist.cpp
//    DESCRIPTION:  Function definitions for the llist class
//
****************************************************************************/

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include "record.h"
#include "llist.h"

using namespace std;


llist::llist()
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nConstructor Called: llist()\n";
        cout << "\nParameters Passed: NONE\n";
        cout << "\n*********************************************\n";
    #endif

    start = NULL;
    strcpy (fileName, "file.txt");
    readFile();
}

/***************************************************************************
//
//    FUNCTIONNAME: llist
//    DESCRIPTION:  Constructor for the llist class
//    PARAMETERS:   fileName    (char [])     : The file name for the database.
//
****************************************************************************/

llist::llist(char fileName[])
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nConstructor Called: llist(char fileName[])\n";
        cout << "\nParameters Passed: \n";
        cout << "\nFilename: " << fileName << "\n";
        cout << "\n*********************************************\n";
    #endif

    start = NULL;
    strcpy (this->fileName, fileName);
    readFile();
}

/***************************************************************************
//
//    FUNCTIONNAME: ~llist
//    DESCRIPTION:  Destructor for the llist class
//    PARAMETERS:   NONE
//
****************************************************************************/

llist::~llist()
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nDestructor Called: ~llist()\n";
        cout << "\nParameters Passed: NONE\n";
        cout << "\n*********************************************\n";
    #endif
    
    writeFile();
    cleanup();
}

/***************************************************************************
//
//    FUNCTIONNAME: addRecord
//    DESCRIPTION:  Adds a new record to the database
//    PARAMETERS:   uAccountNumber (int)        : account number added by the user
//                  uName          (char[])     : account name added by the user
//                  uAddress       (char[])     : account address added by the user
//    RETURNS:      0    : SUCCESS
//                  -1   : FAILURE
//
****************************************************************************/

int llist::addRecord(int uAccountNumber, char uName[], char uAddress[])
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nFunction Called: addRecord(int uAccountNumber, char uName[], char uAddress[])\n";
        cout << "\nParameters Passed: \n";
        cout << "\nAccount Number: " << uAccountNumber << "\n";
        cout << "\nAccount Name: " << uName << "\n";
        cout << "\nAccount Address: " << uAddress << "\n";
        cout << "\n*********************************************\n";
    #endif

    struct record * tempRecord;
    struct record * newRecord;
    int target;
    target = 0;

    newRecord = new struct record;
    newRecord->accountno = uAccountNumber;
    strcpy(newRecord->name, uName);
    strcpy(newRecord->address, uAddress);
    newRecord->next=NULL;

    if (start == NULL)
    {
        start = newRecord;
    }
    else
    {
        tempRecord = start;

        if (tempRecord->accountno == newRecord->accountno)
        {
           target = -1;
        }
        else
        {
            while (tempRecord->next != NULL)
            {
                tempRecord = tempRecord->next;
            }
            tempRecord->next = newRecord;
            newRecord->accountno = uAccountNumber;
            strcpy(newRecord->name, uName);
            strcpy(newRecord->address, uAddress);
            newRecord->next=NULL;   
        }
    }
    return target;
}

/***************************************************************************
//
//    FUNCTIONNAME: printRecord
//    DESCRIPTION:  Prints a record from the database
//    PARAMETERS:   uAccountNumber (int)       : account number added by the user
//    RETURNS:      0    : SUCCESS
//                  -1   : FAILURE
//
****************************************************************************/

int llist::printRecord(int uAccountNumber)
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nFunction Called: printRecord(int accountNumber)\n";
        cout << "\nParameters Passed: \n";
        cout << "\nAccount Number: " << uAccountNumber << "\n";
        cout << "\n*********************************************\n";
    #endif

    struct record * currentRecord;
    int target;

    currentRecord = start;
    target = -1;

    while (currentRecord != NULL)
    {
        if (currentRecord->accountno == uAccountNumber)
        {
            cout << "Account Number: " << currentRecord->accountno << "\n";
            cout << "Account Name: " << currentRecord->name << "\n";
            cout << "Account Address: " << currentRecord->address << "\n"; 
            target = 0;
        }
        currentRecord = currentRecord->next;
    }
    return target;
}

/***************************************************************************
//
//    FUNCTIONNAME: modifyRecord
//    DESCRIPTION:  Modifies the address of a specific account
//    PARAMETERS:   uAccountNumber (int)             : account number added by the user
//                  uAddress       (char[])          : account address added by the user
//    RETURNS:      0    : SUCCESS
//                  -1   : FAILURE
//
****************************************************************************/

int llist::modifyRecord(int uAccountNumber, char uAddress[])
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nFunction Called: modifyRecord(int uAccountNumber, char uAddress[])\n";
        cout << "\nParameters Passed: \n";
        cout << "\nAccount Number: " << uAccountNumber << "\n";
        cout << "\nAccount Address: " << uAddress << "\n";
        cout << "\n*********************************************\n";
    #endif

    struct record * currentRecord;
    int target;

    currentRecord = start;
    target = -1;

    while (currentRecord != NULL)
    {
        if (uAccountNumber == currentRecord->accountno)
        {
            strcpy(currentRecord->address, uAddress);
            target = 0;
        }
        currentRecord = currentRecord->next;
    }
    return target;
}

/***************************************************************************
//
//    FUNCTIONNAME: deleteRecord
//    DESCRIPTION:  Removes a record from the database
//    PARAMETERS:   uAccountNumber (int)             : account number added by the user
//    RETURNS:      0    : SUCCESS
//                  -1   : FAILURE
//
****************************************************************************/

int llist::deleteRecord(int uAccountNumber)
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nFunction Called: deleteRecord(int accountNumber)\n";
        cout << "\nParameters Passed: \n";
        cout << "\nAccount Number: " << uAccountNumber << "\n";
        cout << "\n*********************************************\n";
    #endif

    struct record * previousRecord;
    struct record * tempRecord;
    struct record * currentRecord;
    int target;

    previousRecord = start;
    tempRecord = NULL;
    currentRecord = start;
    target = -1;

    while (currentRecord != NULL)
    {
        if (currentRecord == start)
        {
            if (uAccountNumber == currentRecord->accountno)
            {
                tempRecord = currentRecord;
                start = currentRecord->next;
                currentRecord = currentRecord->next;
                previousRecord = previousRecord->next;
                delete(tempRecord);
                target = 0;
            }
            else
            {
                currentRecord = currentRecord->next;
            }
        }
        else if (uAccountNumber == currentRecord->accountno)
        {
            tempRecord = currentRecord;
            previousRecord->next = currentRecord->next;
            currentRecord = currentRecord->next;
            delete(tempRecord);
            target = 0;
        }
        else
        {
            previousRecord = previousRecord->next;
            currentRecord = currentRecord->next;
        }
        
    }
    return target;
}

/***************************************************************************
//
//    FUNCTIONNAME: reverse
//    DESCRIPTION:  Reverses the order of the list
//    PARAMETERS:   NONE
//
****************************************************************************/

void llist::reverse()
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nFunction Called: reverse()\n";
        cout << "\nParameters Passed: NONE\n";
        cout << "\n*********************************************\n";
    #endif
    start = reverse(start);
}

/***************************************************************************
//
//    FUNCTIONNAME: reverse
//    DESCRIPTION:  Reverses the order of the list
//    PARAMETERS:   currentRecord (record *) : a pointer to the list
//    RETURNS:      New beginning of the list
//
****************************************************************************/

record * llist::reverse(record * currentRecord)
{
    #ifdef DEBUG
    cout << "\n****************DEBUGMODE********************\n";
    cout << "\nFunction Called: reverse()\n";
    cout << "\nParameters Passed:\n";
    cout << "Record Pointer: " << currentRecord << "\n";
    cout << "\n*********************************************\n";
    #endif

    struct record * nextRecord;
    struct record * finalRecord;

    if (start->next != NULL)
    {
        nextRecord = currentRecord->next;
        if (nextRecord->next != NULL)
        {
            finalRecord = reverse(currentRecord->next);
            nextRecord->next = currentRecord;

            if (currentRecord->next == start->next)
            {
                currentRecord->next = NULL;
            }
        }
        else
        {
            finalRecord = currentRecord->next;
            finalRecord->next = currentRecord;
            currentRecord->next = NULL;
        }
    }
    else
    {
        finalRecord = start;
    }
    return finalRecord;
}

/***************************************************************************
//
//    FUNCTIONNAME: readFile
//    DESCRIPTION:  Read the file at the beginning of the program and store 
//                  it in the database
//    PARAMETERS:   NONE
//
****************************************************************************/

int llist::readFile()
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nFunction Called: readFile()\n";
        cout << "\nParameters Passed: NONE\n";
        cout << "\n*********************************************\n";
    #endif

    int uAccountNumber;
    char uName[25];
    char uAddress[80];

    int lineNum = 1;
    int target = 0;

    fstream file;
    file.open(fileName, ios::in);

    if (!file.is_open())
    {
        target = -1;
    }
    else
    {
        while(!file.eof())
        {
            if (lineNum == 1)
            {
                file >> uAccountNumber;
                file.clear();
                file.ignore(256, '\n');
                lineNum++;
            }
            else if (lineNum == 2)
            {
                file.getline(uName, 25);
                file.clear();
                lineNum++;
            }
            else if (lineNum == 3)
            {
                file.getline(uAddress, 80, '#');
                file.clear();
                file.ignore(256, '\n');
                lineNum++;
            }
            else
            {
                lineNum = 1;
                addRecord(uAccountNumber, uName, uAddress);
            }
        }
    }
    file.close();
    return target;
}

/***************************************************************************
//
//    FUNCTIONNAME: writeFile
//    DESCRIPTION:  Writes the database to a file
//    PARAMETERS:   NONE
//
****************************************************************************/

int llist::writeFile()
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nFunction Called: writeFile()\n";
        cout << "\nParameters Passed: NONE\n";
        cout << "\n*********************************************\n";
    #endif

    struct record * currentRecord;
    ofstream file;

    currentRecord = start;
    file.open(fileName, ios::out);

    while (currentRecord != NULL)
    {
        file << currentRecord->accountno << "\n" << currentRecord->name << "\n" << currentRecord->address << "#\n";
        currentRecord = currentRecord->next;
    }
    file.close();
    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME: cleanup
//    DESCRIPTION:  Deallocates all records from memory.
//    PARAMETERS:   NONE
//
****************************************************************************/

void llist::cleanup()
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nFunction Called: cleanup()\n";
        cout << "\nParameters Passed: NONE\n";
        cout << "\n*********************************************\n";
    #endif

    struct record * tempRecord;
    struct record * currentRecord;

    currentRecord = start;

    while (currentRecord != NULL)
    {
        tempRecord = currentRecord->next;
        delete(currentRecord);
        currentRecord = tempRecord;
    }
}

/***************************************************************************
//
//    FUNCTIONNAME: <<
//    DESCRIPTION:  Overloads the << operator
//    PARAMETERS:   os (ostream)             : The output stream
//                  llist   (const)          : The list
//    RETURNS:      All data within the database.
//
****************************************************************************/

ostream& operator<<(ostream& os, const llist& list)
{
    #ifdef DEBUG
        cout << "\n****************DEBUGMODE********************\n";
        cout << "\nOperator Called: <<\n";
        cout << "\nParameters Passed: \n";
        cout << "\nostream\n";
        cout << "\nllist\n";
        cout << "\n*********************************************\n";
    #endif

    struct record * tempRecord;
    tempRecord = list.start;

    while (tempRecord != NULL)
    {
        os << "Account Number: " << tempRecord->accountno << "\n";
        os << "Account Name: " << tempRecord->name << "\n";
        os << "Account Address: " << tempRecord->address << "\n";
        
        tempRecord = tempRecord->next;
    }
    return os;
}