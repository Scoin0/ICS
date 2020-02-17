# Homework1 Exercise 1 Assignment
---

## Instructions:    
Make a program that generates a unit conversion table of inches vs centimeters. The user interface will get the maximum value of centimeters below.    
    
1. Define a ```user_interface``` function which requests the user to enter an integer and returns the given integer
   - ```int user_interface();``` 
   - This function must be called by ```main```    
   - It must show the introductory message explaining about your program.
2. Invalid Inputs
   - If the given value is a character or a string, ```user_interface``` must display an error message and prompt the user to enter an integer. Also, you can accept a number followed by letters, e.g., ```123abc``` as far as you can correctly take the number part ```123``` as an input.     
   - If the given number is less than or equal to 0, ```user_interface``` must display an error message and prompt the user to enter a positive integer.    
3. Conversion Function    
   - Define a function ```convert``` with the following prototype:    
   ```c 
   double convert(double);
   ```    
   - The ```convert``` function takes a parameter as inches and returns the value of corresponding centimeters.    
   - Assume 1 inch is 2.54 centimeters.    
   - For example, if 1.5 inches is given, it must return 3.81 (1.5 x 2.54)    
4. Print Function    
   - Define a ```print_table``` function which uses a for-loop to generate a list of inches vs centimeters, starting from 0 inches to the given number at an interval of 0.5. (see the exmaple below)    
   ```c
   void print_table(int);
   ```    
   - This function must be called by ```main```.    
   - Table must be formatted. (see example below)    
   - Columns must be right-aligned.    
   - The values in the table must be displayed up to the second decimal place.    
   ```
   <Print a brief message to the user describing your program>    

   Enter maximum centimeters to show: 10    
    inch           cm    
    0.00         0.00    
    0.50         1.27    
    1.00         2.54    
    1.50         3.81    
    2.00         5.08    
    2.50         6.35    
    3.00         7.62   
    3.50         8.89    
    4.00        10.16    
    4.50        11.43    
    5.00        12.70    
    5.50        13.97    
    6.00        15.24    
    6.50        16.51    
    7.00        17.78    
    7.50        19.05    
    8.00        20.32    
    8.50        21.59    
    9.00        22.86    
    9.50        24.13    
   10.00        25.40    
   ```    
5. Testing
   - Provide a scripted file using the ```script``` command with at least 3 resonable results.    
---
## Comments after submission:
```    
   - Testing with invalid values?    
   - Coding Style: Curly brace. `user_interface` causes infinite loops when the user gives `abc`.
```
