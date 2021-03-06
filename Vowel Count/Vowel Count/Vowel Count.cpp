// Vowel Count.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/vowel-count/train/cpp

#include "pch.h"
#include <iostream>
#include <string>
#include <cassert>

int getCount(const std::string& Str);
void SampleTest();

int main()
{
	SampleTest();
}

void SampleTest()
{
	assert(getCount("abracadabra"), Equals(5));
	assert(getCount("test"), Equals(1));
	assert(getCount("hohomonix"), Equals(4));
	std::cout << "Good!" << std::endl;
}

int getCount(const std::string& Str)
{
	int num_vowels = 0;
	for (char x : Str)
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
		{
			num_vowels++;
		}
	return num_vowels;
}


