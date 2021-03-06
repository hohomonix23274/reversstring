// Rectangle Rotation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include <iostream>
#include <cassert>

using namespace std;

long long rectangle_rotation(int a, int b);
void SampleTest();

int main()
{
	SampleTest();
}

long long rectangle_rotation(int a, int b)
{
	int m = a / sqrt(2), n = b / sqrt(2);
	int kv = 2 * m*n + m + n + 1;
	int prm = 2 * m*n + m + n;
	if (m % 2 == n % 2) { return kv; }
	else return prm;
}

void SampleTest() {
	assert(rectangle_rotation(6, 4), Equals(23));
	assert(rectangle_rotation(30, 2), Equals(65));
	assert(rectangle_rotation(8, 6), Equals(49));
	assert(rectangle_rotation(16, 20), Equals(333));
	cout << "SampelTest is okay!" << endl;
}