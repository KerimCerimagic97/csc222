Number Systems:
binary: starts with 0b
Octal: starts with 0
Hexadecimal,starts with 0x


Terminal :
To compile code: 
g++ “code name” -o “program name”
To run:
./“program name”

git add -A
git commit
git push


C++:

using namespace std;

#include - adds libraries

<iostream> adds cout and cin
<math> adds math functions
<cstdlib> c standard library, adds functions like random
<doctest.h> for doctest


Chapter 1-2:

to declare main: int main() {}
-have a return statement at the end


cout = displaying outputs,   followed by << (variable)
cin = user input,   followed by >> (variable)
endl = ends the line

// for comments, can be put at the end of a line

Chapter 3-4:

dec, hex, oct to convert literal integer number to different bases
scientific to convert float to scientific notation, or numenum2 ex: 2e2 = 2*10^2

setw sets the minimum field width for the value to be printed, ex setw(10) << 2 = "         2"

time() = seconds since jan 1st 1979


Logical Operators and Booleans:
not>and>or

AND: &&
OR:  ||
NOT: !

for boolean operators, bool name = value
flags are booleans that check wether the condition of something is met, ex:  bool even_flag = (n%2 == 0); true if n is even
Numbers can be used as booleans, 0 = false, non-zero = true

Bitwise Operators:

- turns inputted values into Binary and then compares them,

AND  - & -   1 if both operand bits are 1, otherwise 0

OR   - | -   1 if at least one operand bit is 1, 0 if both operand bits are 0

XOR  - ^ -   1 if at exactly one operand bit is 1, otherwise 0

NOT  - ~ -   1 if operand bit is 0, 0 if operand bit is 1


Conditional statements:

if(Logical Operator){code}

while(Logical Operator){code}




