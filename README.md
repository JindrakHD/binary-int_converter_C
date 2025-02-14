# Integer-Binary Conversion in C

This project provides C code for converting between integers and their binary representations. It's a beginner-level attempt at implementing these conversions, focusing on using only basic arithmetic operations and avoiding more advanced techniques.  Because of this, the code might be a bit more complex than necessary.

## What the project does

This C code allows you to convert between integer and binary formats. When you run the code, you'll be presented with a menu:

1.  **Int to Bin:** If you choose this option, the program will prompt you to enter an integer. It will then calculate and print the binary representation of that integer, including a parity bit.  The parity bit is '1' if the original number was odd, and '0' if it was even.
2.  **Bin to Int:** If you choose this option, the program will prompt you to enter a binary number (represented as a long long integer). It will then calculate and print the integer equivalent of that binary number.

The code is divided into several functions:

*   `findMaxBit(unsigned int userInt)`: This function (used in the Int to Bin conversion) determines the position of the most significant bit in an integer.
*   `IntToBin()`: This function handles the conversion from integer to binary. It takes an integer as input and prints its binary representation.
*   `findLen(long long int userInt)`: This function (used in the Bin to Int conversion) calculates the number of digits in a given integer (used to determine the length of the binary string).
*   `calcInt(int list1[], int lenList)`: This function (used in the Bin to Int conversion) calculates the integer value from an array of binary digits.
*   `BinToInt()`: This function handles the conversion from binary to integer. It takes a binary number (as a long long int) as input and prints its integer equivalent.
*   `main()`: This function presents the menu to the user and calls the appropriate conversion function based on their choice.

## Why the project is useful (and its limitations)

This project is useful for beginners learning about:

*   **Binary representation of integers:** The code demonstrates how integers are represented in binary format.
*   **Basic C programming:** The code uses fundamental C concepts like loops, conditional statements, and functions.
*   **Number system conversion:** The project provides a practical example of converting between number systems.

**However, it's important to note that this code is written from a beginner's perspective.**  It might be overcomplicated and inefficient compared to more optimized implementations. For example:

*   **Use of `pow()`:** The repeated use of the `pow()` function (especially with integer exponents) can be computationally expensive and might introduce floating-point inaccuracies.  Bitwise operations would be more efficient for binary manipulation.
*   **String representation of binary:** The BinToInt function reads the binary number as a long long int and then converts it to individual digits.  A more standard approach would be to read the binary input as a string.
*   **Fixed-size arrays:** The `binList` array in `BinToInt` has a fixed size. This limits the size of binary numbers that can be converted. Dynamic memory allocation would be more flexible.
