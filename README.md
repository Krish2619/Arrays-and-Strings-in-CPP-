Aim:
To understand and implement fundamental array and string operations in C++ such as input/output, searching, aggregation (sum, average), finding max/min, string manipulation (declaration, concatenation, reversal), and checking for palindromes.

Apparatus:
- C++ Compiler (e.g., GCC, g++, Visual Studio)
- IDE or text editor (e.g., Code::Blocks, Visual Studio Code)
  
Program Explanation:
- Array Input and Display:
  Accepts dynamic array size from the user, takes inputs, and prints the array elements.
- Linear Search:
  Searches for a given element in a fixed array and outputs its position or indicates if not found.
- Sum and Average of Array Elements:
  Calculates and outputs the sum and average of the input array elements.
- Finding Maximum and Minimum Elements:
  Determines and displays the maximum and minimum values in the user-defined array.
- String Declaration Methods:
  Demonstrates different ways to declare and initialize strings using character arrays and std::string.
- String Concatenation:
  Takes two strings as input and concatenates them with a space in between.
- String Reversal:
  Reverses a user-input string and displays the reversed string.
- Palindrome Checking:
  Checks if a user-input string is a palindrome and outputs the result.

Algorithms:
- Array Input & Output:
1. Read array size n
2. Loop from 0 to n-1 to input array elements
3. Loop again to print elements

- Linear Search:
1. Traverse array elements
2. Compare each element with the search key
3. If match found, print position and stop
4. If not found, print not found message

- Sum & Average:
1. Initialize sum to 0
2. Loop through array to add each element to sum
3. Calculate average = sum / number of elements

- Max & Min Element:
1. Initialize max and min with the first element
2. Traverse the array
3. Update max if current element > max
4. Update min if current element < min

- String Declaration:
1. Show examples using char arrays with '\0' and std::string.

- String Concatenation:
1. Use + operator to combine two strings with a space.

- String Reversal:
1. Loop backward over the string characters and print.

- Palindrome Check:
1. Compare characters from start and end
2. If any mismatch, declare not palindrome
3. If all match, declare palindrome

Key Concepts:
- Dynamic arrays and fixed arrays
- Basic array traversal and operations
- Linear search algorithm
- String manipulation in C++
- Use of loops for iteration
- Conditional statements for decision making
- Character arrays vs. std::string class
- Null character ('\0') in C-style strings
- Palindrome concept and checking technique

Conclusion:
These programs provide foundational knowledge of handling arrays and strings in C++. They demonstrate essential programming constructs like loops, conditionals, and basic algorithms (searching, summing, finding max/min). The string programs illustrate the flexibility of C++ string handling, including manipulation and validation like palindrome checking. Together, these examples form a solid basis for further exploration into data structures, algorithms, and string processing in C++.
