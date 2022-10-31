#include<iostream>
using namespace std;

class time{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		time(){
			hours = 0;
			minutes = 0;
			seconds = 0;
		}
		time(int h, int m, int s){
			hours = h;
			minutes = m;
			seconds = s;
		}
		void display(){
			cout << hours << ":" << minutes << ":" << seconds << endl;
		}
		void add(time x, time y){
			int s1 = (x.hours * 3600)+(x.minutes * 60)+(x.seconds);
			int s2 = (y.hours *3600)+(y.minutes * 60)+(y.seconds);
			int sum = s1 + s2;
			hours = sum / 3600;
			sum = sum % 3600;
			minutes = sum / 60;
			seconds = sum % 60; 
		}
};

int main () {
	
	time t1(2,45,55), t2(3,20,15), t3;
	t3.add(t1,t2);
	t3.display();
	
	return 0;
}
