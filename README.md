# holbertonschool-sorting_algorithms
Sorting Algorithms & Big O

📖 Description  
This project focuses on implementing and understanding **sorting algorithms** and analyzing their **time complexity using Big O notation**.  
Sorting algorithms are fundamental in computer science and are widely used to organize data efficiently, optimize searches, and improve performance in real-world applications such as databases, operating systems, and data analysis tools.

---

## 🎯 Learning Objectives
At the end of this project, you should be able to explain:

- At least four different sorting algorithms
- What is Big O notation, and how to evaluate the time complexity of an algorithm
- How to select the best sorting algorithm for a given input
- What makes a sorting algorithm **stable**
- The difference between comparison-based and non-comparison-based sorting algorithms

---

## ⚙️ Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files will be compiled on **Ubuntu 20.04 LTS**
- Compilation options:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89


All files should end with a new line

A README.md file at the root of the project folder is mandatory

Your code should follow the Betty style

No global variables allowed

No more than 5 functions per file

You are allowed to use the standard library

The prototypes of all functions must be included in sort.h

All header files must be include guarded

You are not allowed to modify the provided print_array and print_list functions

The main.c files are provided for testing only and should not be pushed to the repository

📁 File Descriptions
File	Description
sort.h	Header file containing function prototypes and data structures
0-bubble_sort.c	Implementation of Bubble Sort
1-insertion_sort_list.c	Implementation of Insertion Sort on a doubly linked list
2-selection_sort.c	Implementation of Selection Sort
3-quick_sort.c	Implementation of Quick Sort
print_array.c	Function to print an array (provided)
print_list.c	Function to print a doubly linked list (provided)
README.md	Project documentation

🧠 Sorting Algorithms Implemented
🟢 Bubble Sort
Repeatedly steps through the list

Compares adjacent elements and swaps them if they are in the wrong order

Simple but inefficient for large datasets

Time Complexity:

Best: O(n)

Average: O(n²)

Worst: O(n²)

🟢 Insertion Sort
Builds the sorted list one element at a time

Efficient for small datasets or nearly sorted lists

Implemented using a doubly linked list

Time Complexity:

Best: O(n)

Average: O(n²)

Worst: O(n²)

🟢 Selection Sort
Repeatedly selects the smallest element from the unsorted part

Swaps it with the first unsorted element

Not stable and inefficient for large datasets

Time Complexity:

Best: O(n²)

Average: O(n²)

Worst: O(n²)

🟢 Quick Sort
Uses a divide-and-conquer strategy

Picks a pivot element and partitions the array

Very fast in practice

Time Complexity:

Best: O(n log n)

Average: O(n log n)

Worst: O(n²)

📌 Big O Notation Files
Each sorting algorithm has a corresponding file that contains its time complexity:

Algorithm	File
Bubble Sort	0-O
Insertion Sort	1-O
Selection Sort	2-O
Quick Sort	3-O

🛠️ Compilation Examples
bash
Copy code
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-bubble_sort.c print_array.c main.c -o bubble
./bubble
bash
Copy code
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-insertion_sort_list.c print_list.c main.c -o insertion
./insertion
📊 Expected Output Example
text
Copy code
19, 48, 99, 71, 13, 52, 96, 73
13, 19, 48, 52, 71, 73, 96, 99
🛡️ Edge Cases Handled
Empty arrays

Arrays with one element

Already sorted arrays

Arrays with duplicate values

NULL pointers

🔍 Concepts Covered
Algorithm efficiency

Time and space complexity

Stable vs unstable sorting

Array and linked list manipulation

Pointer operations in C

✍️ Author
Randa-hb10 \ rm-400000@hotmail.com

