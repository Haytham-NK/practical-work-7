
using namespace std;
#include <iostream>

int main()
{
	int sa = 0;
	int quantity = 0;
	int arr[5][2];
	cout << "enter 10 array elements" << endl;

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] > 0)
			{
				sa += arr[i][j];
				quantity += 1;
			}
		}
	}
	sa = sa / quantity;
	cout << "arephmitic mean of positive numbers = " << sa;
}