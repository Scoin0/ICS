# Homework1 Exercise 2 Assignment TRACE
---

## Instructions:    
1. Run the C program below on the School Unix system and complete the table showing all the variables.    

```c
#include <stdio.h>

void dummy(int, char, char *, float);

int main(int argc, char* argv[])
{
    int num1, num2 = 5;
    char c = 'A';
    float score1 = 25.5;
    char ca[3] = "Hi";

    dummy(num2, c, ca, score1);

    /* pause here */

    return 0;
}

void dummy(int x, char y, char * z, float w)
{
    x++;
    y++;
    w = w + 5.1;
}
```    
   - You may add ```printf``` function calls to obtain the addresses and values of all 13 variables. (Count the array (ca) as 3 variables/values and also include ```argc``` and ```argv``` in the table).   
2. Table and Report    
   - The table must show the ```Address``` (in hexadecimal), ```Name```, ```Datatype```, ```Scope```, and ```Value``` of each variable on the stack. You must fill in the actual values in the table.    
   - If the datatype of a variable is a pointer, you must show the address value stored in it. For example, ```char *```, you must show the address stored in it, not the string.    
   - Explain how different the actual memory allocations are from what you practiced by hand in classes.    

---
## Comments after submission:
```    
   - Did ca[2] really have'B'?    
   - num2?
   - The datatype of argv is char** or char*[]
```
