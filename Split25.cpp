//break up into parts, and, from those parts that add to it, try to create the biggest product

#include <iostream>

using namespace std;

int split(int num) {
	int sum;

	if (num <= 4)
		return num;
	else
	{
		sum = 3;
		num -= 3;
	}
	while (num > 4)
	{
		sum *= 3;
		num -= 3;
	}

	sum *= num;

	return sum;
}

int main()
{
	int x;
	cin >> x;
    cout << split(x);
}

