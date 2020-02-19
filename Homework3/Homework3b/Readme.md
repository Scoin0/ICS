# Homework3b Assignment
---

# Introduction of a Bank Database Application

## Instructions:    
Imagine a banker sitting at the computer desk's computer. The banker's task is to manage customer's bank records stored in their database: create a new record, view an existing one, delete a record, etc. The software is composed of two parts: user-interface (UI) and database (DB).    
```
                             +- Program to develop -+
                             |          |           |
Banker  <-- interactions --> |   UI   <-+->   DB    |
                             |          |           |
                             +----------+-----------+ 
```    
To access the database, the banker interacts with the user_interface, which displays data and accepts inputs while accessing the database part.   
Finish the user-interface code. The database part is to be developed later, but the UI must be able to call correct functions of the DB part. To do so, the DB part must have "stub functions" which the UI calls. That is, after finishing this assignment, it will look like this.
```
                             +- Program to develop -+
                             |          |           |
Banker  <-- interactions --> |   UI   <-+->  stubs  |
                             |          |           |
                             +----------+-----------+
                                 👆      👆
                        Finish the UI!  Also make it to access the stubs.    
```
1. Write a makefile which generates an executable from your source code. Your makefile must be named ```Makefile``` and executable as ```homework3b``` so you can compile and run your program by the commands:    
```
$ make
$ ./homework3b
```
2. Define the following structure in ```record.h```
```c
struct record
{
    int                accountno;
    char               name[25];
    char               address[80];
    struct record*     next;
};
```
3. The following functions must be declared/defined in separate files: ```database.h``` and ```database.c```
   ```c
   int addRecord (struct record **, int, char [ ],char [ ]);
   int printRecord (struct record *, int);
   void printAllRecords(struct record *);
   int modifyRecord (struct record *, int, char [ ]);
   int deleteRecord(struct record **, int);
   ```    
   - Do not complete the above functions. They are stubs at the moment and will be implemented in later assignments.   
3. User-interface    
   - You must code your user-interface in ```user_interface.c```
   - Define the following items (they must not be global variables!)
   ```c
   struct record * start = NULL;
   ```    
   - and pass it or its address to the database functions.    
4. Menu
   - The transactions must be formatted in this form.
   ```
   <introductory message>

   <instruction for the user to choose a menu option>
   1: <menu option description>
   2: <menu option description>
   3: <menu option description>
   ...

   <user types the corresponding number of the option to choose>

   <display the results>

   <repeat the transaction again unless the selected option was to quit the program>
   ```
   - Display an introductory message at the beginning.    
   - Display instructions for the menu and menu options.    
   - The user must be able to specify the menu option by an index.    
   - Display the results.    
   - Unless the user chooses to quit the program, display the menu and ask for a menu option again.    
   - The following menu choices must be available:    
     - Add a record in the database
     - Print information about a record using the account number as a key
     - Print all records in the database
     - Modify the address field of a record specified by account number
     - Delete an existing record from the database using the account number as a key
     - Quit the program  
   - If needed for the selected menu option, collect the appropriate information from the user (including account number)    
   - Except for Quit option, a menu option must call corresponding database function with the appropriate user input.    
   - You must use a while or a do-while loop for the menu.    
5. User Inputs    
Each record contains the account number (int), name (char []) and mailing address (char []) fields.    
   - The account number must be positive (> 0)
   - The name field must allow for spaces but no other special characters such as a newline character.
   - Write your ```getAddress``` function to obtain the address function
     - The address field may have multiple lines of address
     - It must be stored as one character array
     - You CANNOT ask the user how many lines of address they are going to type
     - You CANNOt ask if the user wants to fill another line while he/she is typing
     - You CANNOT ask if the user wants to type one more line during typing
     - Protoype for the function is:
       ```c
       void getAddress (char [], int);
       ```    
6. Debug Mode
   - Your program must use command-line arguments for debugging.
   - This program may be invoked by typing the executable name (```./homework3b```) or with the option ```debug```. (```./homework3b debug```). Anything else such as ```./homework3b debug test``` or ```./homework3b test``` should give an error message and exit.
   - When the program is called using the debug option, additional output will be printed on the screen such as name of function called and parameters passed. This is in addition to everthing the program does when called without the debug argument.
   - Every non-main function, including the stubs, must have output identifying the function called and the parameters passed, when the ```debug``` option is invoked.
   - A global variable, ```debugMode``` must be used to keep track of how the program was invoked.

--- 
## Comments after submission:
```    
   - The homework has not been returned yet.    
```
