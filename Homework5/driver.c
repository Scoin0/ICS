/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Assignment 5
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         Mar 1st, 2020
//    FILE:         //
//    DESCRIPTION:  //
//
****************************************************************************/

#include "iofunctions.c"
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    struct record bankone[5] =  {0, "John", "1495 Kiukee Pl",
                                8, "Domino", "26 Hoolai St",
                                24, "Kyle", "24 North Kainalu Dr",
                                80, "Tony", "245 Kuuhale St",
                                25, "Steve", "Dirt House",
                                };
    int numcustomers;
    int i = 0;

    printf("Writing customer data to file...\n");
    writeFile(bankone, 5, "output.txt");
    printf("Completed!");
    readFile(bankone, &numcustomers, "output.txt");
    printf("Reading customer data...\n\n");
    printf("Account Number:\tAccount Name:\tAccount Address:\n");
    for(i = 0; i < numcustomers; i++)
    {
        printf("%d%s%s\n", bankone[i].accountno,bankone[i].name,bankone[i].address);
    }
return 0;


}