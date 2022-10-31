#include<iostream>
using namespace std;

int main () {
	
	int a,b;
	cout << "Enter two number: ";
	cin >> a >> b;
	
	int* ptrA;
	int* ptrB;
	
	ptrA = &a;
	ptrB = &b;
	
	cout << "ptrA = " << *ptrA << " Address is ==> " << ptrA;
	cout << "\nptrB = " << *ptrB << " Address is ==> " << ptrB;
	
	return 0;
	
}
