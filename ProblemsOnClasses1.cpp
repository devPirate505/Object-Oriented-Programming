#include<iostream>
using namespace std;

class rectangle{
	private:
		float length;
		float breadth;
	public:
		rectangle(){
			length = 0;
			breadth = 0;
		}
		rectangle(float length, float breadth){
			this->length = length;
			this->breadth = breadth; 
		}
		rectangle(float num){
			length = num;
			breadth = num;
		}
		float area(){
			float a = length * breadth;
			return a;
		}
		void show(){
			cout << "Length is "<< length << endl; 
			cout << "Breadth is "<< breadth << endl;
		}
		int sameArea(rectangle a){
			if (a.area() == area()){
				return 1;
			}else{
				return 0;
			}
		}
		void set(float x, float y){
			length = x;
			breadth = y;
		}
		~rectangle(){
			cout << "\nThis is destructor a function.";
		}
};

int main (){
	
	rectangle r1, r2(4), r3(5,6);
	cout << "Area of rectangle 1 is " << r1.area() << endl;
	cout << "Area of rectangle 2 is " << r2.area() << endl;
	cout << "Area of rectangle 3 is " << r3.area() << endl;
	
	rectangle r4(5,2.5), r5(5, 18.9);
	cout << endl;
	r4.show();
	cout << "\nArea is " << r4.area() << endl << endl;
	r5.show();
	cout << "\nArea is " << r5.area() << endl << endl;
	if (r4.sameArea(r5) == 1){
		cout << "\nSame Area" << endl;
	}else{
		cout << "\nArea is not Same" << endl << endl;
	}
	r4.set(5, 18.9);
	r4.show();
	cout << "\nArea is " << r4.area() << endl << endl;
	r5.show();
	cout << "\nArea is " << r5.area() << endl;
	
	if (r4.sameArea(r5) == 1){
		cout << "\nSame Area" << endl;
	}else{
		cout << "\nArea is not Same" << endl;
	}

	
return 0;	
}
