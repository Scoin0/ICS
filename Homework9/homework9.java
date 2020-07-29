/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Assignment 9
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         Apr 27th, 2020
//    FILE:         homework9.java
//    DESCRIPTION:  The point of this program is to do interact with the user
//                  and do a unit conversion using functions. This program
//                  also prints a unit conversion table. 
//                  The difference from this verison from the others is that
//                  this project uses both Java and C together to run the conversion.
//                  This file also follows the same conventions as the all other
//                  homeworks.
//
****************************************************************************/

import java.util.Scanner;

public class homework9
{

    static
    {
        System.loadLibrary("homework9");
    }

    public static native double convert(double convert);

/***************************************************************************
//
//    FUNCTIONNAME: main
//    DESCRIPTION:  The main function that runs the program
//    PARAMETERS:   args    (String[])       : arguments for program
//
****************************************************************************/

    public static void main(String[] args)
    {
        int number;
        int flag = 1;

        Scanner input = new Scanner(System.in);

        System.out.println("This program generates a unit conversion table based on the integer given.");
        System.out.print("Please enter an integer: ");
        number = input.nextInt();

        while (flag == 1) {
            if (number <= 0) {
                System.out.println("The number you have entered is zero or less than zero. Please try again.");
                System.out.println("Please enter an integer: ");
                number = input.nextInt();
            }
            else
            {
                printTable(number);
                flag = 0;
            }
        }
        input.close();
    }

/***************************************************************************
//
//    FUNCTIONNAME:    print_table
//    DESCRIPTION:     Prints the unit conversion table
//    PARAMETERS:      number (int) : takes the number entered in the
//                     main and produces a table
//
****************************************************************************/

    public static void printTable(int number)
    {
        double startingNumber;
        double resultingNumber;
        double addedNumber;

        System.out.println("\tinches\tcentimeters");

        for (int i = 0; i <= number; i++)
        {
            startingNumber = i;
            resultingNumber = convert(startingNumber);
            System.out.printf("\t%6.2f\t%11.2f\n", startingNumber, resultingNumber);
            addedNumber = startingNumber + 0.5;
            resultingNumber = convert(addedNumber);

            if (addedNumber == number + 0.5) {}
            else
            {
                System.out.printf("\t%6.2f\t%11.2f\n", addedNumber, resultingNumber);
            }
        }
    }
}