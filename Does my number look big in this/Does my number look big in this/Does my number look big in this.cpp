﻿// Does my number look big in this.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/5287e858c6b5a9678200083c

#include "pch.h"
#include <iostream>
#include <cmath>
#include <cassert>

void SampleTest();
bool narcissistic(int n);

int main()
{
	SampleTest();
}

void SampleTest()
{
	assert(narcissistic(7), Equals(true));
	assert(narcissistic(371), Equals(true));
	assert(narcissistic(122), Equals(false));
	assert(narcissistic(4887), Equals(false));
	std::cout << "Test is good" << std::endl;
}

bool narcissistic(int n)
{
	int sum = 0;
	std::string str = std::to_string(n);
	for (int i = 0; i < str.size(); i++)
	{
		sum += std::pow(str[i] - '0', str.size());

	}
	return sum == n;
}
