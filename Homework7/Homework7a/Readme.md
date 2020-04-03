# Homework 7a Assignment
---

# Recursion

The road stripe painters have formed a union. Each painter only paints a section of 3 miles or shorter of stripes on the road and charge $300/mile for the service. If the road is longer than 3 miles, the worker paints the first 3 miles. Then, he/she additionally charges $50 and hires two other workers to paint the rest of the road. The workers have a rule that an experienced worker and a novice must be hired under subcontract. The experienced worker is assigned to 70% of the road, and the novice to 30%. Each of the hired painters will do the same thing as the original painter did.    
1. For example, let's say the entire road is 13 miles long.
    - The worker0 paints the first 3 miles of the road (charging $300 x 3), then hires worker1 and worker2 (charging $50).
        - The worker1 takes 70% of the unfinished road (10 miles), i.e., 7 miles
        - The worker2 takes 30%, i.e., 3 miles.
    - The worker1 paints the first 3 miles (charging $300 x 3), then hires worker3 and worker4 (charging $50).
        - The worker3 takes 70% of the unfinished road (4 miles), i.e., 2.8 miles
        - The worker4 takes 30%, i.e., 1.2 miles.
    - The worker2 paints 3 miles (charging $300 x 3) and done.
    - The worker3 paints 2.8 miles (charging $300 x 2.8) and done.
    - The worker4 paints 1.2 miles (charging $300 x 1.2) and done.     

    ```
    |<---------------------------------- 13 miles ----------------------------------->|
    |                                 worker0's part                                  |
                                            |
                                (subcontract charging $50)
                                            |
                                            V
    |<--- 3 miles --->|<------ 7 miles/70% of the unfinished ------>|<- 3 miles/30% ->|
    | worker0's part  |                worker1's part               | worker2's part  |
                                            |
                                (subcontract charging $50)
                                            |
                                            V
                      |<----- 3 miles ----->|<---- 70% ---->|<-30%->|
                      |   worker1's part    |worker3's part |       |
                                                                \
                                                                 \
                                                            worker4's part
    ```    
    That is, the total cost is,
    ```
    300*3 + 50 + 300*3 + 50 + 300*2.8 + 300*1.2 + 300*3 = $4000.00
    ```     
## Instructions:    
1. Recursive Function
    - Write code (```paint.c``` and ```paint.h```) containing a recursive function which is used to calculate the total cost for a specified length of road. The prototype for the function must be:
    ```c
    double costOfPainting(double length);
    ```
2. Driver Code
    - Write driver code ```driver.c``` to test the function with the appropriate test cases.
        - The driver obtains the input (can be hardcoded) and prints the output (up to the second decimal point).
        - The ouput must be self-explanatory.
3. Makefile
    - Provide a ```Makefile``` generating an executable named ```homework7a``` so that you can run your program this way.
    ```
    make
    ./homework7a
    ```
---

## Comments after submission:

```    

1. Testing
    - With 0?
2. Coding Style
    - Multiple return statements
    
```
