#include <iostream>
#include "Test.h"
using namespace std;
using namespace Input;
using namespace Print;

mt19937 gen(time(0));
uniform_int_distribution<> uid(0, 9);

void sort(int n)
{
	int *a = new int[n];
}

int main()
{
	string st = input();
	print(st);

	system("pause");
	return 0;
}
