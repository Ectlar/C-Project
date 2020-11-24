#include <iostream>
#include <iomanip>
#include <tchar.h>
#include <cstring>
#include <cctype>
#include <string>
#include <typeinfo>
#include <cmath>
using namespace std;
//TOTAL SMALLEST REVERSE

int main() {
	int *array, size;
	cout << "Enter size of array: " << endl;
	cin >> size;
	array = new int[size];
	cout << "Enter array elements: " << endl;

	for (int a = 0; a < size; a++) {
		cin >> array[a];

	}
	cout << "Array's type is: ";
	cout << typeid(array).name() << endl;
	cout << "And the size type is: ";
	cout << typeid(size).name() << endl;
	int total = 0;
	int smallest = 0;
	int largest = 0;
	int scale = 0;
	int* array2;
	array2 = new int[size];
	//array2 = array;
	int b = size;
	char action[20];
	cin.ignore(100, '\n');
	while (true) {

		cout << R"(Please choose one of the following actions:
DISPLAY, TOTAL, AVERAGE, LARGEST,SMALLEST, OCCURRENCES OF VALUE, SCALE UP, REVERSE, ZERO BASE, EXIT
: )";
		cin.getline(action, sizeof(action));
		for (int a = 0; a < strlen(action); a++) {
			action[a] = tolower(action[a]);
			//action[a] = putchar(tolower(action[a]));
		}

		if (string(action) == "display") {
			for (int a = 0; a < size; a++) {
        		cout << array[a] << ' ';
			}
		}

		if (string(action) == "total") {
			for (int a = 0; a < size; a++) {
				total = total + array[a];

				
			}
			cout << "The total is: " << total;
			total = 0;
		}

		if (string(action) == "average") {

		}
		if (string(action) == "largest") {
			for (int a = 0; a < size; a++) {
    				if (array[a] > largest) {
        				largest = array[a];
    				}
			}
			cout << "Largest number: " << largest;
		}
		if (string(action) == "smallest") {
			smallest = array[0];
			for (int a = 0; a < size; a++) {
				if (array[a] < smallest){
					smallest = array[a];
				}
			}
			cout << "The smallest number is: " << smallest;
		}
		if (string(action) == "occurrences of value") {

		}
		if (string(action) == "scale up") {
    			cout << "Enter a scale factor (positive numbers only): ";
    			cin >> scale;
    			for (int a = 0; a < size; a++) {
        			array[a] = pow(array[a], scale);
    			}
    			cout << "Scaled-up array: ";
    			for (int a = 0; a < size; a++) {
        			cout << array[a] << ' ';
			}
		}
		if (string(action) == "reverse") {
			for (int a = 0; a < size; a++) {
				array2[b-1] = array[a];
				b--;

			}
			cout << "The reversed array is:" << endl;
			for (int a = 0; a < size; a++) {
				cout << " " << array2[a];
			}
		}
		if (string(action) == "zero base") {

		}
		if (string(action) == "exit") {
			break;
		}

		cout << "\n" << endl;
	}
	
}
