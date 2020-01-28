/***************************************************************************
//
//    NAME:
//    HOMEWORK:     Assignment 1
//    CLASS:        ICS 212
//    INSTRUCTOR:
//    DATE:         Jan 27th, 2020
//    FILE:         homework1.c
//    DESCRIPTION:
//
//
****************************************************************************/

#include <stdio.h>

int user_interface();
double convert(double);
void print_table();

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
    double result;
    int flag = 1;

    printf("This program generates a unit conversion tabled based on the integer given.\n");
    printf("Please enter an integer: \n");
    scanf("%d", &number);
    while (flag == 1)
    {
        if (number <= 0) 
        {
            printf("The number you have entered is 0 or less than zero. Please try again. \n\n");
            printf("Please enter an integer: ");
            scanf("%d", &number);
        } else 
        {
            print_table(number);
            flag = 0;
        }
    }
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

double convert(double convert)
{
    double result;
    result = convert * 2.54;
    return result;
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
    printf("\tinches\tcentimeters\n");
    for (int i = 0; i <= numberGiven; i++) 
    {
        double startingNumber;
        double result;
        startingNumber = i;
        result = convert(startingNumber);
        printf("\t%6.2f\t%11.2f\n", startingNumber, result);
        double addedNumber;
        addedNumber = startingNumber + 0.5;
        result = convert(addedNumber);

        if (addedNumber == numberGiven + 0.5) {

        } else 
        {
            printf("\t%6.2f\t%11.2f\n", addedNumber, result);
        }
    }
}