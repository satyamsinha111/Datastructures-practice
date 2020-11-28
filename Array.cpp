#include<iostream>

using namespace std;

class Array {
private:
	int* A;
	int length;
	int size;
public:
	Array() {
		cout << "Constructor called" << endl;
		this->length = 0;
		this->size = 10;
		A = new int[size];
	}

	Array(int size, int length) {
		cout << "Parameterized constructor" << endl;
		this->length = length;
		this->size = size;
		A = new int[size];
	}

	~Array() {
		cout << "Destructor called" << endl;
		delete []A;
	}
	void insert(int index, int payload);
};

void Array::insert(int index, int payload) {
	cout << "Insert function called" << endl;
}


int main() {
	Array *a1 = new Array(1,2);

	a1->insert(1, 1);

	delete a1;
	return 0;
}