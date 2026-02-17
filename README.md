# 🔧 C++ Algorithms Toolkit

A modular, menu-driven C++ project implementing fundamental sorting and searching algorithms using STL vectors and a multi-file architecture.

---

## 📌 Overview

This project is a console-based Algorithms Toolkit built in C++.  
It allows users to:

- Input and manage integer arrays
- Apply sorting algorithms
- Perform searching algorithms
- Validate edge cases (empty arrays, unsorted binary search, etc.)
- Interact through a clean menu-driven interface

The project is structured using header and source files to follow real-world C++ development practices.

---

## 🏗 Project Structure

Algorithms-Toolkit/
│
├── main.cpp
├── algorithms.h
├── algorithms.cpp
└── README.md

---


### 📂 File Responsibilities

- **main.cpp** → Program flow & menu loop
- **algorithms.h** → Function declarations & project design
- **algorithms.cpp** → Algorithm implementations

---

## ⚙️ Implemented Features

### 🔢 Array Management
- Input array
- Display array
- Clear array
- Validation for empty arrays

---

### 🔄 Sorting Algorithms
- Bubble Sort
- Selection Sort
- Insertion Sort

---

### 🔍 Searching Algorithms
- Linear Search
- Binary Search (with sorted-array validation)

---

### 🛡 Safety & Validation
- Prevents searching empty arrays
- Prevents binary search on unsorted arrays
- Returns `-1` if key not found
- Uses `const` references where applicable
- Recursive `isSorted()` implementation

---

## 🧠 Concepts Demonstrated

- STL `std::vector`
- Multi-file C++ architecture
- Function modularity
- Const correctness
- Recursion
- Menu-driven program design
- Basic algorithm analysis
- Edge case handling

---

## ▶️ How to Run

1. Open the project in **Visual Studio**
2. Build the solution
3. Run the executable
4. Use the menu to interact with the toolkit

---

## 📈 Future Improvements

- Add descending sorting option
- Add algorithm performance comparison
- Add timing benchmarks
- Add file input/output support
- Convert to class-based architecture
- Implement custom dynamic array (without STL)

---

## 🎯 Learning Purpose

This project was built as part of a structured weekly C++ learning roadmap to reinforce:

- Algorithm understanding
- Clean code organization
- Practical STL usage
- Defensive programming

---

## 👨‍💻 Author

Built as part of a progressive C++ development journey.
