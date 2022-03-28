#pragma once
#include <string>
using namespace std;
class FractionC
{
	class Pair
	{
	private:
		int first;
		int second;
	public:
		int getFirst() { return first; }
		int getSecond() { return second; }

		void setFirst(int value) { first = value; }
		void setSecond(int value) { second = value; }
	};
	Pair pair;
public:
	bool Init(int, int);
	void Read();
	void Display();
	string toString();

	friend bool Less(FractionC x, FractionC y);
	friend bool NLess(FractionC x, FractionC y);
	friend bool Great(FractionC x, FractionC y);
	friend bool NGreat(FractionC x, FractionC y);
	friend bool Equal(FractionC x, FractionC y);
	friend bool NEqual(FractionC x, FractionC y);
};

