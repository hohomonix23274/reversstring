// Sum of Digit.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/sum-of-digits

#include "pch.h"
#include <iostream>
#include <cassert>

void SampleTest();

int main()
{
	SampleTest();
}

int digital_root(int n)
{
	return (n - 1) % 9 + 1;
}

void SampleTest()
{
	assert(digital_root(16), Equals(7));
	assert(digital_root(195), Equals(6));
	assert(digital_root(992), Equals(2));
	assert(digital_root(167346), Equals(9));
	std::cout << "Test is cool!" << std::endl;
}
