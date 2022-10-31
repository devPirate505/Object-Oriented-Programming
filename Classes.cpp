#include<iostream>
using namespace std;

class tollBooth{
	private:
		int t_cars;
		double t_money;
		int pc;
		int npc;
	public:
		void setDataMembers(){
			t_cars = 0;
			t_money = 0;
			pc = 0;
			npc = 0;
		}
		void payingCar(){
			t_cars++;
			pc++;
			t_money += 50;
		}
		void nopaycar(){
			npc++;
			t_cars++;
		}
		int getcars(){
			return t_cars;
		}
		double getmoney(){
			return t_money;
		}
		int getpc(){
			return pc;
		}
		int getnpc(){
			return npc;
		}
};

int main () {
	tollBooth t1;
	t1.setDataMembers();
	char i, y;
	do{
		cout << "Press a for paying car, n for non paying car and press t to display: ";
		cin >> i;
		switch(i){
			case 'a':
				t1.payingCar();
				break;
			case 'n':
				t1.nopaycar();
				break;
			case 't':
				cout << "Total number of cars passed is " << t1.getcars() << endl;
				cout << "Total number of paid cars is " << t1.getpc() << endl;
				cout << "Total number of non-paid cars is " << t1.getnpc() << endl;
				cout << "Total amount paid is " << t1.getmoney() << endl;
				cout << "Enter c to continue, v to start again and o to end program: ";
				cin >> y;
				if (y == 'v'){
					t1.setDataMembers();	
				}
				break;
			default:
				cout << "Invalid Button" << endl;
		}
	}while(y != 'o');
	
return 0;	
}
