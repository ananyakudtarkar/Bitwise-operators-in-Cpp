# Bitwise-operators-in-Cpp


Aim: Introduction to bitwise operators in C++

Theory:
Bitwise operators in C++ operate on the binary representation of data. Instead of working with whole numbers directly, they perform operations on individual bits (0s and 1s), making them ideal for tasks like:
-Low-level programming
-Embedded systems
-Cryptography
-Graphics
-Performance optimization
These operators are especially useful with integral data types such as int, char, short, long.

| Operator    | Symbol | Description                           |
| ----------- | ------ | ------------------------------------- |
| AND         | `&`    | Bitwise AND                           |
| OR          | `\|`   | Bitwise OR                            |
| XOR         | `^`    | Bitwise Exclusive OR                  |
| NOT         | `~`    | Bitwise Complement (one’s complement) |
| Left Shift  | `<<`   | Shifts bits to the left               |
| Right Shift | `>>`   | Shifts bits to the right              |

🔹 Detailed Explanation
✅ Bitwise AND (&)
Compares each bit of both operands.
Result is 1 only if both bits are 1.

✅ Bitwise OR (|)
Result is 1 if at least one bit is 1.

✅ Bitwise XOR (^)
Result is 1 if the bits are different.

✅ Bitwise NOT (~)
Inverts each bit: 1 becomes 0, and 0 becomes 1.
Applied to a single operand (unary).

✅ Left Shift (<<)
Shifts bits to the left by a given number of positions.
Each shift multiplies the number by 2.

✅ Right Shift (>>)
Shifts bits to the right.
Each shift divides the number by 2 (dropping remainders).


Conclusion:
Bitwise operators in C++ allow direct manipulation of data at the bit level, offering high-performance control and efficiency. While they may seem complex at first, they are extremely powerful in system programming, device drivers, and performance-critical applications. Understanding how they work is essential for mastering low-level operations and optimization techniques.
