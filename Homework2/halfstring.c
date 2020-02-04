/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Assignment 2b
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ryan Narayan
//    DATE:         Feb 4th, 2020
//    FILE:         halfstring.c
//    DESCRIPTION:  This the file that has the function for halfstring.
//                  This will take out every other character.
//
****************************************************************************/

/***************************************************************************
//
//    FUNCTIONNAME: halfString
//    DESCRIPTION:  This function replaces every other character with the
//                  next character.
//    PARAMETERS:   firstString (char [])  : the first character array input
//                  outputString (char []) : the output after changing characters
//
****************************************************************************/

void halfString(const char firstString[], char outputString[])
{
    int i = 0;
    int k = 0;

    while (firstString[i] != '\0')
    {
        if (((i + 1) % 2) == 1)
        {
            outputString[k] = firstString[i];
            k++;
        }
        i++;
    }
}