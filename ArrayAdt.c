#include<stdio.h>
#include<stdlib.h>

struct Array {
	int* A;
	int size;
	int length;
};

void Display(struct Array arr) {
	int i;
	printf("Elements are \n");
	for (i = 0; i < arr.length; i++)
	{
		printf("%d", arr.A[i]);
		printf("\n");
	}
}

//void Append(int number,struct Array *arr)
//{
//	if (arr->length > arr->size) {
//		printf("Aray size exceeded");
//		return;
//	}
//	arr->A[arr->length] = number;
//	arr->length++;
//}


void Insert(int index, int number,struct Array *arr) {
	for(int i = arr->length; i < index; i--)
	{
		arr->A[i] = arr->A[i - 1];
	}
	arr->A[index] = number;
	arr->length++;
}

void Delete(int index,struct Array *arr) {
	for (int i = index; i < arr->length; i++)
	{
		arr->A[i] = arr->A[i + 1];
	}
	arr->length--;
}

int LinearSearch(int key, struct Array* arr) {
	for (int i = 0; i < arr->length; i++)
	{
		if (arr->A[i] == key) {
			return i;
		}

	}
	return -1;
}

int ImprovedLinearSearch(int key, struct Array* arr) {
	for (int i = 0; i < arr->length; i++)
	{
		if (arr->A[i] == key) {
			arr->A[0] = arr->A[i]+arr->A[0];
			arr->A[i] = arr->A[0] - arr->A[i];
			arr->A[0] = arr->A[0] - arr->A[i];
			return i;
		}
	}
	return -1;
}

int BinarySearch(int low,int high,int key,struct Array arr) {
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr.A[mid]==key) {
			printf("Found");
			return mid;
		}
		if (arr.A[mid] > key) {
			high = mid - 1;
		}
		if (arr.A[mid] < key) {
			low = mid + 1;
		}
	}
	printf("Not found");
	return -1;
}

int RecursiveBinarySearch(int low, int high, int key, struct Array arr) {
	if (low <= high) {
		int mid = (low + high) / 2;
		if (arr.A[mid] == key) {
			printf("Found");
			return mid;
		}
		if (arr.A[mid] > key) {
			return RecursiveBinarySearch(low, mid - 1, key, arr);
		}
		if (arr.A[mid] < key) {
			return RecursiveBinarySearch(mid + 1, high, key, arr);
		}
	}
	printf("Not Found");
	return -1;
}

int main()
{
	int repeat;
	struct Array arr;
	int n,i,key,search_result;
	printf("Enter the size of the array");
	scanf_s("%d", &arr.size);
	arr.A = (int*)malloc(arr.size * sizeof(int));
	arr.length = 0;
	printf("Enter number of numbers");
	scanf_s("%d", &n);
	printf("Enter all elements....");
	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr.A[i]);
	}
	arr.length = n;
	Display(arr);
	printf("Enter the key you want to search ");
	scanf_s("%d",&key);
	/*search_result = ImprovedLinearSearch(key, &arr);
	(search_result == -1) ? printf("Element not found\n") : printf("Element found at %d\n", search_result);*/
	RecursiveBinarySearch(0, arr.length-1, key, arr);
	Display(arr);
	return 0;
}