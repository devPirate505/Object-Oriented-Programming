#include<iostream>
using namespace std;

int main () {
	
	int size;
	cout << "Enter the size of array: ";
	cin >> size;
	
	int arr[size];
	int c = 1;
	for (int i=0; i < size; i++){
		cout << "Enter element " << c << ": ";
		cin >> arr[i];
		c++;
	}
	int max = arr[0];
	for (int i=0; i < size; i++){
		if (arr[i] > max){
			max = arr[i];
		}
	}
	int *ptrM = &max;
	cout << "Address of max variable is " << ptrM << endl;
	cout << "Max number is " << *ptrM;
	
	return 0;
	
}
