#include<iostream>
using namespace std;

class number{
	private:
		float num;
		int result;
	public:
		void setnum(float n){
			num = n;
		}
		bool wholecheck(float num){
			int x;
			x = num;
			if(x-num == 0){
				return true;
			}else{
				return false;
			}
		}
		bool signcheck(float num){
			if(num > 0 ){
				return true;
			}else{
				return false;
			}
		}
		void fact(float x){
			int p = 1;
			if (wholecheck(x) && signcheck(x)){
				for( int i = x; i > 0; i--){
					p *= i;
				}
				result = p;
			}else{
				result = -1;
			}
		}
		float getnum(){
			return num;
		}
		int getresult(){
			return result;
		}
};


int main () {
	
	number n1;
	float n;
	cout << "Enter Number: ";
	cin >> n;
	n1.setnum(n);
	n1.fact(n);
	
	int r = n1.getresult();
	if(r != -1){
		cout << "The Number is " << n1.getnum() << endl;
		cout << "Factorial is " << n1.getresult();
	}else{
		cout << "Invalid Input!";
	}
	
	
	return 0;
}
