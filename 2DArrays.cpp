#include<iostream>
using namespace std;

int main () {
	
	int arr1[3][2] = {{1,2},
					  {3,4},
					  {5,6}}; 
	int arr2[3][2] = {{2,4},
					  {3,1},
					  {4,2}};
	int result[3][2];
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			result[j][i] = arr1[j][i] + arr2[j][i];
		}
	}
	cout << "First Array: " << endl;
	for (int i = 0; i < 3; i++){
		cout << "[ ";
		for (int j = 0; j < 2; j++){
			cout << arr1[i][j] << " ";
		}
		cout << "]" << endl;
	}
	cout << "Second Array: " << endl;
	for (int i = 0; i < 3; i++){
		cout << "[ ";
		for (int j = 0; j < 2; j++){
			cout << arr2[i][j] << " ";
		}
		cout << "]" << endl;
	}
	cout << "Resultant Array: " << endl;
	for (int i = 0; i < 3; i++){
		cout << "[ ";
		for (int j = 0; j < 2; j++){
			cout << result[i][j] << " ";
		}
		cout << "]" << endl;
	}
}
