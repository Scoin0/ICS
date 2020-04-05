/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Assignment 8
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Apr 4th, 2020
//    FILE:         user_interface.cpp
//    DESCRIPTION:  The point of this program is to do interact with the user
//                  and do a unit conversion using functions. This program
//                  also prints a unit conversion table, but in C++.
//
****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int user_interface();
void convertc(double, double &);
void print_table(int);

/***************************************************************************
//
//    FUNCTIONNAME:    main
//    DESCRIPTION:     This is the main function which calls user_interface
//
****************************************************************************/

int main (int argc, char *argv[]) 
{
    user_interface();
    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME:    user_interface
//    DESCRIPTION:     This is the fuction the user uses to interact with.
//
****************************************************************************/

int user_interface() 
{
    int number;
    int flag = 1;

    cout << ("This program generates a unit conversion tabled based on the integer given.\n");
    cout << ("Please enter an integer: \n");
    cin >> (number);
    while (flag == 1)
    {
        if (number <= 0) 
        {
            cout << ("The number you have entered is 0 or less than zero. Please try again. \n\n");
            cout << ("Please enter an integer: ");
            cin >> (number);
        } 
        else 
        {
            print_table(number);
            flag = 0;
        }
    }
    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME:    convert
//    DESCRIPTION:     This funtion converts inches to centimeters
//    PARAMETERS:      convert (double) : the number that is used to convert
//                      inches to centimeters.
//    RETURNS:         result : The result of the conversion
//
****************************************************************************/

void convertc(double convert, double &result)
{
    result = convert * 2.54;
}

/***************************************************************************
//
//    FUNCTIONNAME:    print_table
//    DESCRIPTION:     Prints the unit conversion table
//    PARAMETERS:      numberGiven (int) : takes the number entered in the
//                      user_interface and produces a table
//
****************************************************************************/

void print_table(int numberGiven)
{
    int i;
    cout << ("\tinches\tcentimeters\n");
    for (i = 0; i <= numberGiven; i++) 
    {
        double startingNumber;
        double result;
        double addedNumber;
        startingNumber = i;
        convertc(startingNumber, result);
        cout << setw(14) << startingNumber << setw(13) << result << endl;
        cout << fixed << setprecision(2);
        addedNumber = startingNumber + 0.5;
        convertc(addedNumber, result);

        if (addedNumber == numberGiven + 0.5) {

        } else 
        {
             cout << setw(14) << addedNumber << setw(13) << result << endl;
        }
    }
}