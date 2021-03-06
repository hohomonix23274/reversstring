// LatestDiginofHugeNumber.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задание: https://www.codewars.com/kata/5518a860a73e708c0a000027
//
// Программа на входе, получает вектор целочисленных значений, выводит степень первого числа в виде : x1^(x2^(xn...

#include "pch.h"
#include <list>
#include <iostream>
#include <cassert>

using namespace std;

int lastPowDigitConverter(int n, int k)
{
	if (k == 0) return 1;
	if (n == 0) return 0;

	int dig = n % 10;
	k = k % 4;
	if (k == 0)
		k = 4;
	int res = dig;
	for (int i = 1; i < k; i++)
	{
		res = (res * dig) % 10;
	}
	return res;
}

int countAss(int n, int k)
{
	if (k == 0 || n == 1) return 1;
	if (n == 0) return 0;
	return 2;
}

int last_digit(list<int> array)
{
	if (array.size() < 1)
		return 1;
	if (array.size() == 1)
		return (array.front() % 10);
	if (array.size() == 2)
	{
		return lastPowDigitConverter(array.front(), array.back());
	}
	if (array.size() > 2)
	{
		int n = array.front() % 10; array.pop_front();
		int k = array.front(); array.pop_front();

		if (k % 4 == 3)
		{
			int m = array.back();
			while (array.size() > 1)
			{
				array.pop_back();
				m = lastPowDigitConverter(array.back(), m);
			}
			if (m % 2 == 0)
				return lastPowDigitConverter(n, 1);
			else
				return lastPowDigitConverter(n, 3);
		}

		int ass = array.back();
		while (array.size() > 1)
		{
			array.pop_back();
			ass = countAss(array.back(), ass);
		}

		if (k == 0)
			return (ass == 0) ? n : 1;

		if (ass == 0 || (k % 4 == 1))
			return lastPowDigitConverter(n, 1);

		if (k % 4 == 0)
			return lastPowDigitConverter(n, 4);

		if (k % 4 == 2)
		{
			if (ass > 1)
				return lastPowDigitConverter(n, 4);
			if (ass == 1)
				return lastPowDigitConverter(n, 2);

			return lastPowDigitConverter(n, 1);
		}
	}
}

void SampleTest() {

	assert(last_digit({}) == (1));
	assert(last_digit({ 0,0 }) == (1));
	assert(last_digit({ 0,0,0 }) == (0));
	assert(last_digit({ 1,2 }) == (1));
	assert(last_digit({ 3,4,5 }) == (1));
	cout << "Test is okay!" << endl;

}




int main()
{
	SampleTest();
}
