#include<iostream>
using namespace std;
class imgnum{
	private:
		float realpart;
		float imgpart;
	public:
		void setdata(float x, float y){
			realpart = x;
			imgpart = y;
		}
		float getreal(){
			return realpart;
		}
		float getimg(){
			return imgpart;
		}
};

int main () {
	
	imgnum n1, n2;
	float x, y;
	cout << "Enter the real part and imaginary part of first complex number: ";
	cin >> x >> y;
	n1.setdata(x, y);
	cout << "Enter the real part and imaginary part of second complex number: ";
	cin >> x >> y;
	n2.setdata(x, y);
	
	float rsum = n1.getreal() + n2.getreal();
	float imgsum = n1.getimg() + n2.getimg();
	
	cout << "\nThe sum of both complex numbers is " << rsum << "+" << imgsum << "i" << endl;
	
	float rsub = n1.getreal() - n2.getreal();
	float imgsub = n1.getimg() - n2.getimg();
	
	cout << "\nThe sum of both complex numbers is " << rsub << "-(" << imgsub << "i)" << endl;
	
	return 0;
}
