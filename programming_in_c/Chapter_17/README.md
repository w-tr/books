### Miscellaneous and Advanced Features

A discussion of more advanced topics.

<u>**Miscellaneous Language Statements**</u> - Intro into two new statements.

* <u>**The goto Statement**</u> - Creates a branch were the sequential flow is broken and the code goes to the label. <u>Key words</u> *label*
```c
if (isOutOfData) {
    goto out_of_data;
}
// ...
// block of code that is skipped if isOutOfData is true.
// ...
// label
out_of_data: printf("Unexpected end of data \n");
```
* <u>**The null Statement**</u> - Not to be mistaken by the null character. The null statement is a terminator when nothing is to be done.
```c
while ( (*text++ = getchar()) != '\n' )
    ; // null statement
```

<u>**Working with Unions**</u> - Like a structure, but different because of how memory is allocated. Instead of working like a struct which stores details of member1 AND member2 AND ... The union stores details of member1 OR member2 OR ...

<u>**The Comma Operator**</u> - Allows the splitting up of one statement into multiple expressions. When comma is used in seperating arugments in a function it is a seperate syntatical entity and not a instance of the comma operator <u>Key words</u> *and, not*
```c
while (i < 10)
    sum += data[i], i++; // no {} because this is one statement or two expressions.
```

<u>**Type Qualifiers**</u> - Used in front of vairables to give the compiler more information about the intended use.

* <u>**The register Qualifier**</u> - Makes a request to the compiler to store the data variable in one of the machines registers instead of memory/cache. For quick access
* <u>**The volatile Qualifier**</u> - Tells compiler the variable will change and prevents optimisation removing a value away. The inverse of const. <u>Key words</u> *will*
* <u>**The restrict Qualifier**</u> - Tells compiler a pointer is the only reference to a value.

<u>**Command-Line Arguments**</u> - When you want to start a program with the information it needs to operate already. You can provide the main function with argument dependent variables on runtime. argc is a count of arguments, whereas argv[] is a character vector to input. NOTE - argv[0] is the program name. NOTE - argv[x] is a character string therefore conversion is needed. See atoi, atof etc in Standard C library. <u>Key words</u> *Command-Line Arguments, called, runtime, always, terminate, else undefined*
```c
int main(int argc, char *argv[]) {
```

<u>**Dynamic Memory Allocation**</u> - The process of declaring a variable, makes the c compiler allocate memory to store the variable data. However it is hard to predict before the event what size of memory needs to be allocated to arrays. You have three options, 1. Define array max size at compile time. 2. Use a variable-length construct (doesn't work with vs). 3. Allocate the array dynamically using a c memory allocation routine. <u>Key words</u> *dynamically*

* <u>**The calloc and malloc Functions**</u> - Calloc takes two arguments, the number of elements and the size of each element in bytes. It returns a pointer to beginning of of allocated storage. The returned pointer can be type cast. Malloc takes one arugment, the size in bytes. FOR MEANINGFUL INFO GO TO OTHER SOURCES.<u>Key words</u> *bytes*
* <u>**The sizeof Operator**</u> - Calculated at compile time the sizeof operator converts the content within the brackets into a number of bytes. sizeof(int) = 4, whereas an array of 100 integers would give sizeof(int array[100]) = 400. Likewise this can be expanded to do structure types. See #define ELEMENTS(X)
```c
intPtr = (int *)calloc (sizeof(int), 1000);
intPtr = (int *)malloc (1000*sizeof(int));
// define pointer, then reserve memory
struct dataEntry *dataPtr
dataPtr = (struct dataEntry *)calloc (n, sizeof(struct dataEntry));
```
* <u>**The free Function**</u> - When you've finished using the allocated memory you can free up the memory again. <u>Key Words</u> *beginning*
```c
free(dataPtr);
```

<u>**Exercises**</u> - There are no Exercises for this chapter.

