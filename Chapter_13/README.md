### The Preprocessor

Before C compilation process, commands identified by #. <u>Key words</u> *before*

<u>**The #define Statement**</u> - Assigns subsequent value to the define nametype. This value is used de facto for the nametype. It's akin to a string search and replace. Cannot use in a character string. Scope is program. <u>Key words</u> *cannot, not, anywhere, include*

* <u>**Program Extendability**</u> - In addition to using defined names for constants in equations, you can also use them for setting bounds. Therefore loops etc can be bound & the update is limited to one define, making it easy for you to extend.

* <u>**Program Portability**</u> - Just like bounds, you can define computer specific components, then when moving from one machine to another these are just updated.

* <u>**More Advanced Types and Definitions**</u> - The define statement is a "literal text" substitution for everything to the right. Furthermore you can reference another define statement. Defines can take arguements, #define NAME(y) definition. This type of macro doesn't taken data type therefore allowing greater flexibility to functions. Macros can also take an indeterminate number of variables using (...) and '__VA _ ARGS__' <u>Key words</u> *everything to right, can, macros, same type, not*

* <u>**The # Operator**</u> - When used infront of a parameter (#X) in a macro the preprocessor replaces the #X variable with a character string of the variable.

* <u>**The ## Operator**</u> - Provides a way to create a variable that is a concatenation of parts. x ## n, transforms variable n into xn, so a user could prefix variables with x and supply differentiating factor into macro. <u>Key words</u> *tokens*

<u>**The #include Statement**</u> - After a while you'll have a library of macros, constants, tools etc that you want to include in your programs, however why rewrite them each time. Use the include statement. Note the double " are used to tell the preprocessor where to look in #include "metric.h", whereas the < and > characters cause the preprocessor to look in a special location. Finally include files can be nested. <u>Key words</u> *include, header*

* <u>**System Include Files**</u> - Expanding on any include with a < xxx > definition. These address a varity of features you may wish to use, like < limits.h > for getting system dependent values that specify size or < stdio.h > for accessing I/O routines.

<u>**Conditional Compilation**</u> - The C preprocessor allows compilation to be bespoke for the particular use case, such as debugging, or running on a 64 bit machine, or a certain operating system etc. <u>Key words</u> *conditional compilation*

* <u>**The #ifdef, #endif, #else, #ifndef Statements**</u> - The preprocessor can execute snippets of code if a definition has been made "ifdef". The definition could be made in the code with a #define or by assigning a definition during the compilation state "gcc -D UNIT program.c" for example. Termination with "#endif" is required. Likewise the behaviour can be determined by the absense of a definition with "#ifndef" <u>Key words</u> *before, without*

* <u>**The #if and #elif Proprocessor Statements**</u> - Further to checking if something has been defined you can check it for specific values. Consider gcc -D OS=2 program.c then the #if OS==2 can be used. if defined(x) is same as ifdef x.

* <u>**The #undef Statement**</u> - In addition to adding definitions you can remove definitions with #undef. This can prevent a section of code from executing.

<u>**Exercises**</u> - Please see corresponding files in this directory.

- [x] Exercise 13.1
  - [x] [Program 13.1](Exercise_13.1/Program_13.1)
  - [x] [Program 13.2](Exercise_13.1/Program_13.2)
  - [x] [Program 13.3](Exercise_13.1/Program_13.3)
- [ ] Exercise 13.2
