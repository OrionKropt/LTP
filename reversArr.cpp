#include <iostream>

using namespace std;


void FillArray(int*, const int);
void PrintArray(int*, const int);
void ReversArray(int*, const int, int, int);
void ShiftArray(int*, const int, int);
int main()
{
	const int N = 10000;
	int arr[N];
	int k = 5, Shift = 2;
	/*cout << "Enter size of array ";
	cin >> k ;
	cout << "\nEnter shift ";
	cin >> Shift;*/
	FillArray(arr, k);
	PrintArray(arr, k);
	ShiftArray(arr, k, Shift);
	//ReversArray(arr, k, 0, k);
	PrintArray(arr, k);

	/*int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == i) cout << j;
			else cout << j << " ";
		}
		cout << endl;
	}*/
	return 0;
}

void FillArray(int* arr, const int N)
{
	for (int i = 0; i < N; i++) arr[i] = i;
}

void PrintArray(int* arr, const int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i];
	}
	cout << endl << endl;
}

void ReversArray(int* arr, const int N, int Begin, int End)
{
	if (Begin < End)
	{
		for (int i = Begin, j = End; i < j; i++, j--)
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	else cout << "\nWrong data\n";
}

void ShiftArray(int* arr, const int N, int Shift)
{
	int Begin = N - Shift;
	int End = N - 1;
	ReversArray(arr, N, Begin, End);
	End = Begin - 1;
	Begin = 0;
	ReversArray(arr, N, Begin, End);
	Begin = 0;
	End = N-1;
	ReversArray(arr, N, Begin, End);
	
}