// Form The Minimum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/5ac6932b2f317b96980000ca

#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

void SampleTest();

int main()
{
	SampleTest();
}

struct myclass
{
	bool operator() (int i, int j) 
	{ 
		return (i < j);
	}
} sortirovka;


unsigned long long minValue(vector <int> values)
{
	std::vector<int> result;
	std::set<int> s;
	int konkatenacia = 0;

	for (auto e : values)
	{
		if (s.find(e) == s.end())
		{
			s.insert(e);
			result.push_back(e);
		}
	}

	std::sort(result.begin(), result.end(), sortirovka);


	for (int i = 0; i <= (result.size() - 1); i++)
	{
		konkatenacia += pow(10, i) * result[result.size() - 1 - i];

	}

	return konkatenacia;
}

void SampleTest()
{
    assert(minValue({ 1,3,1 }), Equals(13));
	assert(minValue({ 4,7,5,7 }), Equals(457));
	assert(minValue({ 4,8,1,4 }), Equals(148));
	assert(minValue({ 5,7,9,5,7 }), Equals(579));
	assert(minValue({ 6,7,8,7,6,6 }), Equals(678));
	cout << "All test is cool!" << endl;
}