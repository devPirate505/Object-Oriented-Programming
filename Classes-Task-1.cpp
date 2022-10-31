#include<iostream>
using namespace std;

class laptop{
	private:
		string brand;
		string model;
		int serial;
		string color;
		float price;
		float pspeed;
		int ram;
		float ssize;
	public:
		void setValues(string a, string b, int c, string d, float e, float f, int g, float h){
			brand = a;
			model = b;
			serial = c;
			color = d;
			price = e;
			pspeed = f;
			ram = g;
			ssize = h;
		}
		void setRam(int x){
			ram = x;
		}
		void getmembers(){
			cout << "\nBrand is " << brand << endl; 
			cout << "Model is " << model << endl;
			cout << "Serial is " << serial << endl;
			cout << "Color is " << color << endl;
			cout << "Price is " << price << endl;
			cout << "Processor Speed is " << pspeed << endl;
			cout << "Ram is " << ram << endl;
			cout << "Screen size is " << ssize << endl;
		}
	
};

int main () {
	
	laptop l1;
	string br, mod, col;
	int ram, serial;
	float price, ps, ss;
	cout << "Enter Brand: ";
	cin >> br;
	cout << "Enter model: ";
	cin >> mod;
	cout << "Enter Serial No: ";
	cin >> serial;
	cout << "Enter color: ";
	cin >> col;
	cout << "Enter price: ";
	cin >> price;
	cout << "Enter Processor speed: ";
	cin >> ps;
	cout << "Enter RAM: ";
	cin >> ram;
	cout << "Enter Screen Size: ";
	cin >> ss;
	l1.setValues(br,mod,serial,col,price,ps,ram,ss);
	
	l1.setRam(16);
	
	l1.getmembers();
	
	return 0;
}
