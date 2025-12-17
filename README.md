# Sorting Algorithms & Big O

This project is part of the Holberton School Saudi Arabia curriculum, in partnership with Tuwaiq Academy, and focuses on implementing and understanding classic sorting algorithms in the C programming language. The goal is to explore how different algorithms work, compare their time complexity, and understand when and why to use each one.
Sorting algorithms are fundamental in computer science and are widely used in real-world systems such as databases, operating systems, and search engines. This project provides hands-on experience with algorithm implementation, performance analysis, and complexity evaluation—essential skills for any aspiring software engineer or computer scientist.

---

## Learning Objectives

* Understand what sorting algorithms are
* Implement common sorting algorithms in C
* Understand **Big O notation** and algorithmic complexity
* Analyze time complexity (best, average, worst cases)
* Choose the most appropriate sorting algorithm for a given problem
* Work with arrays and doubly linked lists

---

## Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* All files will be compiled on **Ubuntu 20.04 LTS**
* Compilation using:
* *gcc -Wall -Wextra -Werror -pedantic -std=gnu89*
* All files should end with a new line
* A `README.md` file at the root of the project is mandatory
* Code must follow **Betty style** (`betty-style.pl` and `betty-doc.pl`)
* No global variables allowed
* No more than **5 functions per file**
* You may use the standard C library
* The prototypes of all functions must be included in `sort.h`
* All header files must be **include guarded**

---

## File Descriptions

| File                    | Description                                                                 |
| ----------------------- | --------------------------------------------------------------------------- |
| sort.h                  | Header file containing function prototypes, data structures, and macros     |
| 0-bubble_sort.c         | Function that sorts an array of integers using the Bubble sort algorithm    |
| 1-insertion_sort_list.c | Function that sorts a doubly linked list of integers using Insertion sort   |
| 2-selection_sort.c      | Function that sorts an array of integers using the Selection sort algorithm |
| 3-quick_sort.c          | Function that sorts an array of integers using the Quick sort algorithm     |
| print_array.c           | Function to print an array of integers                                      |
| print_list.c            | Function to print a doubly linked list of integers                          |
| README.md               | Project documentation                                                       |

---

## Big O Notation

| Algorithm      | Best Case  | Average Case | Worst Case |
| -------------- | ---------- | ------------ | ---------- |
| Bubble Sort    | O(n)       | O(n²)        | O(n²)      |
| Insertion Sort | O(n)       | O(n²)        | O(n²)      |
| Selection Sort | O(n²)      | O(n²)        | O(n²)      |
| Quick Sort     | O(n log n) | O(n log n)   | O(n²)      |

---

## Compilation Examples

```gcc -Wall -Wextra -Werror -pedantic -std=gnu89
\0-bubble_sort.c print_array.c main.c -o bubble
```

### Run:

```./bubble```

---

## Expected Output Example

```
Before sorting:
19, 48, 99, 71, 13
```
```
After sorting:
13, 19, 48, 71, 99
```

---

## Author
 - #### Maryam Al Essa
- Email: roro13188@gmail.com
- Holberton Schools Saudi Arabia by Tuwaiq Academy

- #### Randa Baeshen
- Email: rm-400000@hotmail.com
- Holberton Schools Saudi Arabia by Tuwaiq Academy
