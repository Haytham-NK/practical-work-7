
using namespace std;
#include <iostream>

int main()
{
	int quantity = 0;
	int arr[5][2];
	cout << "enter 10 array elements" << endl;


	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (arr[i][j] % 2 != 0)
			{
				quantity += 1;
			}
		}
	}
	cout << "Number of odd numbers = " << quantity;
}
