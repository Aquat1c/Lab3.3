﻿// Lab_03_3.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
		double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -2)
		y = x + 3;
	else
		if (-2 * R < x && x <= 0)
			y = -x * R / 4.;
		else
			if (0 < x && x <= 4)
				y = -R;
			else
				if (4 < x && x <= 8 - R)
					y = sqrt(R * R - x * x + 16 * x - 64) - R;
				else
					y=-R;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}