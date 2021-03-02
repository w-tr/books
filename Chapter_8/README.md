### Working with Functions

Functions introduced so far have been scanf, printf and main. The function feature makes it easier to write, read, understand, debug, modify and maintain a program.

This chapter discusses the following

<u>**Defining a Function**</u> - Introduces 4 concepts about a function. 1. Who can call it; 2. The type of value it returns; 3. Its name; 4. The arguments it takes. Recall that a program must always have main. Within main you can call out to other functions and return back to main. <u>Key words</u> *function, returns*

<u>**Arguments and Local Variables**</u> - Functions can take an input, and use them accordingly. <u>Key words</u> *arguments* 

* <u>**Function Prototype Declaration**</u> - After a functional prototype declaration (first line of a function) has been declared it can be used within a program before encountering the function itself. <u>Key words</u> - *functional prototype declaration, formal parameter name*
* <u>**Automatic Local Variables**</u> - A variable declared within the function (without the word static) is an automatic variable which is initiated/reset each time the function is called. <u>Key words</u> - *automatic local, becomes the value of the formal parameter*

<u>**Returning Functions Results**</u> - A function can return a value associated to the data type that the function was declared with. Void is the absence of a data type. In this way a function can be assigned. <u>Key words</u> - *returned, type of value the function returns, before, value was automatically copied.*

<u>**Functions Calling Functions Calling ... -**</u> You can have a function call another function.  <u>Key words</u> *both have variable x, scope*

* <u>**Declaring Return Types and Argument Types**</u> - Only caveat is with a function calling a function is that the function needs to know of the function being called and it needs to be ready to accept the return type. <u>Key words</u> *declare, before, after, arguments dummy, pointer*
* <u>**Checking Functions Arguments**</u> - Checks should be place within a function regarding its input, this way it's contained and protected. If the input is incorrect then a returned value could indicate error. <u>Key words</u> *never satisfied, protect from any, domain error*

<u>**Top-Down Programming**</u> - Basically another name for modular/modulization. <u>Key words</u> *top down programming*

<u>**Functions and Arrays**</u> - You can pass an array to a function by using variable name with no index/range. When declaring in a function array input use [] and separate range argument to allow the calling instance to determine size. <u>Key words</u> *without any subscript, general-purpose, any array*

* <u>**Assignment Operators**</u> - Arrays don't behave like an automatic local variable because instead of creating a local copy, a link into where the computer memory is passed. This means when you change what is being linked you change the content in the input array. Therefore you don't return an array. <u>Key words</u> *not copied, describing where*
* <u>**Sorting Arrays**</u> - Reiterates the point that the array content can be manipulated within the function. <u>Key words</u> *ascending order*
* <u>**Multidimensional Arrays**</u> - As 1d arrays can be passed to a function so too can multidimensional arrays. However when doing so with 2d the column range needs to be provided. Key words *must be specified*
  * <u>**Multidimensional Variable-Length Arrays and Functions**</u> - A way to write more generic functions, provided the compiler will allow. <u>Key words</u> *range limits arguments must be listed before utilisation in array argument*

<u>**Global Variables**</u> - You can use global variables to transcend limitation of functions local variables. Global variables default to zero unlike local variables. Just declare gVar outside of any function. Downside is generality is reduced and complexity is introduced. Upside is argument/parameter lists can be reduced <u>Key words</u> *use within any function, declaration made outside of any function*

<u>**Automatic and Static Variables**</u> - Automatic variables are reset each time there function is called, whereas static variables are not. Static variables therefore retain the previous accumulation. <u>Key words</u> *guaranteed reset, once, initial value must*

<u>**Recursive Functions**</u> - Successively applying the same solution to the subset of the problem. Achieved by making a function making a call to itself, with a get out clause at a certain level. <u>Key words</u> *trees, lists, recursive returns*

**<u>Exercises</u>** - Please see corresponding files in this directory.

- [x] Exercise 8.1
  - [x] [Program 8.1](Exercise_8.1/Program_8.1.c)
  - [x] [Program 8.2](Exercise_8.1/Program_8.2.c)
  - [x] [Program 8.3](Exercise_8.1/Program_8.3.c)
  - [x] [Program 8.4](Exercise_8.1/Program_8.4.c)
  - [x] [Program 8.5](Exercise_8.1/Program_8.5.c)
  - [x] [Program 8.6](Exercise_8.1/Program_8.6.c)
  - [x] [Program 8.7](Exercise_8.1/Program_8.7.c)
  - [x] [Program 8.8](Exercise_8.1/Program_8.8.c)
  - [x] [Program 8.9](Exercise_8.1/Program_8.9.c)
  - [x] [Program 8.10](Exercise_8.1/Program_8.10.c)
  - [x] [Program 8.11](Exercise_8.1/Program_8.11.c)
  - [x] [Program 8.12](Exercise_8.1/Program_8.12.c)
  - [x] [Program 8.13](Exercise_8.1/Program_8.13.c)
    - [x] [Program 8.13a](Exercise_8.1/Program_8.13a.c)
  - [x] [Program 8.14](Exercise_8.1/Program_8.14.c)
  - [x] [Program 8.15](Exercise_8.1/Program_8.15.c)
  - [x] [Program 8.16](Exercise_8.1/Program_8.16.c)
- [x] [Exercise 8.2](Exercise_8.2.c)
- [x] [Exercise 8.3](Exercise_8.3.c)
- [x] [Exercise 8.4](Exercise_8.4.c)
- [x] [Exercise 8.5](Exercise_8.5.c)
- [x] [Exercise 8.6](Exercise_8.6.c)
- [x] [Exercise 8.7](Exercise_8.7.c)
- [x] [Exercise 8.8](Exercise_8.8.c)
- [x] [Exercise 8.9](Exercise_8.9.c)
- [x] [Exercise 8.10](Exercise_8.10.c)
- [x] [Exercise 8.11](Exercise_8.11.c)
- [x] Exercise 8.12
  - [x] [Exercise 8.12a](Exercise_8.12a.c)
  - [x] [Exercise 8.12b](Exercise_8.12b.c)
- [ ] [Exercise 8.13](Exercise_8.13.c)
- [ ] Exercise 8.14
  - [ ] Exercise 8.14a
  - [ ] Exercise 8.14b
  - [ ] Exercise 8.14c
  - [ ] Exercise 8.14d
- [ ] Exercise 8.15
- [ ] Exercise 8.16
