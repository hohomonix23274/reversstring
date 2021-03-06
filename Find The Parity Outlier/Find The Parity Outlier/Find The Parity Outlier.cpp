// Find The Parity Outlier.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Ссылка на задачу: https://www.codewars.com/kata/5526fc09a1bbd946250002dc
// Данная программа, реализует выборку из заданного вектора, четных или нечетных чисел.

#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int FindOutlier(vector<int> arr)
{
	int even;
	int evenNumbers = 0;

	int odd;
	int oddNumbers = 0;

	for (auto a : arr)
		(a % 2) == 0 ? (evenNumbers++, even = a) : (oddNumbers++, odd = a);

	if (evenNumbers < oddNumbers) return even;
	else return odd;
}

void Sampletest() {

	assert(FindOutlier({ 2, 3, 4 }), 3);
	assert(FindOutlier({ 1, 2, 3 }), 2);
	assert(FindOutlier({ 4, 1, 3, 5, 9 }), 4);
	cout << "SampleTest is okay!" << endl;
}

int main()
{
	Sampletest();
}