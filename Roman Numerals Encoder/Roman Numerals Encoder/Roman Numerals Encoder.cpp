// Roman Numerals Encoder.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/51b62bf6a9c58071c600001b
//


#include "pch.h"
#include <iostream>
#include <map>
#include <cassert>

std::string solution(int num);
void SampleTest();

int main()
{
	SampleTest();
}


std::map<int, std::string, std::greater<int>> romans = {
  {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"}, {90, "XC"}, {100, "C"},
  {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"} };

std::string solution(int num) {
	std::string result;
	while (num > 0)
	{
		for (auto const& newmap : romans)
		{
			if (num >= newmap.first)
			{
				num -= newmap.first;
				result += newmap.second;
				break;
			}
		}
	}
	return result;
}

void SampleTest() {
	assert(solution(182) == ("CLXXXII"));
	assert(solution(1990) == ("MCMXC"));
	assert(solution(1875) == ("MDCCCLXXV"));
	std::cout << "All is ok!" << std::endl;
}