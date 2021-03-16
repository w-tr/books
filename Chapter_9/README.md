### Working with Structures

Structures allow the grouping of many variables into one variable.

<u>**A Structure for Storing the Date**</u> - You must define a structure from preconceived data types (a member is int or float). The structure itself acts as a data type, therefore allowing variables to be associated. <u>Key words</u> *member, does cause memory to be reserved*

* <u>**Using Structures in Expressions**</u> - As with int a, int b you can do an int addtion (a + b), the same is true of structures. You need to address the member involved in the expression, therefore (d.a + d.b)

<u>**Functions and Structures**</u> - When using a structure in a function, it must be defined globally. Structures can be used as an argument to a function or as a return from a function. <u>Key words</u> *global, local, arguments, returns*

* <u>**A Structure for Storing the Time**</u> - Nothing new introduced, just expanding on using time as date was used. <u>Key words</u> - *scanf and '':'* 

<u>**Initializing Structures**</u> - A structure variable can be initialised to have member values by assignment with curly brackets. Within the curly brackets the assignment can be implicit (based on order) or explicit (based on .memberName=). <u>Key words</u> - *Undefined, defined*

* <u>**Compound Literals**</u> - After declaration, a structure can update member values either by specifying the value into each member OR by using compound literals. Compound literal is type casting the structure and then specifying the values to members - for example x = (struct structType) {member1, member2 ....}.  <u>Key words</u> *compound literals*

<u>**Array of Structures**</u> - struct time experiment[15] makes array of size 15 of the structure time. Furthermore declaration assignments can be achieved by bunching an array instance with curly brackets. So curly brackets within curly brackets. <u>Key words</u> *Array of structures*

<u>**Structures Containing Structures**</u> - A structure can contain other structures. Recall dateAndTime structure. <u>Key words</u> *Both, inside*

<u>**Structures Containing Arrays**</u> - A structure can contain an array within. struct month { int noOfDays; char name[3]; };.

<u>**Structures Variants**</u> - Variables can be declared in the same instance that a structure is defined. Furthermore they can be initialised during this time. <u>Key words</u> *define and declare*

**<u>Exercises</u>** - Please see corresponding files in this directory.

- [x] Exercise 9.1
  - [x] [Program 9.1](Exercise_9.1/Program_9.1.c)
  - [x] [Program 9.2](Exercise_9.1/Program_9.2.c)
  - [x] [Program 9.3](Exercise_9.1/Program_9.3.c)
  - [x] [Program 9.4](Exercise_9.1/Program_9.4.c)
  - [x] [Program 9.5](Exercise_9.1/Program_9.5.c)
  - [x] [Program 9.6](Exercise_9.1/Program_9.6.c)
  - [x] [Program 9.7](Exercise_9.1/Program_9.7.c)
- [x] [Exercise 9.2](Exercise_9.2.c)
- [x] [Exercise 9.3](Exercise_9.3.c)
- [x] [Exercise 9.4](Exercise_9.4.c)
- [x] [Exercise 9.5](Exercise_9.5.c)
- [x] [Exercise 9.6](Exercise_9.6.c)
