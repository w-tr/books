### Operations on Bits

Sometimes systems programmers need to twiddle the bits in computer memory. A recap on binary, twos complement and why keyword unsigned doubles possible numbers available. <u>Key words</u> *bit, byte, least significant, most significant, sign, n bits*

<u>**Bit Operators**</u> - All listed are binary operators, except ~ ones complement which is unary. Note bit operators don't act on floating points. <u>Key words</u> **

* <u>**The Bitwise AND Operator**</u> - Bit by bit comparison, not to be confused by logical AND. Often used as a bit mask, preserve bits from previous state or wipe all but. <u>Key words</u> *and, truth table*

* <u>**The Bitwise OR Operator**</u> - Bit by bit comparison, not to be confused by logical AND. Often used to set bits, regardless of previous state. To overload AND mask then set. <u>Key words</u> **

* <u>**The Bitwise XOR Operator**</u> - Does not exist in logical operator form. The equation 'a XOR a' will return 0. You can exchange values without the need for memory. <u>Key words</u> **

* <u>**The Ones Complement Operator**</u> - A unary operator that flops the bits (invertor), not to be confused with logical negation operator or minus operator. For example if w=0, then -w = 0, !w = 1, ~w = -1 <u>Key words</u> *precedence over any binary*

* <u>**The Left Shift Operator**</u> - Operator takes value and shift position. One shift left = x2. The new right most bits are 0 <u>Key words</u> **

* <u>**The Right Shift Operator**</u> - Operator takes value and shift position. One shift right = /2. The new left most bits are sign dependent, if sign 1 is preserved it's arithmetic right shift, else its logical right shift <u>Key words</u> *arithmetic, logical*

* <u>**The Shift Function**</u> - Shift function can shift left(+)/right(-) depending on sign of shift. <u>Key words</u> **

* <u>**Rotating Bits**</u> - A way to preserve the bits that are pushed over the edge. <u>Key words</u> **

<u>**Bit Fields**</u> - Information does not need to take an entire word/byte. Sometimes flags only require 1 bit. To preserve memory, 1. represent the data in an int and access the meaningful bit with bit ops. OR 2. structure of bit fields (member:width). Regarding point 2, compiler must create a memory block of struct type, and then assign bits as spec'd. <u>Key words</u> *bit field, unit, not*

<u>**Exercises**</u> - Please see corresponding files in this directory.

- [x] Exercise 12.1
  - [x] [Program 12.1](Exercise_12.1/Program_12.1.c)
  - [x] [Program 12.2](Exercise_12.1/Program_12.2.c)
  - [x] [Program 12.3](Exercise_12.1/Program_12.3.c)
  - [x] [Program 12.4](Exercise_12.1/Program_12.4.c)
- [ ] Exercise 12.2
