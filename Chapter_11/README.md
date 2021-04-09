### Pointers

A pointer provides an indirect means of accessing the value of a particular data item. <u>Key words</u> *indirection*

<u>**Defining a Pointer**</u> - A variable declaration with '\*' (indirection operator) tells c the variable is a pointer to the data type. An assignment with '&' (address operator) tells c not to assign the data, but to point to the object at that address. An assignment with '*' tells c to always indirectly access whatever the pointer is pointing to. <u>Key words</u> *pointer to, address, pointer, indirection, before, after* 

<u>**Using Pointers in Expressions**</u> - A pointer can be used in an expression and is the equivalent of substituting the value that is pointed to into the expression. The precedence of '*' and '&' have is higher than arithmetic and binary operators. <u>Key words</u> *precedence, all, also points*

<u>**Working with Pointers and Structures**</u> - Pointers can also point to structures. However one must use brackets '()' when doing so because the member operator '.' has higher precedence. See example here (*datePtr).dayMember. Fortunately because this seems like a handful, c includes the structural pointer operator '->'. This enables the above example to be writen as datePtr ->dayMember.

* <u>**Structures Containing Pointers**</u> - A pointer can also be a member of a structure. Precedence means the pointer is correctly reference from the structure before the indirection operator is applied.<u>Key words</u> *structure itself is not a pointer in this instance, before*
* <u>**Linked Lists**</u> - Pointers to structures and structures containing pointers allow the creation of sophisticated data structures such linked lists. The use of indirection allows information to be slotted into and out of a bundle of information. Things do not need to be sequential, see fig 11.7. Note a start and end pointer are needed around the list order pointers. <u>Key words</u> *linked lists, double linked lists, trees, pointers, structures*

<u>**The Keyword const and Pointers**</u> - Two things to consider, will the pointer be changed or will the value the pointer points to be changed? <u>Key words</u> *through the pointer variable*

<u>**Pointers and Functions**</u> - Functions can receive and return pointers. A function can't change the pointer sent to it, but it can change the data elements indirectly referenced. A function can only return one variable, however using pointers you can indirectly update more than one.<u>Key words</u> *not, can*

<u>**Pointers and Arrays**</u> - Pointers to arrays are a memory efficient and execute faster. The pointer is declared as type of the elements within the array being addressed. When assigning, the subscript of array address is not needed because the pointer defaults to first element. See chapter for various flavours of assignments that can be made, overall the gist is offsetting becomes easy. <u>Key words</u> *no matter what type of element is contained in the array*

* <u>**A Slight Digression About Program Optimization**</u> - Each time a for loop reaches the expression condition it needs to evaluate it. This take time, even more time if a side of the expression needs to be recalculated. If the condition doesn't change in the loop then optimisation can be achieved by creating a set variable beforehand and referencing it. Furthermore pointers are more efficient to extract information from than indexing into an array. <u>Key words</u> *before*
* <u>**Is It an Array or Is It a Pointer**</u> - Recall how when using an array argument to a function the index part is left off. Recall how this looks identical to when the array was assigned to the pointer. In a way they are one and the same. <u>Key words</u> *pointer*
* <u>**Pointers to Character Strings**</u> - When using pointers the index variable can be omitted.
* <u>**Constant Character Strings and Pointers**</u> - A char pointer can be assigned a const char string, whereas a char array cannot unless its during initialisation. At initialisation the individual chars are assigned to the corresponding elements of char array. <u>Key words</u> *whenever, pointer, could not, only*
* <u>**The Incremental and Decremental Operators Revisited**</u> - Inc and Dec operators can be used in conjunction with other operators. The pre or post nature of the operator determines if the action takes place before or after use in the more complex expression using multiple operatators. <u>Key words</u> *before(prefix), after(suffix), preincrement, postincrement, predecrement, postdecrement*

<u>**Operations on Pointers**</u> - You can add and subtract integer values to/from pointers. You can compare pointers to see if they are equal or not, greater or smaller. Finally you can also subtract ptr1 from ptr2 if they are of same type and point to same array, this will return the index number diff. 

<u>**Pointers to Functions**</u> - Because of precedence to declare a pointer to a function write - int (*fnPtr) (void); To assign the pointer to the function - fnPtr = fnName; This allows indirect calls to the function - entry = fnPtr(); You can't store functions in an array, however you can store pointers to functions within an array. <u>Key words</u> *dispatch tables, pointers to functions, not functions that return a pointer*

<u>**Pointers and Memory Addresses**</u> - Pointers are used to indirectly send a fetch command to an address where the actual data is contained. Likewise with a write command. Updating a pointer is actually updating the address it points to. <u>Key words</u> *address, cell=byte, 32bits = 4cells.*

<u>**Exercises**</u> - Please see corresponding files in this directory.

- [x] Exercise 11.1
  - [x] [Program 11.1](Exercise_11.1/Program_11.1.c)
  - [x] [Program 11.2](Exercise_11.1/Program_11.2.c)
  - [x] [Program 11.3](Exercise_11.1/Program_11.3.c)
  - [x] [Program 11.4](Exercise_11.1/Program_11.4.c)
  - [x] [Program 11.5](Exercise_11.1/Program_11.5.c)
  - [x] [Program 11.6](Exercise_11.1/Program_11.6.c)
  - [x] [Program 11.7](Exercise_11.1/Program_11.7.c)
  - [x] [Program 11.8](Exercise_11.1/Program_11.8.c)
  - [x] [Program 11.9](Exercise_11.1/Program_11.9.c)
  - [x] [Program 11.10](Exercise_11.1/Program_11.10.c)
  - [x] [Program 11.11](Exercise_11.1/Program_11.11.c)
  - [x] [Program 11.12](Exercise_11.1/Program_11.12.c)
  - [x] [Program 11.13](Exercise_11.1/Program_11.13.c)
  - [x] [Program 11.14](Exercise_11.1/Program_11.14.c)
  - [x] [Program 11.15](Exercise_11.1/Program_11.15.c)
- [x] [Exercise 11.2](Exercise_11.2.c)
- [x] [Exercise 11.3](Exercise_11.3.c)
- [x] [Exercise 11.4](Exercise_11.4.c)
- [x] [Exercise 11.5](Exercise_11.5.c)
- [x] [Exercise 11.6](Exercise_11.6.c)
- [x] [Exercise 11.7](Exercise_11.7.c)
- [x] [Exercise 11.8](Exercise_11.8.c)
- [x] [Exercise 11.9](Exercise_11.9.c)
- [x] [Exercise 11.10](Exercise_11.10.c)
- [x] [Exercise 11.11](Exercise_11.11.c)
- [x] [Exercise 11.12](Exercise_11.12.c)
