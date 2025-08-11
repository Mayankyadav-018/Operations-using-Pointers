# EXPERIMENT NO - 09

* Aim: To explore and implement Pointers in C++ for memory access, manipulation, and efficient data handling.

* Tools Used: IDE, pointer operators (*, &), variables, memory addressing.

* Theory:
  
In C++, pointers are variables that store the memory addresses of other variables. They provide a way to directly access and manipulate data stored in memory, making them a powerful feature for dynamic memory management, arrays, and function parameter passing.

Pointers are especially useful for:

* Dynamic memory allocation

* Passing large objects efficiently to functions

* Working with arrays and strings

* Building complex data structures like linked lists and trees

🔹 1. Pointers in C++:

A pointer holds the address of another variable.

-The & (address-of) operator is used to get the memory address of a variable.

-The * (dereference) operator is used to access the value stored at a memory address.

🔸Syntax:

    type *pointerName;
    
🔸 Usage:

* Accessing and modifying variable values via memory addresses

* Iterating through arrays efficiently

* Returning multiple values from functions

* Dynamic allocation with new and delete

🔸 Example:


    #include <iostream>
    using namespace std;

    int main() {
       int var = 10;
       int *ptr = &var; // pointer stores the address of var

       cout << "Value of var: " << var << endl;
       cout << "Address of var: " << &var << endl;
       cout << "Value stored in ptr: " << ptr << endl;
       cout << "Value pointed by ptr: " << *ptr << endl;

       *ptr = 20; // changing value via pointer
        cout << "New value of var: " << var << endl;

        return 0;
    }
Output:

    Value of var: 10  
    Address of var: 0x7ffee7b5eabc  
    Value stored in ptr: 0x7ffee7b5eabc  
    Value pointed by ptr: 10  
    New value of var: 20  
    
🔹 2. Pointer Arithmetic:

-Increment (ptr++) moves to the next memory location based on the data type size.

-Decrement (ptr--) moves to the previous memory location.

-Supports addition and subtraction with integers to move across memory.


🔹 3. Null Pointers and Dangling Pointers:

-Null pointer: Points to nothing (nullptr) to avoid accidental access.

-Dangling pointer: Pointer that refers to memory which has been freed or is out of scope — must be avoided.

# Basic Pointer Arithmetic-Increment using pointer:

This program demonstrates pointer arithmetic for different data types (int, float, char, and double). It shows how incrementing a pointer moves it forward in memory based on the size of the data type it points to. For each variable type, the program prints the pointer’s address before and after incrementing, illustrating how the increment amount depends on the type size.

ALGORITHM:

1> Start

2> Declare variables:
* a (int) = 10, aptr (int pointer) = address of a

* b (float) = 5.0, bptr (float pointer) = address of b
  
* ch (char) = 'c', cptr (char pointer) = address of ch
  
* d (double) = 3.14, dptr (double pointer) = address of d

3> For integer pointer:

* Display address of a before increment

* Increment aptr by 4

* Display address after increment

4> For float pointer:

* Display address of b before increment

* Increment bptr by 4

* Display address after increment

5> For char pointer:

* Display address of ch before increment (cast to void* for proper display)

* Increment cptr by 1

* Display address after increment

6> For double pointer:

* Display address of d before increment

* Increment dptr by 8

* Display address after increment

7> End

# Difference and Addition between pointers:

This program demonstrates how to perform arithmetic operations on values accessed through pointers in an array. Two pointers are assigned to specific positions within the array, and their dereferenced values are used to calculate both the difference and the sum. This shows how pointers can be used to directly manipulate and compute data from arrays.

ALGORITHM:

1> Start

2> Declare and initialize array

* arr[] = {10, 20, 30, 40, 50}

3> Initialize pointers

* p1 (int pointer) = address of arr[2] (value 30)

* p2 (int pointer) = address of arr[4] (value 50)

4> Calculate difference

* Dereference both pointers (*p2 and *p1)

* Subtract: *p2 - *p1

* Display result

5> Calculate addition

* Dereference both pointers (*p2 and *p1)

* Add: *p2 + *p1

* Display result

6> End

# Traversing array in Reverse using Pointers:

This program demonstrates how to traverse an array using pointer arithmetic in both forward and reverse directions. A single pointer is assigned to the base address of the array, and pointer indexing (*(ptr + i)) is used to access elements. The program first prints the array from start to end, and then from end to start, showing how pointer arithmetic can be applied for iteration in both directions.

ALGORITHM:

1> Start

2> Declare and initialize array

* arr[] = {10, 20, 30, 40, 50}

3> Initialize pointer

* ptr (int pointer) = base address of arr

4> Forward traversal

* Loop i from 0 to 4

* Display *(ptr + i)

5> Reverse traversal

* Loop i from 4 to 0

* Display *(ptr + i)

6> End

# Printing a string using pointer:

This program demonstrates how to print a string character-by-character using a pointer. The pointer is initially assigned to the base address of the character array (string), and is incremented until it reaches the null terminator ('\0'). This shows how pointers can be used to traverse strings without using array indexing.

ALGORITHM:

1> Start

2> Declare variables

* str[50] – character array to store the input string

* ptr (char pointer) – points to str

3> Input string

* Prompt user to enter a string

* Store it in str

4> Initialize pointer

* Set ptr = str

5> Traverse and print string

* While *ptr != '\0'

* Print *ptr

* Increment ptr

6> End

# Conclusion:

In this set of experiments, we explored different pointer operations, including arithmetic, array traversal, element access, and string manipulation. We observed how pointer increments depend on data type sizes, how pointers can be used to navigate arrays in both forward and reverse order, and how they can directly access and display string data. These exercises demonstrate that pointers are a powerful tool for memory manipulation, offering efficiency and flexibility in data handling.


