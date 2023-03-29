0x06. C - More pointers, arrays and strings
Pointers:
A pointer is a variable that stores the memory address of another variable. In other words, a pointer "points" to a location in memory where a value is stored. Pointers are often used in low-level programming and system-level programming because they allow for direct manipulation of memory.

For example, consider the following code snippet
:
int x = 42;
int* p = &x;
It declares an integer variable x and initializes it to 42. It then declares a pointer variable p of type integer and assigns the address of x to it using the address-of operator &. This means that p now points to the memory location where x is stored.

Arrays:
An array is a collection of elements of the same data type stored in contiguous memory locations. Each element in the array can be accessed using an index, which is an integer value that represents the position of the element in the array. Arrays are used to store collections of data that can be accessed and manipulated efficiently.

For example, consider the following code snippet:
int myArray[5] = {1, 2, 3, 4, 5};
It declares an integer array myArray of size 5 and initializes it with the values 1, 2, 3, 4 and 5 respectively. The first element of the array is myArray[0], the second element is myArray[1], and so on. You can access individual elements of the array using their index inside square brackets.

Strings:
In C, a string is simply an array of characters terminated by a null character ('\0'). Strings are commonly used to represent text data in programs. Because strings are just arrays of characters, they can be manipulated using array operations.

For example, consider the following code snippet:
char myString[6] = "hello";
It declares a character array myString of size 6 and initializes it with the characters ‘h’, ‘e’, ‘l’, ‘l’, ‘o’ and ‘\0’ (the null character) respectively. The null character is added to the end of the string to indicate the end of the string. You can access individual characters of the string using their index inside square brackets.
