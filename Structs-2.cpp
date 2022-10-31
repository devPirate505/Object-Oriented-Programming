#include<iostream>
using namespace std;

struct point{
	int x;
	int y;
};

int main () {
	point p1, p2, p3;
	cout << "Enter x-axis of first point: ";
	cin >> p1.x;
	cout << "Enter y-axis of first point: ";
	cin >> p1.y;
	cout << "Enter x-axis of second point: ";
	cin >> p2.x;
	cout << "Enter y-axis of second point: ";
	cin >> p2.y;
	
	p3.x = p1.x+p2.x;
	p3.y = p1.y+p2.y;
	
	cout << "Coordinates of p1+p2 are: " << p3.x << ", " << p3.y;
	
	
	return 0;
	
}
