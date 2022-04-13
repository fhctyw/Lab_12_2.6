#include <iostream>
#include <Windows.h>
#include "Rational.h"
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	Rational r = { {3, 4} }, r1;
	cout << r << endl;
	cin >> r1;

	cout << r << " + " << r1 << " = " << r + r1 << endl;
	cout << r << " / " << r1 << " = " << r / r1 << endl;
	cout << r << " - " << r1 << " = " << r - r1 << endl;


	return 0;
}