// drawingTriangularShapeInvert.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int length;
	cout << "Enter length:";
	cin >> length;
	char symbol;
	cout << "Enter symbol:";
	cin >> symbol;


	for (int i = 1; i <= length; i++) {
		for (int j = 1; j <= i; j++) {
			cout << setw(3) << symbol;

		}
		cout << endl;
	}
	cout << endl << endl;
	for (int i = length; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << setw(3) << symbol;

		}
		cout << endl;
	}
}


