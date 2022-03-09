#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Задание
	cout << "Задание.\n";
	int X, Y;
	cout << "Введите 2 числа: ";
	cin >> X >> Y;
	int* px = &X;
	int* py = &Y;
	// Задача
	cout << "Задача 1.\n";
	int res = (*px + *py) / 2;
	cout << "Среднее арифметическое = " << res << endl;
	return 0;
}