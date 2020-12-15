
using namespace std;
#include <iostream>

int main()
{
	int fn = 0;
	int sn = 0;
	cout << "Enter number - ";
	cin >> fn;
	cout << "Enter number - ";
	cin >> sn;
	int result = fn * sn;
	if (((result / 100) > 0) && ((result / 100) < 10))
	{
		cout << "The number is three-digit";
	}
	else
	{
		cout << "The number is not three-digit";
	}
}
