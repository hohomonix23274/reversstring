// TwoToOne.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

void SampleTest();

int main()
{
	SampleTest();
}

class TwoToOne
{
public:
	static string longest(const string &s1, const string &s2)
	{
		string result_sum = s1 + s2;
		sort(result_sum.begin(), result_sum.end());
		auto last = unique(result_sum.begin(), result_sum.end());
		result_sum.erase(last, result_sum.end());
		return result_sum;
	}
};

void testequal(string ans, string sol) {
	assert(ans == (sol));
}
void dotest(string a1, string a2, string expected)
{
	testequal(TwoToOne::longest(a1, a2), expected);
}
void SampleTest(){
		dotest("aretheyhere", "yestheyarehere", "aehrsty");
		dotest("loopingisfunbutdangerous", "lessdangerousthancoding", "abcdefghilnoprstu");
		cout << "Test is good!" << endl;
	}