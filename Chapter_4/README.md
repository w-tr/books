### Variables, Data Types, and Arithmetic Expressions

It discusses the following

<u>**Working with variables**</u> - Variables allow access to memory address locations without needing to know the machine code identifier for such addresses. Variable identifiers have a few restrictions...as listed in chapter ... <u>Key words</u> *variable names, data types, declared before use, pointers*

<u>**Understanding data types and constants**</u> - c has five data types which are int, float, double, char, _Bool. Constants are as per the definition of the word. <u>Key words</u> *constant, constant expression*

*  <u>**The Basic Integer type (int)**</u> - Integers. Can be displayed in different base (radix) format. Minimum storage length is 2^32. A range could be -2^31 to +2^31, where the MSB is used for sign. Alternatively it could be 0 to +2^32. This machine and declaration dependent. <u>Key words</u> *octal, hexadecimal, range, implementation, machine dependent*

*  <u>**The Floating Number type (float)**</u> - This represents numbers with a floating point. Can be displayed in float, scientific notation or deterministic format. <u>Key words</u> *scientific notation, mantissa, exponent, hexadecimal.*

*  <u>**The Extended Precision type (double)**</u> - Similar to float but has greater range.

*  <u>**The Single Character type (char)**</u> - Represents a single character that you would find in utf/asci. Can be displayed by %c.

*  <u>**The Boolean Data type (_Bool)**</u> - A single ff register in scale, used to old true/false flag, or 1 or 0 value.

*  <u>**Type Specifiers**</u> - The range for a data type can be altered by the following type specifiers.
  ```c
  long, long long, short, unsigned, signed
  ```

<u>**Working with Arithmetic Expressions**</u> - First look at binary arithmetic operators are -, +, *, /. These operations have precedence, think bodmas. Operators have associative properties (left to right or right to left). <u>Key words</u> *binary arithmetic operators, precedence*

*  <u>**Integer Arithmetic and the Unary Minux operator**</u> - In addition to arithmetic operators (a op b), there are unary operators (op a).  <u>Key words</u> not (regarding rounding of float and int), unary.

*  <u>**The Modulus Operator**</u> - Symbolised by %, find the remainder of division.

*  <u>**Integer and Floating-Point Conversion**</u> - Shows what happens when different data types interact with an operator. <u>Key words</u> *truncated*

*  <u>**Type cast operator**</u> - Shows how a data type conversion can be implement to allow operator to interact with supposedly two values of same type.

<u>**Combining Operations with Assignments: The Assignment Operators**</u> - c allows arithmetic to be merged with the assignment operator op=, where op can be operators mentioned above.

<u>**Types _Complex and _Imaginary**</u> - Nothing noteworthy mentioned in this chapter.

**<u>Exercises</u>** - Please see corresponding files in this directory.