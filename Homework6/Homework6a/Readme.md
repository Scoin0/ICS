# Homework 6a Assignment
---

# Pseudocode

## Instructions:    
1. Write the pseudocode of the function, ```deleteRecord```, to delete a record in the linked list of records.    
2. Assume the following variables are already defined, initialized and available for you to use:
    - ```start```: The pointer to the first record of the list (or NULL)
    - ```uaccountno```: The user's account number (integer)
3. Assume the following struct definition:
    ```c
    struct record
    {
        int               accountno;
        char              name[25];
        char              address[80];
        struct record*    next;
    };
    ```    
4. Must delete ALL the records with the specified account number, AND return 0.
5. Must NOT delete anything if there is no such record, AND return -1.    
---     

## Comments after submission:
```    

1. Pseudocode:
    - “copy from next to start in the record whose address is in start”???? It only remove one record. multiple return statements. 
2. Trace: 
    - You must have other local variables in the stack in addition to start and uaccountno.
   
```
