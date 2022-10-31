#include<iostream>
using namespace std;

int main () {
	
	int v;
	cout << "Enter a number: ";
	cin >> v;
	
	int* ptr = &v;
	
	cout << "The value of variable is " << *ptr;
	cout << "\nThe address of variable is " << ptr;
	
	return 0;
	
}
