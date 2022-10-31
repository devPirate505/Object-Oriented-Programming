#include<iostream>
using namespace std;

class complex{
	public:
		float real;
		float img;
		void set(float x, float y){
			real = x;
			img = y;
		}
		void display(){
			cout << "The complex number is " << real << "+" << img << "i." << endl; 
		}
};
		complex add(complex x, complex y){
			complex	z;
			z.set((x.real + y.real), (x.img + y.img));
			return z;
		}


int main () {
	
	complex c1, c2 , c3;
	c1.set(3,2);
	c2.set(6,3);
	cout << "First complex number is ";
	c1.display();
	cout << "Second complex number is ";
	c2.display();
	c3 = add(c1,c2);
	cout << "Sum of both complex numbers is ";
	c3.display();
	return 0;
}
