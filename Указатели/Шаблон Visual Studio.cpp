#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// �������
	cout << "�������.\n";
	int X, Y;
	cout << "������� 2 �����: ";
	cin >> X >> Y;
	int* px = &X;
	int* py = &Y;
	// ������
	cout << "������ 1.\n";
	int res = (*px + *py) / 2;
	cout << "������� �������������� = " << res << endl;
	return 0;
}