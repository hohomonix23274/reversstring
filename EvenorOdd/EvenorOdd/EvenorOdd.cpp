// EvenorOdd.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ccылка на задание: https://www.codewars.com/kata/53da3dbb4a5168369a0000fe
// На входе получаем число, нужно определить является оно четным или не четным.
//

#include "pch.h"
#include <iostream>
#include <cassert>

std::string even_or_odd(int num)
{
	if (num % 2 == 0) { return "Even"; }
	else {
		return "Odd";
	}
}

void SampleTest() {
	assert(even_or_odd(2) == "Even");
	assert(even_or_odd(1) == "Odd");
	assert(even_or_odd(0) == "Even");
	assert(even_or_odd(7) == "Odd");
	std::cout << "SampleTest is ok!" << std::endl;
}

int main()
{
	SampleTest();
}

