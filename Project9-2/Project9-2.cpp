#include <iostream>
#include <ctime>

using namespace std;

bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);

int main() {
	int a, b, c, d, e, f;

		cout << "Enter integer #0:";
		cin >> a;
		cout << "Enter integer #1:";
		cin >> b; 
		cout << "Enter integer #2:";
		cin >> c;
		cout << "Enter integer #3:";
		cin >> d;
		cout << "Enter integer #4:";
		cin >> e;
		cout << "Enter integer #5:";
		cin >> f;

		int array[6] = { a, b, c, d, e, f };

		if (isSortedIncreasing(array, 6)) {

			cout << "The data are increasing." << endl;

		}
		else {
			cout << "The data are not increasing." << endl;
		}

		if (isSortedDecreasing(array, 6)) {
			cout << "The data are not decreasing." << endl;
			
		}
		else {
			cout << "The data are decreasing" << endl;
		}

		if (hasAdjacentDuplicates(array, 6)) {
			cout << "The data has adjacent duplicates" << endl;
		}
		else { cout << "The data does not have adjacent duplicates" << endl; }

		if (hasDuplicates(array, 6)) {
			cout << "The data has duplicates" << endl;
		}
		else { cout << "The data does not have duplicates" << endl; }

	


}

bool isSortedIncreasing(int value[], int size) {

	bool increase = true;

	for (int i = 0; i < size-1; i++) {
		if (value[i] > value[i + 1]) {
			increase = false;
		}
	}

	return increase;
}

bool isSortedDecreasing(int values[], int size) {

	bool decreasing = true;

	for (int i = 0; i < size-1; i++) {
		
		if (values[i] > values[i + 1]) {

			decreasing = false;

		}
	}

	return decreasing;

}

bool hasAdjacentDuplicates(int values[], int size) {

	bool adjacent = false;

	for (int i = 0; i < size - 1; i++) {

		if (values[i] == values[i + 1]) {

			adjacent = true;

		}
	}

	return adjacent; 

}

bool hasDuplicates(int values[], int size) {

	bool duplicates = false;

	for (int i = 0; i < size - 1; i++) {

		for (int c = i+1; c < size - 1; c++) {

			if (values[i] == values[c]) {
				duplicates = true;
			}
		}
	}

	return duplicates;
}