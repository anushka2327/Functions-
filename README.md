# Functions 
## Aim:
To study pointer operations

## Software Used:
Visual studio code

## Theory:

In C++, functions can receive parameters in different ways, influencing how the function manipulates the provided values. Two common methods are Call by Reference and Call by Value:
Call by Reference
Definition: Call by Reference means passing the address (reference) of the actual parameters to the function. This allows the function to modify the original values.

Working: The function receives pointers to the variables, and operations performed inside the function affect the original variables directly.

Call by Value
Definition: Call by Value means passing a copy of the actual parameters to the function. Changes made to the parameters inside the function do not affect the original variable

## Algorithms
## Call by value:  
1)Start  
2)Define Function swap(int x, int y)  
3)Input: Two integers x and y  
Output: Swapped values of x and y  
Inside Swap function:  
1)Create a temporary variable temp  
2)Assign the value of x to temp  
3)Assign the value of y to x  
4)Assign the value of temp to y  
5)Inside main Function  
6)Define two integers a and b with 5 and 2  
7)Call swap(a, b)  
8)Print the value of a  
9)Print the value of b  
10)End    


## Call by reference
1)Start  
2)Define Function swap(int *x, int *y)  
3)Input: Pointers to two integers x and y  
Output: Swapped values of the integers pointed to by x and y  
Steps:  
1)Make a temporary variable temp  
2)Assign the value pointed to by x to temp (temp = *x)  
3)Assign the value pointed to by y to the location pointed to by x (*x = *y)  
4)Assign the value of temp to the location pointed to by y (*y = temp)  
In main Function  
1)Define integers a and b with 5 and 2.  
2)Call swap(&a, &b) function  
3)Print the value of a  
4)Print the value of b  
5)End    
Conclusion  
We learnt about the operations on pointers  

