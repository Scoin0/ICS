# Homework 5 Assignment
---

# File I/O

## Instructions:    
1. Definition of Record    
    - Create a header file, ```record.h```, containing the following definition.
    ```c
    struct record
    {
        int                accountno;
        char               name[25];
        char               address[80];
    };
    ```    
2. Read/Write Functions
   - Create a header file, ```iofunctions.h```, containing the following functions.
   ```c
   int readfile( struct record accarray[ ], int* numcust, char filename[ ] );
   int writefile( struct record accarray[ ], int numcust, char filename[ ] );
   ```    
   - Then, create a source file, ```iofunctions.c```, defining the functions above.
   - Basic specifications
     - The function, ```readfile```, will read the data from the text file and store it in the array called by ```accarray```.
     - It must tell the function which called ```readfile``` how many reacords it hsa stored into the array.
     - The function, ```writefile```, will write the data stored in the array specified by the ```accarray``` into a text file.
     - The return values will be used to tell whether the functions successfully read/write data.
     - The size of the array and the name of the text file are assumed to be arbitrary (You cannot specify them in this file).
     - The text file msut be just a sequence of record information, i.e., it must not tell how many records it contains at the beginning.
     - The functions must not have the terminal I/O's (printf, scanf, etc).    
3. Driver Code
    - Create a source file, ```driver.c```, defining the following local variables in the main function:
    ```c
    struct record bankone[5];
    int numcustomers;
    ```
    - A menu is not required. The user-interface can be very simple, but the output of the program must be clear and self-explanatory.
    - You may get input from the keyboard or hardcode your array in the driver for testing.
    - Test cases and results must be definitive proof that the functions work; make sure that your test cases can really prove that the functions work.    
4. Makefile
    - Please provide a ```Makefile``` generating an executable named ```homework5``` so that you can run your program in this way.
    ```
    make
    ./homework5
    ```    
---     

## Comments after submission:
```    

1. Proof.txt
   - Does not show any compilation or linkage. 
2. Output.txt: 
   - The results are not clear as it does not show the data used for testing. The driver code stores data to the same array without initialization. What if the functions totally do not work? Will the results be different? Coding style: return statements. The readfile does not stop reading exactly at the end. The readfile does not check numcust. The program assumes that the name field does not contain a white space.
   
```
