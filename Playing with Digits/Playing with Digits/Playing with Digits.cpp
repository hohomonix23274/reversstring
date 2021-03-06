// Playing with Digits.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Ссылка на задачу https://www.codewars.com/kata/5552101f47fc5178b1000050
// Понятное описание работы программы можно найти по ссылке выше.


#include "pch.h"
#include <string>
#include <iostream>
#include <math.h>
#include <cassert>


using namespace std;

class DigPow
{
public:
	static int digPow(int n, int p);
};


	int DigPow :: digPow(int n, int p)
	{

		string str = to_string(n);
		int summ = 0;

		for (int i = 0; i < str.size(); ++i)
			summ += pow(str[i] - '0', p + i);

		int rs = summ / n;

		return (n*rs == summ) ? rs : -1;
	}


	void testequal(int ans, int sol) {
		assert(ans, Equals(sol));
	}
	void dotest(int n, int p, int expected)
	{
		testequal(DigPow::digPow(n, p), expected);
	}
	void SampleTest() {
		dotest(89, 1, 1);
		dotest(92, 1, -1);
		dotest(46288, 3, 51);
		dotest(114, 3, 9);
		cout << "SampleTest is okay!" << endl;
	}


int main()
{
	SampleTest();
}


