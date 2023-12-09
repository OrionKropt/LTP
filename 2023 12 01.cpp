#include <iostream>

using namespace std;



int main()
{
	// 1026
	/*int N;
	cin >> N;
	int arr[5001] = { 0 };
	int A[100000];
	int temp;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		arr[temp]++;
		
	}

	char s;
	int index=0;

	

	for (int i = 0; i < 5001; i++)
	{
		for (int j = 0;j < arr[i]; j++)
		{
			A[index++] = i;
			
			
		}
	}
	cin >> s >> s >> s;
	int size;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> temp;
		cout << A[temp - 1] << endl;
	}*/

	// 1193
	int N; 
	cin >> N;
	int arr[41][41];
	int Time[41];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> arr[i][j];
			
		}

		cin >> Time[i];

	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
		
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			if (arr[j][0] < arr[j + 1][0])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;

	}



	

	return 0;
}
