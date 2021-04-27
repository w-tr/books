### Input and Output Operations in C

All previous interaction with data into a program was done through the terminal. There are other I/O methods available.

<u>**Character I/O: getchar and putchar**</u> - Reads and writes a single char at each call. Recall readLine function.

<u>**Formatted I/O: printf and scanf**</u> - Used thoroughly in previous chapters. The character pointer comes first, then the format string arugments comes second.

* <u>**The printf Function**</u> - The % allows for a conversion, this is shown %\[flag]\[width]\[.prec]\[hlL]type. The \[ \] are optional. <u>Key words</u> *field width*

* <u>**The scanf Function**</u> - The % allows for a conversion & storage this is shown %[mod]type. <u>Key words</u> *whitespace, not, pick up where the last one left off, read and assigned*

<u>**Input and Output Operations with Files**</u> - Previously all read/writes were done via the terminal. This section covers reading/writing to external files.

* <u>**Redirecting I/O to a File**</u> - Using what we know from printing to a terminal. Operating systems allow you to execute a program and redirect the output to a file. prog > data. Likewise for input you can redirect it into a program. prog < number. You can do both read and write at the same time prog < number > data.

* <u>**End of File**</u> - Previous section covered that word count program that terminated on a double CR. This condition is the end of file. Reading beyond eof can lead to problems.<u>Key words</u> *module*

<u>**Special Functions for Working with Files**</u> - Although you can perform i/o operations with getchar, putchar, scanf, printf, and redirect, there may be situations where you need to deal with files. Therefore you need the following functios.

* <u>**The fopen Function**</u> - To use a file you first need to open it, specify mode and identify it by a pointer. Code -> FILE \*inputFile fopen ("data", "r"); On window OS you should fopen in a binary mode "rb" to ensure correct line endings etc.<u>Key words</u> *opened, read mode, write mode, append mode, file pointer*
* <u>**The getc and putc Functions**</u> - Basically similar to getchar and putchar, but work on a file pointer.
* <u>**The fclose Function**</u> - Opposite to fopen, this closes a file and does the housekeeping arround the maintaince of that file on the system. 
* <u>**The feof Function**</u> - This function can be used to test for end of file condition. It tells you you've read past the last bit of data and is not the EOF character.
* <u>**The fprintf and fscanf Functions**</u> - Analogous opreations of printf and scanf except they take a file pointer.
* <u>**The fgets and fputs Functions**</u> - Analogous to gets and puts. These read or write entire lines to and from a file. Can terminate at length or null/newline character into a file. <u>Key words</u> *buffer*
* <u>**stdin, stdout and stderr**</u> - Each time a c program executes three files are automatically openend. These are identified by the constant file pointers to stdin, stdout, stderr. So when you see the absence of a pointer in scanf("%s", &buff), what is actually happening is fscanf(stdin, "%s", &buff); <u>Key words</u> *constant*
* <u>**The exit Function**</u> - Terminates the program, regardless of being called in a function or in main. <u>Key words</u> *exit status, immediately*
* <u>**Renaming and Removing Files**</u> - You can rename, or remove files with these functions. Non-zero return means they have failed. <u>Key words</u> *see appendix B*

<u>**Exercises**</u> - Please see corresponding files in this directory.

- [x] Exercise 16.1
  - [x] [Program 16.1](Exercise_16.1/Program_16.1.c)
  - [x] [Program 16.2](Exercise_16.1/Program_16.2.c)
  - [x] [Program 16.3](Exercise_16.1/Program_16.3.c)
- [x] [Exercise 16.2](Exercise_16.2.c)
- [x] [Exercise 16.3](Exercise_16.3.c)
- [x] [Exercise 16.4](Exercise_16.4.c)
- [x] [Exercise 16.5](Exercise_16.5.c)
- [x] [Exercise 16.6](Exercise_16.6.c)
