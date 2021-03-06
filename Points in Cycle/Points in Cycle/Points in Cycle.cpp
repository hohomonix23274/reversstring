// Points in Cycle.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Ссылка на задачу: https://www.codewars.com/kata/5b55c49d4a317adff500015f
// Подробное описаие по ссылке выше!


#include "pch.h"
#include <iostream>
#include <cassert>

using namespace std;

static int pointsNumber(int radius)
{

	int  x, y, s = 0;

	for (x = -radius - 1; x <= radius; x++)
		for (y = -radius - 1; y <= radius; y++)
			if ((x*x + y * y) <= radius * radius)
				s++;

	return s;
}

void SampleTest() {

	assert(pointsNumber(1) == 5);
	assert(pointsNumber(2) == 13);
	assert(pointsNumber(3) == 29);
	assert(pointsNumber(5) == 81);
	assert(pointsNumber(1000) == 3141549);

	cout << "Sample test is okay!" << endl;
}


int main()
{
	SampleTest();
}

