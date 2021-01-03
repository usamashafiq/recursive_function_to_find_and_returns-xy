#include<iostream>
#include<conio.h>
float power(int, int);
using namespace std;
int main() {
	int a, b;
	cout << "Enter a base  : " ;
	cin >> a;
	cout << "Enter a power : ";
	cin >> b;


	cout <<"Power is : "<< power(a, b);



	_getch();
}
float power(int x, int y) {
	float c;
	float t = 1;
	if (y >= 0) {
		if (y == 0) {
			return 1;

		}
		else
			return	x*power(x, y - 1);
	}
	else {
		y = y*-1;
		if (y == 0) {
			return 1;
		}
		else
			c = x*power(x, y - 1);
		t = t / c;
		return t;

	}
}
