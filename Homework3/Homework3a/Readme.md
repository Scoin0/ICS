# Homework3a Assignment
---

## Instructions:
Write pseudocode to achieve the following requirements below.

1.   Use and modify the given pseudocode.txt.
2.   Assume there is an integer array called ```numbers``` of size ```n``` (where ```n > 1```).
3.   The first ```m``` slots of the array (where ```m < n```) are populated with integers.
4.   The integers are sorting in increasing order.
5.   Assume the user entered an integer that is stored in a variable called ```num```.
6.   Write pseudocode that will insert the value of ```num``` into the array ```numbers``` while keeping the order.
7.   Once ```num``` is inserted into ```numbers```, update ```m``` so it indicates the correct numbers of items in the array.
---
## Comments after submission:
```
   - While (m < n) means that it will insert num to numbers until the array is full. It will access uninitialized elements. It will cause infinite loops when num is less than equal to the elements of numbers.
```
