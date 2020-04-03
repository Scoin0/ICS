/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Homework 7b
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Mar 31st, 2020
//    FILE:         homework7b
//    DESCRIPTION:  This program takes a gif and reads the binary. After displaying the
//                  width, height, and color values, it modifies the colors and produces
//                  an result image.
//
****************************************************************************/

#include <stdio.h>

void printInfor (unsigned char []);
void modify (unsigned char []);
int readFile (unsigned char [], int*, char []);
int writeFile (unsigned char [], int, char []);

/***************************************************************************
//
//    FUNCTIONNAME: main
//    DESCRIPTION:  The main function that runs the program
//    PARAMETERS:   argc    (int)       : command
//                  *argv   (char [])   : pointer
//
****************************************************************************/

int main (int argc, char *argv[])
{
    unsigned char image1[4000];
    unsigned char image2[4000];
    unsigned char image3[4000];

    int size;
    size = sizeof(image1[0]);

    printf("\nThis program takes an image and reads its binary information and changes the values of the colors.\n");
    printf("Then writes the changed information to a results gif.\n\n");

    readFile(image1, &size, "image1.gif");
    printf("\nDisplaying information about image1.gif\n");
    printInfor(image1);
    modify(image1);
    printf("\nDisplaying changed information about image1.gif\n");
    printInfor(image1);
    writeFile(image1, size, "result1.gif");

    readFile(image2, &size, "image2.gif");
    printf("\n\nDisplaying information about image2.gif\n");
    printInfor(image2);
    modify(image2);
    printf("\n\nDisplaying changed information about image2.gif\n");
    printInfor(image2);
    writeFile(image2, size, "result2.gif");

    readFile(image3, &size, "image3.gif");
    printf("\n\nDisplaying information about image3.gif\n");
    printInfor(image3);
    modify(image3);
    printf("\n\nDisplaying changed information about image3.gif\n");
    printInfor(image3);
    writeFile(image3, size, "result3.gif");
    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME: printInfor
//    DESCRIPTION:  Prints the information for the width, height, and RGB values of an image
//    PARAMETERS:   gifData    (char[])   : Unsigned char array for the image
//
****************************************************************************/

void printInfor(unsigned char gifData[])
{
    printf("Width: %u%u\n", gifData[7], gifData[6]);
    printf("Height: %u%u\n", gifData[9], gifData[8]);
    printf("Color 1: R: %x G: %x B: %x\n", gifData[13], gifData[14], gifData[15]);
    printf("Color 2: R: %x G: %x B: %x\n", gifData[16], gifData[17], gifData[18]);
    printf("Color 3: R: %x G: %x B: %x\n", gifData[19], gifData[20], gifData[21]);
    printf("Color 4: R: %x G: %x B: %x\n", gifData[22], gifData[23], gifData[24]);
}

/***************************************************************************
//
//    FUNCTIONNAME: modify
//    DESCRIPTION:  Modifies the color values of an image
//    PARAMETERS:   gifData    (char[])   : Unsigned char array for the image
//
****************************************************************************/

void modify (unsigned char gifData[])
{

    int i, RED, GREEN, BLUE;
    i = 0;

    for (i = 13; i < 25; i = i + 3)
    {
                
        RED = gifData[i];
        GREEN = gifData[i + 1];
        BLUE = gifData[i + 2];

        if (((RED & 127) == 127) && ((GREEN & 127) == 127) && ((BLUE & 127) == 127))
        {
            gifData[i] = RED << 2;
            gifData[i + 1] = GREEN << 2;
            gifData[i + 2] = BLUE << 2;
        }
        else
        {
            gifData[i] &= ~(1 << 0) & ~(1 << 5);
            gifData[i + 1] = (GREEN & 0x0f) << 4 | (GREEN & 0xf0) >> 4;
            gifData[i + 2] ^= (1 << 3) | (1 << 7);
        }
    }
}

/***************************************************************************
//
//    FUNCTIONNAME: readFile
//    DESCRIPTION:  Reads the binary from a file
//    PARAMETERS:   gifData     (unsigned char[]) : Unsigned char array for the file
//                  s_pointer   (int *)           : Pointer to the size of the file
//                  fileName    (char [])         : the file path
//
****************************************************************************/

int readFile (unsigned char gifData[], int * s_pointer, char fileName[])
{
    int size;
    FILE * input;
    input = fopen(fileName, "rb");

    size = *s_pointer;

    if (input == NULL)
    {
        printf("\nThere was an error opening the file. Does it exist?\n");
    } 

    fread(gifData, size, 4000, input);
    fclose(input);

    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME: writeFile
//    DESCRIPTION:  Write changed data to the binary file
//    PARAMETERS:   gifData     (unsigned char[]) : Unsigned char array for the file
//                  size        (int)             : Size of the elements
//                  fileName    (char [])         : the file path
//
****************************************************************************/

int writeFile (unsigned char gifData[], int size, char fileName[])
{
    FILE * output;
    output = fopen(fileName, "wb");

    fwrite(gifData, size, 4000, output);
    fclose(output);

    return 0;
}