#include <iostream>
using namespace std;

int cubebyval(int x){
	x= x * x * x;
	return x;
}

int cubebyref(int &y){
	y = y * y * y;
	return y;
}

int main () {
	cout << "Enter first number: ";
	int num1;
	cin >> num1;
	cout << "Enter second number: ";
	int num2;
	cin >> num2;
	
	int n = cubebyval(num1);
	int n2 = cubebyref(num2);
	cout << "\nPass by Value result is " << n << endl;
	cout << "Pass by Reference result is " << n2 << endl;
	
	cout << "\nNum1 = " << num1 << endl;
	cout << "Num2 = " << num2;
	
}
