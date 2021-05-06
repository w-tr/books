### More on Data Types

Intro to a new data type, how to assign names to data types & how to convert data types. <u>Key words</u> *enumerated*

<u>**Enumerated Data Types**</u> - Allows you to define a variable and specify the values that can exist within that variable. For example an int can only be integers, and a traffic light can only be the colours of a traffic light. This allows users to create state machines. Think Verilog and VHDL FSM. The value assign to the enumeration list is an integer that sequentially increases, as you progress through the list, however you can assign a number and therefore jump the count. Furthermore you can overload with same value {no=0, off=0} <u>Key words</u> *enum identifier {list}, and no other value*

<u>**The typedef Statement**</u> - Allows users to define types and subtypes(think VHDL subtype of std_logic_vector for word, byte etc) of existing types. For example 1. typedef int counter, then counter i, j; 2. typedef char line[81], then line text; <u>Key words</u> *not equivalent to #define when has range*

<u>**Data Type Conversion**</u> - There is an order in which conversion takes place in the evaluating of two operands in an expression. See the f * i + l / s example in book.

* <u>**Sign Extension**</u> - Converting a signed short int is converted to a signed long int the sign is extended left to the MSB. Char types could be unknown as signed or unsigned, therefore conversion to int could be signed/unsigned. You can avoid this by telling c that its 'unsigned char'. (I can't see practical use of this info yet)

* <u>**Argument Conversion**</u> - By default c assumes functions return int, likewise by default c assumes arguments of type bool, char, short are actually int and float are double. Function protype declarations are important because they remove assumption and doubt.

<u>**Exercises**</u> - Please see corresponding files in this directory.

- [x] [Program 14.1](Program_14.1.c) - Program not contained in Exercise 14.1
- [x] [Exercise 14.1](Exercise_14.2.c)
- [x] [Exercise 14.2](Exercise_14.2.c)
- [x] [Exercise 14.3](Exercise_14.3.c)
