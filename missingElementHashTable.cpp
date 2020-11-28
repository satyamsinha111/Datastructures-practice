#include<iostream>
using namespace std;

class MissingElementHashTableAlgorithm {
private:
	int* A;
	int size;
	int length;
public:
	MissingElementHashTableAlgorithm() {
		this->size = 10;
		this->length = 0;
		A = new int[size];
	}

	MissingElementHashTableAlgorithm(int sz,int lgth) {
		this->size = sz;
		this->length = lgth;
		A = new int[sz];
	}

	void Setter(int *A) {
		for (int i = 0; i < length; i++)
		{
			this->A[i] = A[i];
		}
	}

	~MissingElementHashTableAlgorithm() {
		delete[]A;
	}

	void Display() {
		for (int i = 0; i < length; i++)
		{
			cout << A[i];
		}
	}

	int Max() {

	}
};


int main()
{
	int* A;
	int size, length;
	cout << "Enter the size of the array: ";
	cin >> size;
	cout << "Enter the length of the array: ";
	cin >> length;
	A = new int[size];
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < length; i++) {
		cin >> A[i];
	}

	MissingElementHashTableAlgorithm *mehta = new MissingElementHashTableAlgorithm(size, length);
	mehta->Setter(A);

	return 0;
}