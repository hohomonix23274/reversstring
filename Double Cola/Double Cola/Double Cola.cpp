// Double Cola.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задачу: https://www.codewars.com/users/hohomonix232/completed_solutions

#include "pch.h"
#include <string>
#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

string who_is_next(vector<string> n, long long r);
void SampleTest();

int main()
{
	void SampleTest();
}

string who_is_next(vector<string> n, long long r) {
	while (r > n.size()) {
		r = (r - (n.size() - 1)) / 2;
	}
	return n[r - 1];
}

void SampleTest() {

	vector<string> names = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };

	assert(who_is_next(names, 1) == ("Sheldon"));
	assert(who_is_next(names, 52) == ("Penny"));
	assert(who_is_next(names, 10010) == ("Howard"));

	cout << "All sample test is good!" << endl;

}