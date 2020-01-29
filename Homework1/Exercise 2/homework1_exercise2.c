#include <stdio.h>

void dummy(int, char, char *, float);

int main(int argc, char* argv[])
{

    int num1, num2 = 5;
    char c = 'A';
    float score1 = 25.5;
    char ca[3] = "Hi";

    dummy(num2, c, ca, score1);

    printf("Let's begin tracing the given file: \n");
    printf("\tADDRESS\tVALUE\n");
    printf("\t%x\t%d\n", &argc, argc);
    printf("\t%x\t%d\n", &argv, &argv);
    printf("\t%x\t%d\n", &num1, num1);
    printf("\t%x\t%d\n", &num2, num2);
    printf("\t%x\t%c\n", &c, c);
    printf("\t%x\t%.2f\n", &score1, score1);
    printf("\t%x\t%c\n", &ca[0], ca[0]);
    printf("\t%x\t%c\n", &ca[1], ca[1]);
    printf("\t%x\t%c\n", &ca[2], ca[2]);
    return 0;
}

void dummy(int x, char y, char * z, float w)
{

    x++;
    y++;
    w = w + 5.1;

    printf("x\t%x\t%d\n", &x, x);
    printf("y\t%x\t%c\n", &y, y);
    printf("z\t%x\t%d\n", &z, &z); 
    printf("w\t%x\t%.2f\n", &w, w);

}
