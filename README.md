# C - Sorting Algorithms & Big O

## 📖 Description

This project is part of the **Holberton School** curriculum and focuses on implementing and understanding classic **sorting algorithms** in the C programming language. The goal is to explore how different algorithms work, compare their **time complexity**, and understand when and why to use each one.

Sorting algorithms are fundamental in computer science and are widely used in real-world systems such as databases, operating systems, and search engines.

---

## 🎯 Learning Objectives

By completing this project, you will be able to:

* Understand what sorting algorithms are
* Implement common sorting algorithms in C
* Understand **Big O notation** and algorithmic complexity
* Analyze time complexity (best, average, worst cases)
* Choose the most appropriate sorting algorithm for a given problem
* Work with arrays and doubly linked lists

---

## ⚙️ Requirements

* Allowed editors: `vi`, `vim`, `emacs`
* All files will be compiled on **Ubuntu 20.04 LTS**
* Compilation using:

  ```bash
  gcc -Wall -Wextra -Werror -pedantic -std=gnu89
  ```
* All files should end with a new line
* A `README.md` file at the root of the project is mandatory
* Code must follow **Betty style** (`betty-style.pl` and `betty-doc.pl`)
* No global variables allowed
* No more than **5 functions per file**
* You may use the standard C library
* The prototypes of all functions must be included in `sort.h`
* All header files must be **include guarded**

---

## 📋 File Descriptions

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

## 🧠 Big O Notation

The following table shows the **time complexity** of each sorting algorithm implemented in this project:

| Algorithm      | Best Case  | Average Case | Worst Case |
| -------------- | ---------- | ------------ | ---------- |
| Bubble Sort    | O(n)       | O(n²)        | O(n²)      |
| Insertion Sort | O(n)       | O(n²)        | O(n²)      |
| Selection Sort | O(n²)      | O(n²)        | O(n²)      |
| Quick Sort     | O(n log n) | O(n log n)   | O(n²)      |

---

## 🛠️ Compilation Examples

Example of compiling a sorting algorithm:

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 \
0-bubble_sort.c print_array.c main.c -o bubble
```

Run:

```bash
./bubble
```

> **Note:** `main.c` files are provided only for testing purposes and should **not** be pushed to the repository.

---

## 📊 Expected Output Example

Example output after sorting:

```text
Before sorting:
19, 48, 99, 71, 13

After sorting:
13, 19, 48, 71, 99
```

---

## 🛡️ Edge Cases Handled

* Empty arrays
* Arrays with one element
* Already sorted arrays
* Reverse sorted arrays
* Duplicate values

---

## 📂 Project Structure

```
holbertonschool-sorting_algorithms/
│
├── sort.h
├── 0-bubble_sort.c
├── 1-insertion_sort_list.c
├── 2-selection_sort.c
├── 3-quick_sort.c
├── print_array.c
├── print_list.c
└── README.md
```

---

## ✍️ Author
Randa-hb10 \ rm-400000@hotmail.com

Maryam13188 \ roro13188@gmail.com 


---
