#include <iostream>
using namespace std;
int factorial(int x){
	int f = 1;
	for (int i = x; i > 0; i--){
		f *= i;
	}
	
	return f;
}

int main () {
	char c;
	do{
	cout << "Enter a number: ";
	int num;
	cin >> num; 
	int f = factorial(num);
	cout << "Factorial is " << f;
	cout << "\nDo you want to find again(y/n)?";
	cin >> c; 
	} 
	while(c != 'n');
	
}
