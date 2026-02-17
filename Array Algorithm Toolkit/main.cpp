#include <iostream>
#include "algorithms.h"
//using namespace std;

int main() {

	std::vector<int> arr;
	bool running = true;
	int ans;
	int keyIn;

	while (running) {

		showMenu();
		std::cout << "\nEnter 1, 2, 3, 4, 5, 6, 7 or 8: "; std::cin >> ans; std::cout << std::endl;

		switch (ans) {

		case 1:
			inputArray(arr);
			break;

		case 2:
			printArray(arr);
			break;

		case 3:
			bubbleSort(arr);
			break;

		case 4:
			selectionSort(arr);
			break;

		case 5:
			insertionSort(arr);
			break;

		case 6:
			std::cout << "Enter the key: "; std::cin >> keyIn;
			std::cout << "Searching..." << std::endl;
			std::cout << "Search Result:" << linearSearch(arr, keyIn) << std::endl;
			break;

		case 7:
			std::cout << "Enter the key: "; std::cin >> keyIn;
			std::cout << "Searching..." << std::endl;
			std::cout << "Search Result:" << binarySearch(arr, keyIn) << std::endl;
			break;

		case 8:
			std::cout << "Clearing Array..." << std::endl;
			arr.clear();
			break;

		case 9:
			std::cout << "Exiting Program..." << std::endl;
			running = false;
			break;

		default:
			std::cout << "ERROR: Invalid input!" << std::endl;
			break;

		}
	}

	return 0;
}