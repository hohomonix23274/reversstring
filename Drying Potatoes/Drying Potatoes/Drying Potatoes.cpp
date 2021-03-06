// Drying Potatoes.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://www.codewars.com/kata/drying-potatoes/train/cpp

#include "pch.h"
#include <iostream>
#include <cassert>

void SampleTest();
int potatoes(int p0, int w0, int p1);

int main() {

	SampleTest();
}

static void dotest(int p0, int w0, int p1, int expected) {
	int ans = potatoes(p0, w0, p1);
	assert(ans == (expected));
}

void SampleTest() {
	dotest(82, 127, 80, 114);
	dotest(93, 129, 91, 100);
	std::cout << "Test is ok!" << std::endl;
}

int potatoes(int p0, int w0, int p1){
	double wp0, wp1, w1;
	wp0 = 100 - p0;
	wp1 = 100 - p1;
	w1 = ((w0 / wp1)*wp0);
	return w1;
}
