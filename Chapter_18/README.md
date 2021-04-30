### Debugging Programs

Introduces you to two types of debugging techniques. 1. The preprocessor, 2. An interactive debugger.

<u>**Debugging with the Preprocessor**</u> - Using the preprocessor, conditional compilations can be created where additional debugging code is run to help provide feedback of program operation. Activating the Debug can be done by 1. Command line compile with define or 2. Defining debug in the source code or 3. Using a Macro. See section for examples, but you can create a level system for debugging.



**NOTE** - Other IDEs provide a debugging environment, use if required. gdb is a bit stoneage/archaic

<u>**Debugging Programs with gdb**</u> - gbd allows you to see your program as it runs, by providing details of variables and current line of operation step through. <u>Key words</u> *core dumps*

* <u>**Working with Variables**</u> - A variable can be printed or set. Sometimes you may need to include the scope to pinpoint correct variable.
* <u>**Source File Display**</u> - List allows you to display the source file that is exectuting.
* <u>**Controlling Program Execution**</u> - You can just run the program, add breakpoints, do single stepping, list all the anchor points etc you've placed in the code.
* <u>**Getting a Stack Trace**</u> - gdb allows you to look at where you are in the hierarchy of function calls by using backtrace to see the call stack <u>Key Words</u> *call stack*
* <u>**Calling Functions and Setting Arrays and Structures**</u> - You can run a gdb on a function as a call in main would. You can also populate the values of variables like structures and arrays.
* <u>**Getting Help with gdb Commands**</u> - The tool comes with a help manual. <u>Key words</u> *classes*
* <u>**Odds and Ends**</u> - But wait there is'sssssss more.

<u>**Exercises**</u> - There are no Exercises for this chapter, however there are example Programs.
- [x] [Program 18.1](Program_18.1.c)
- [x] [Program 18.2](Program_18.2.c)
- [x] [Program 18.3](Program_18.3.c)
- [x] [Program 18.4](Program_18.4.c)
- [x] [Program 18.5](Program_18.5.c)
