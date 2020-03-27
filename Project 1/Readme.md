# Project 1 Assignment
---

# Project 1  

This project combines homework and/or concepts from Homework 3 through 6.

## Instructions:    
1. Makefile
    - Your makefile must be named as ```Makefile``` and executable as ```project``` so you can compile and run your program by the commands:    
    ```
    make
    ./project
    ```
2. Data Structure of Record
    - Refer to the [requirements for data structure in Homework3b.](https://github.com/Scoin0/ICS/blob/master/Homework3/Homework3b/Readme.md)
3. Database
    - The following functions must be declared/defined in separate files: ```database.h``` and ```database.c```.     
    ```c
    int addRecord (struct record **, int, char [ ],char [ ]);
    int printRecord (struct record *, int);
    void printAllRecords(struct record *);
    int modifyRecord (struct record *, int, char [ ]);
    int deleteRecord(struct record **, int);
    int readfile(struct record **, char []);
    int writefile(struct record *, char []);
    void cleanup(struct record **);
    ```
    - Implement the functions above:
        - ```addRecord``` will add a new record at the end of the list.
        - ```printRecord``` will print the record with the matching account number.
        - ```printAllRecords``` will print the contents of the entire database.
        - ```modifyRecord``` will will modify the address field of a record specified by account number.
        - ```deleteRecord``` will delete all the records with the specified account number.
        - ```readFile``` must be called once at the start of the main function.
        - ```writeFile``` must be called once at the end of the main function.
        - ```cleanUp``` must release all allocated spaces in the heap memory and assign NULL to ```start```
    - You cannot change the definition of the ```record``` datatype.
    - You cannot change the arguments used by the functions shown above.
    - You cannot create any additional database functions without the instructor's consent.
    - The heap memory must be cleaned up before you quit the program.
4. User-Interface
    - Refer to the [requirements for user-interface in Homework3b.](https://github.com/Scoin0/ICS/blob/master/Homework3/Homework3b/Readme.md)
5. Debug Mode
    - A global variable ```debugmode``` must be defined. No other global variables may be used.
    - Your program must use command-line arguments for debugging.
    - This program may be invoked by typing the executable name with the option ```debug```. Anything else should give an error.
    - When the program is called using the debug option, additional output must be printed on the screen such as the name of the function called and parameters passed.
    - Every function definition must have output identifying the function called and the parameters passed.
6. Testing
    - Retrieve your ```testplan.xlsx``` from Homework6b. Test your program by following your test cases. Fill in the "Results" column to report the testing results.
    - If it fails a test case, describe how it failed.
    - Write a summary of the testing and describe how the test went. If you faced some problems, describe them.
7. GIT
    - Create a new git repository and add ```.gitignore``` file. This file must contain:
    ```
    *
    !.gitignore
    !*.c
    !*.cpp
    !*.h
    !*.sh
    !Makefile
    ```
    - Write a shell script ```getreport.sh``` to run the following commands.
    ```
    git --no-pager log --graph --date-order --all --pretty=format:'%h %Cred%d %Cgreen%ad %Cblue%cn %Creset%s' --date=short
    echo
    git status
    ls -la
    rm *.o
    make
    ```
    - Add all the source files, including ```Makefile```, ```.gitignore```, and ```getreport.sh``` to the repository.
    - Make a branch named ```project1``` by the command:
    ```
    git branch project1
    ```
    - Provide proof of git usage.
        - Start the script command.
        - Run your shell script.
        - Run your program.
        - Finish the script command.
        
---

## Comments after submission:

```    

Assignment has not been returned yet.
   
```
