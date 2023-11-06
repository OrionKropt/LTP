#include <iostream>

using namespace std;

int main()
{
//	ДЗ  Timus Волшебник, Предохранители, 1215


	int n;
	cin >> n;
	int** arr = new int*[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}


	for (int i = 0; i < n; i++)
	{
		int count = 1;
		for (int j = 0; j <= i; j++)
		{
			cout << arr[i - j][j];
		}
		cout << endl;
	}


	return 0;
}