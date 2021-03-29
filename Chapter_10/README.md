### Character Strings

Double quotations delimit a character string, whereas single quotations delimit a character. <u>Key words</u> *single*

<u>**Array of Characters**</u> - Recall that arrays can be changed in a function. Recall that the user needs to know the length of aforementioned arrays. <u>Key words</u> *number of characters contained inside array*

<u>**Variable-Length Character Strings**</u> - Specifying a the length of each character string is tedious. Therefore a better option is to look for the null character \0. <u>Key words</u> *null, while loop*

* <u>**Initialising and Displaying Character Strings**</u> - There are multiple ways to initialise a character array. With { or " or {' . Furthermore the dimensions can be implicit or explicit. However be aware that when explicit, you must increase size of array by one to include the null character otherwise it will be omitted and then end of string searches will fail. The %s in printf is an example of a search and output until null '\0' is encountered. <u>Key words</u> *concat - do not place null after s1 place null after s2*
* <u>**Testing Two Character Strings for Equality**</u> - The equality operator can only be applied to simple variables types, so how do you compare two strings? Loop through the array and compare character by character. <u>Key words</u> *return boolean*
* <u>**Inputting Character Strings**</u> - You can read in character strings with %s in scanf. The %s terminates on space, tab or end of line. Scanf function will hold the program up until the expected input is received. Also beware of overflow. <u>Key words</u> *& not placed*
* <u>**Single-Character Input**</u> - Functions like get or readline can continuously read character inputs until a terminating delimiter (carriage return) is encountered. The toggling of a flag like lookingForWord can help with counting changes in patterns. <u>Key words</u> *buffer, flag*
* <u>**The Null String**</u> - Null string is a line that has no other characters but the null string. Useful as a delimiter. <u>Key words</u> *end of text, Enter*

<u>**Escape Characters**</u> - Backslash followed by an escape character allows additional functionality. Refer to appendix's of C language <u>Key words</u> *trigraphs, any char, extended sets, audible alerts, universal character name*

<u>**More on Constant Strings**</u> - A backslash at the end of a line allows continuity without termination. However the spaces for indentation would be considered part of the string. Alternatively you can use double quotations that the compiler automatically concatenates into one long string. <u>Key words</u> *macro, preprocessor*

<u>**Character Strings, Structures and Arrays**</u> - Consider how  a dictionary program would lookup a definition.

* <u>**A Better Search Method**</u> - Because the search happens character by character AND the dictionary is ordered alphabetically you can escape a search loop if you pass the location of where a word should be. However this is not a cleaver search, only a clever escape. To have a clever search there is a binary search. Here we check the lexicographical rank of the words and jump up or down the dictionary. <u>Key words</u> *before, binary search*

<u>**Character Operations**</u> - A char type is actually represented by a integer. Therefore operations can be implemented on them.

<u>**Exercises**</u> - Please see corresponding files in this directory.

- [x] Exercise 10.1
  - [x] [Program 10.1](Exercise_10.1/Program_10.1.c)
  - [x] [Program 10.2](Exercise_10.1/Program_10.2.c)
  - [x] [Program 10.3](Exercise_10.1/Program_10.3.c)
  - [x] [Program 10.4](Exercise_10.1/Program_10.4.c)
  - [x] [Program 10.5](Exercise_10.1/Program_10.5.c)
  - [x] [Program 10.6](Exercise_10.1/Program_10.6.c)
  - [x] [Program 10.7](Exercise_10.1/Program_10.7.c)
  - [x] [Program 10.8](Exercise_10.1/Program_10.8.c)
  - [x] [Program 10.9](Exercise_10.1/Program_10.9.c)
  - [x] [Program 10.10](Exercise_10.1/Program_10.10.c)
  - [x] [Program 10.11](Exercise_10.1/Program_10.11.c)
- [x] [Exercise 10.2](Exercise_10.2.c)
- [x] [Exercise 10.3](Exercise_10.3.c)
- [x] [Exercise 10.4](Exercise_10.4.c)
- [x] [Exercise 10.5](Exercise_10.5.c)
- [x] [Exercise 10.6](Exercise_10.6.c)
- [x] [Exercise 10.7](Exercise_10.7.c)
- [x] [Exercise 10.8](Exercise_10.8.c)
- [x] [Exercise 10.9](Exercise_10.9.c)
- [ ] Exercise 10.10
- [ ] Exercise 10.11
- [ ] Exercise 10.12
- [ ] Exercise 10.13
- [ ] Exercise 10.14
