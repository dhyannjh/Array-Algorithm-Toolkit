#include <iostream>
#include <string>
#include "algorithms.h"
//using namespace std;

void showMenu() {
	std::cout << "\n1. Input array"
		<< "\n2. Display array"
		<< "\n3. Bubble sort"
		<< "\n4. Selection sort"
		<< "\n5. Insertion sort"
		<< "\n6. Linear search"
		<< "\n7. Binary search"
		<< "\n8. Clear Array"
		<< "\n9. Exit"
		<< std::endl;
}

void inputArray(std::vector<int>& arr) {

	bool isAdding = true;
	std::string ans;

	while (isAdding) {
		std::cout << "Enter the number you wish to add to the array: ";
		std::cin >> ans;

		arr.push_back(std::stoi(ans));

		std::cout << "Do you wish to add another number? (y/n) ";
		std::cin >> ans;

		if (ans == "n") {
			isAdding = false;
		}
	}
}

void printArray(const std::vector<int>& arr) {

	if (!hasContent(arr, true)) return;

	for (int i : arr) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void bubbleSort(std::vector<int>& arr) {

	if (!hasContent(arr, true)) return;

	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr.size() - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);;
			}
		}
	}
}

void selectionSort(std::vector<int>& arr) {

	if (!hasContent(arr, true)) return;

	for (int i = 0; i < arr.size() - 1; i++) {
		int minIndex = i;

		for (int j = i + 1; j < arr.size(); j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}

		std::swap(arr[i], arr[minIndex]);
	}
}

void insertionSort(std::vector<int>& arr) {

	if (!hasContent(arr, true)) return;

	for (int i = 1; i < arr.size(); i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}
}

bool isSorted(const std::vector<int>& arr, int i) {

	if (i >= arr.size()) return true;

	if (arr.at(i) < arr.at(i - 1)) return false;

	return isSorted(arr, i + 1);
}

bool hasContent(const std::vector<int>& arr, bool showError) {
	if (arr.size() == 0) {
		if (showError) std::cout << "ERROR: Array is empty! " << std::endl;
		return false;
	}
	return true;
}

int linearSearch(const std::vector<int>& arr, int key) {

	if (!hasContent(arr, true)) return -1;

	for (int i = 0; i < arr.size(); i++) {
		if (arr.at(i) == key) {
			return i;
		}
	}

	std::cout << "ERROR: Couldn't find desiered key! ";
	return -1;
}

int binarySearch(const std::vector<int>& arr, int key) {

	if (!hasContent(arr, true)) return -1;

	if (!isSorted(arr)) {
		std::cout << "ERROR: Array must be sorted before binary search!\n";
		return -1;
	}

	int left = 0; int right = arr.size() - 1;

	while (left <= right) {
		int mid = (left + right) / 2;

		if (key == arr[mid]) return mid;

		if (key < arr[mid]) right = mid - 1;

		if (key > arr[mid]) left = mid + 1;

	}

	std::cout << "ERROR: Couldn't find desiered key! ";
	return -1;
}