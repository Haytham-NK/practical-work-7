
using namespace std;
#include <iostream>

int main()
{
	int arr[5][2];
	int number = 0;
	cout << "enter 10 array elements" << endl;


	for (int i = 0; i < 5; i++)
	{

		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "Enter number - ";
	cin >> number;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (arr[i][j] < number)
			{
				arr[i][j] = number;
			}
			cout << arr[i][j] << " ";
		}
	}
}