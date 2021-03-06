// turtleracing.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задачу: https://www.codewars.com/kata/tortoise-racing/train/cpp
// Описание: Есть две черепашки, одна начала бежать со старта раньше, с учетом разных параметров, программа расчитывает за сколько другая черепашка, которая стартавала позже, догонить первую.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Tortoise
{
public:
	static vector<int> race(int v1, int v2, int g)
	{
		vector<int> times(3);
		if (v1 > v2)
		{
			times[0] = -1;
			times[1] = -1;
			times[2] = -1;
			return times;
		}
		double dis = g, persec;
		double speed;
		int hour = 0, min = 0, sec = 0;
		speed = v2 - v1;
		persec = speed / 3600;
		sec = dis / persec;
		hour = sec / 3600;
		min = (sec % 3600) / 60;
		sec = sec % 60;
		times[0] = hour;
		times[1] = min;
		times[2] = sec;

		return times;
	}
};

void testequal(vector<int> ans, vector<int> sol)
{
	assert((ans) == sol);
}
void dotest(int v1, int v2, int g, vector<int> expected)
{
	testequal(Tortoise::race(v1, v2, g), expected);
}

void SampleTest()
{
	{
		dotest(720, 850, 70, { 0, 32, 18 });
		dotest(820, 81, 550, { -1, -1, -1 });
		dotest(80, 91, 37, { 3, 21, 49 });
		cout << "Sample Test is okay!" << endl;
	}
};


int main()
{
	SampleTest();
}