/********************************************
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
*********************************************/

#include <stdio.h>

public int main (int argc, char *argv[])
{
    prinf("Something something, inches to centimeters.");
    user_interface();
    print_table();
    return 0;
}

public int user_interface ()
{
    int scannedInteger;


    printf("Please enter an integer: " + "\n");
    scanf("%d", &scannedInteger);
    if (number < 0) {
        //error out
    }
    return scannedInteger;
}

public double convert (double inches)
{
    return inches * 2.54;
}

public void print_table(int rows)
{
    for (int i = 0; i <= rows; i++) {

    }
}
