/*
## Pipline stucture:

START
\/
Take array input
\/
SHOW MENU
\/
User chooses option
\/
Perform operation
\/
Show result
\/
Back to MENU
\/
EXIT

## List of functions:

void inputArray(); -- input array

void printArray(); -- print array

# Sorting Algorithms

void bubbleSort(); -- bubble sort

void selectionSort(); -- selection sort

void insertionSort(); -- insertions sort

# Searching Algorithms

int linearSearch();

int binarySearch();

# Misc.

void showMenu(); -- display menu // IN main.cpp

bool isSorted(); -- check is array is sorted

## Menu design

1. Enter new array
2. Display array
3. Bubble sort
4. Selection sort
5. Insertion sort
6. Linear search
7. Binary search
8. Clear Array
9. Exit

## Rules

1. What if user tries to search before entering array?
2. What if user uses binary search on unsorted array?
3. Should sorting modify the original array?
4. Should the menu repeat after every operation?

*/
// ^ Design

#pragma once
#include <vector>

void showMenu();

void inputArray(std::vector<int>& arr); //1
void printArray(const std::vector<int>& arr); //2

void bubbleSort(std::vector<int>& arr); //3
void selectionSort(std::vector<int>& arr); //4
void insertionSort(std::vector<int>& arr); //5

bool isSorted(const std::vector<int>& arr, int i = 1);
bool hasContent(const std::vector<int>& arr, bool showError);

int linearSearch(const std::vector<int>& arr, int key); //6
int binarySearch(const std::vector<int>& arr, int key); //7
