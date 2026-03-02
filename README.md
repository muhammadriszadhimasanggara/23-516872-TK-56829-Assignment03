# Assignment 03 — Arrays & Algorithm Analysis
## TKU211231 Data Structures and Algorithms - C


## Student Information
- **Name:** Muhammad Risza Dhimas Anggara
- **Student ID:** 23/516872/TK/56829


## Solution Descriptions

### problem2.cpp — DynArray Procedural Implementation
A resizable integer array was implemented using a plain `DynArray` struct and 8 free functions:
`initArray`, `freeArray`, `pushBack` (with doubling resize), `insertAt`, `removeAt`,
`getAt`, `setAt`, and `printDynArr`. The time complexity for each operations were added as comments.

### problem3.cpp — Linear Search vs. Binary Search
Program for `linearSearch` (O(n)), `binarySearch` (O(log n)), and `generateSortedArray` was implemented.
Both algorithms were tested on arrays of sizes 10, 100, and 1000, which search for an existing
element (midpoint) and a missing element (-1), then the result is printed and confirmed.

### written_analysis.pdf — Written Analysis (Problems 1, 3B, and 4)
Contains:
- **Problem 1:** Line-by-line T(n) derivations, dropping the lower constants to obtain Big-O classes, 
  and best/worst case analysis for Snippets A, B, and C.
- **Problem 3B:** Complexity comparison table for linear and binary search with brief explanation;
  crossover analysis showing binary search is better than linear starting from n = 3.
- **Problem 4:** Full amortized analysis trace (12 calls, doubling strategy), obtaining the conclusion
  that geometric series proof that doubling strategy yield O(1) amortized cost while
  fixed-increment (+4) strategy yield O(n) amortized cost.


## Compilation Commands
```bash
# Problem 2
g++ -std=c++17 -Wall -Wextra -g -fsanitize=address -o problem2 problem2.cpp

# Problem 3
g++ -std=c++17 -Wall -Wextra -g -fsanitize=address -o problem3 problem3.cpp
```


## Known Issues / Limitations
- None. Both programs compile cleanly with no warnings under `-Wall -Wextra` and both programs have been tested with Address Sanitizer and show no memory leaks.


## Time Spent
- Problem 1 (written analysis): ~2 hours
- Problem 2 (DynArray implementation): ~1.5 hours
- Problem 3 (search implementations): ~1 hour
- Problem 4 (amortized analysis): ~2 hours
- **Total: ~6.5 hours**
