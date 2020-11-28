#include<iostream>

using namespace std;

int main() {
	/**
	Normal array declaration
	*/
	int A[3][3] = { {1,2,3},{6,7,8},{9,10,11} };
	int i, j;
	
    int* C[3];
	C[0] = new int[3];
	C[1] = new int[3];
	C[2] = new int[3];
	int count = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			C[i][j] = count;
			count++;
		}
		count++;
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			cout << C[i][j] << endl;
		}
	}
	int** D;
	D = new int*[3];
	D[0] = new int[3];
	D[1] = new int[3];
	D[2] = new int[3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			D[i][j] = count;
			count++;
		}
		count++;
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			cout << C[i][j] << endl;

		}
	}
	return 0;
}