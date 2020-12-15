
using namespace std;
#include <iostream>

int main()
{
	int max = 0;
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
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
	}
	cout << "Maximum array number = " << max << endl;
}
