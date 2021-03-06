// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/tidy-number-special-numbers-series-number-9/train/cpp

#include "pch.h"
#include <iostream>
#include <string>
#include <cassert>

void SampleTest();

int main()
{
	SampleTest();
}

bool tidyNumber(int number)
{
	std::string str = std::to_string(number);
	for (int i = 0; i < str.size() - 1; i++)
	{
		if (str[i] > str[i + 1])
		{
			return false;
		}
	}
	return true;
}

void SampleTest()
{
	assert(tidyNumber(12) == (true));
	assert(tidyNumber(32) == (false));
	assert(tidyNumber(39) == (true));
	assert(tidyNumber(1024) == (false));
	assert(tidyNumber(12576) == (false));
	assert(tidyNumber(13579) == (true));
	std::cout << "All right, man!" << std::endl;
}