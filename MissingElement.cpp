#include<iostream>

//[6,7,10,11,12]

using namespace std;

int main()
{
	int16_t* A;
	int16_t size, length;
	cout << "Enter the size of the array :";
	cin >> size;
	cout << "Enter the length of the array :";
	cin >> length;
	A = new int16_t[size];

	cout << "Enter the sorted elements: ";
	for (int16_t i = 0; i < length; i++) {
		cin >> A[i];
	}

	int diff = A[0] - 0;

	for (int i = 0; i < length; i++) {
		if (A[i] - i != diff) {
			while (A[i] - i != diff) {
				cout << i + diff << " is missing" << endl;
				diff++;
			}
		}
	}

	delete []A;
	return 0;
}
