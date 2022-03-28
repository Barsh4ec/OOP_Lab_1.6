#include "FractionC.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;

bool FractionC::Init(int x, int y) {
	pair.setFirst(x);
	if (y >= 0)
	{
		pair.setSecond(y);
		return true;
	}
	else
	{
		pair.setSecond(0);
		return false;
	}
}

void FractionC::Read() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x, y;
	do {
		cout << "Ціла частина числа: "; cin >> x;
		cout << "Дробова частина числа: "; cin >> y;
	} while (!Init(x, y));
}

void FractionC::Display() {
	cout << toString();
}

string FractionC::toString() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	stringstream sout;
	sout << "Число: " << pair.getFirst() << "." << pair.getSecond() << endl;
	return sout.str();
}

bool Less(FractionC a, FractionC b) {
	return (a.pair.getFirst() < b.pair.getFirst()) || (a.pair.getFirst() == b.pair.getFirst() && a.pair.getSecond() < b.pair.getSecond());
}
bool NLess(FractionC a, FractionC b) { return !Less(a, b); }

bool Great(FractionC a, FractionC b) {
	return (a.pair.getFirst() > b.pair.getFirst()) || (a.pair.getFirst() == b.pair.getFirst() && a.pair.getSecond() > b.pair.getSecond());
}
bool NGreat(FractionC a, FractionC b) { return !Great(a, b); }

bool Equal(FractionC a, FractionC b) {
	return a.pair.getFirst() == b.pair.getFirst() && a.pair.getSecond() == b.pair.getSecond();
}
bool NEqual(FractionC a, FractionC b) { return !Equal(a, b); }