#include <iostream>
#include <Windows.h>
#include "FractionC.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	FractionC a, b;
	a.Read();
	a.Display();
	b.Read();
	b.Display();

	if (Less(a, b) == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (NLess(a, b) == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (Great(a, b) == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (NGreat(a, b) == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (Equal(a, b) == true)
		cout << "����� � ����� ����� ����" << endl;
	if (NEqual(a, b) == true)
		cout << "����� � ����� ����� �� ����" << endl;

	return 0;
}