#include <iostream>
using namespace std;

int maxint(int x[]){
	int max = x[0];
	for (int i = 0; i < 10; i++){
		if (i > max){
			max = i;
		}
	}
	
	return max;
	
}


int main () {
	int myarr[10];
	for (int i = 0; i < 10; i++){
		cout << "Enter a number: ";
		cin >> myarr[i];
	}
	
	for(int i = 0; i < 10; i++){
		cout << myarr[i] << endl;
	}
	
	int max = maxint(myarr);
	cout << "\nMax num is " << max;
}
