
using namespace std;
#include <iostream>

int main()
{
	int arr[5][5];
	cout << "enter 25 array elements" << endl;

	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}

	int sum = 0;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (i == j) {
				sum += arr[i][j];
			}
		}
	}
	cout << "The sum of the diagonal =  " << sum << endl;
}

