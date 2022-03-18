// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int partition(int A[], int low, int high) 
{ //Correctly sorts one pivot element
	int pivot = A[high];
	int i = low;
		for (int j = low; j < high; j++) {
			if (A[j] < pivot)
			{
				swap(A[i], A[j]);
				i++;
			}
		
		}
	swap(A[i], A[high]);
	return i;
  
	}
void quicksort(int A[], int low, int high) {
	if (low < high) {
		int j = partition(A, low, high);
		quicksort(A, low, j-1);	//recursive call for left partition
		quicksort(A, j+1, high); //recursive call for right partition
	}
}
int main()
{
	int mySampleArray[30] = {50, 100, 110, 10, 1400, 40, 90, 60, 70, 3, 99, 42, 69, 111, 420, 50, 1, 110, 10, 142, 40, 90, 6, 70, 30, 99, 42, 69, 111, 420 };
	cout << "Array before sort: \n";
	for (int i = 0; i < 30; i++) {
		cout << mySampleArray[i] << " ";
	}
	quicksort(mySampleArray, 0, 29);
	cout << "\nArray after sort: \n";
	for (int i = 0; i < 30; i++) {
		cout << mySampleArray[i] << " ";
	}

	int mySampleArray2[30] = { 3, 1111, 50, 4, 40, 13, 10, 224, 8, 15, 17, 3, 11, 5, 69, 420, 310, 10, 4, 8, 15, 17, 38, 99, 1000, 1, 29, 66, 142, 0 };
	cout << "\n\n\nArray 2 before sort: \n";
	for (int i = 0; i < 30; i++) {
		cout << mySampleArray2[i] << " ";
	}
	quicksort(mySampleArray2, 0, 29);
	cout << "\nArray 2 after sort: \n";
	for (int i = 0; i < 30; i++) {
		cout << mySampleArray2[i] << " ";
	}
	cout << endl;
    return 0;
	
}
