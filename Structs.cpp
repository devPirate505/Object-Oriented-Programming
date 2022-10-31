#include<iostream>
using namespace std;

struct time{
	int hours;
	int minutes;
	int seconds;
};

int conv(time a){
	int s;
	s = a.hours * 3600;
	s += (a.minutes*60);
	s += a.seconds;
	return s;
}

int main () {
	time t;
	cout << "Enter hours: ";
	cin >> t.hours;
	cout << "Enter minutes: ";
	cin >> t.minutes;
	cout << "Enter seconds: ";
	cin >> t.seconds;
	int ts = conv(t);
	
	cout << "Total seconds are " << ts;
	
	return 0;
	
}
