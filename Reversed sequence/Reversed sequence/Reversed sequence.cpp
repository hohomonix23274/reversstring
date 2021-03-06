// Reversed sequence.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/5a00e05cc374cb34d100000d

#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

void SampleTest();
vector<int> reverseSeq(int n);

int main()
{
	SampleTest();
}

vector<int> reverseSeq(int n)
{

	vector<int> result;
	while (n)
		result.push_back(n--);

	return (result);
}
void SampleTest()
{
	assert(reverseSeq(1) == (std::vector<int>{1}));
	assert(reverseSeq(2) == (std::vector<int>{2, 1}));
	assert(reverseSeq(5) == (std::vector<int>{5, 4, 3, 2, 1}));
	assert(reverseSeq(10) == (std::vector<int>{10, 9, 8, 7, 6, 5, 4, 3, 2, 1}));
	cout << "All test is cool!" << endl;
}