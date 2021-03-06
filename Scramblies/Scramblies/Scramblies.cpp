// Scramblies.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задачу: https://www.codewars.com/kata/scramblies/train/cpp
//

#include "pch.h"
#include <iostream>
#include <cassert>
#include <string>
#include <algorithm>

using namespace std;

bool scramble(string str1, string str2) {
	sort(begin(str1), end(str1));
	sort(begin(str2), end(str2));
	return includes(begin(str1), end(str1), begin(str2), end(str2));
}

void SampleTest() {
	assert(scramble("rkqodlw", "world") == (true));
	assert(scramble("cedewaraaossoqqyt", "codewars") == (true));
	assert(scramble("katas", "steak") == (false));
	assert(scramble("scriptjavx", "javascript") == (false));
	assert(scramble("scriptingjava", "javascript") == (true));
	assert(scramble("scriptsjava", "javascript") == (true));
	assert(scramble("javscripts", "javascript") == (false));
	assert(scramble("aabbcamaomsccdd", "commas") == (true));
	assert(scramble("commas", "commas") == (true));
	assert(scramble("sammoc", "commas") == (true));
	cout << "SampleTest is ok!" << endl;
}

int main()
{
	SampleTest();
}
