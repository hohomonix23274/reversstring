// Simple Multiply.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/simple-multiplication/train/cpp

#include "pch.h"
#include <iostream>
#include <cassert>

void SampleTest();

int main()
{
	SampleTest();
}

int simpleMultiplication(int a)
{
	if (a % 2 == 0) return a * 8;
	else return a * 9;
}

void SampleTest()
{
	assert(simpleMultiplication(2), Equals(16));
	assert(simpleMultiplication(1), Equals(9));
	assert(simpleMultiplication(8), Equals(64));
	assert(simpleMultiplication(4), Equals(32));
	assert(simpleMultiplication(5), Equals(45));
	std::cout << "Test is passed!" << std::endl;
}
