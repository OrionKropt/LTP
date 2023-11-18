#include <iostream>

using namespace std;

int SumArr(int* arr, int N)
{

	if (N == 1) return *(arr)+*(arr + N);
	*(arr + N - 1) = *(arr + N - 1) + *(arr + N);
	return SumArr(arr, N - 1);
}

int main()
{
	// intresting tasks
	// сумма эллементов массива рекурсией

	const int N = 10;
	int arr[N];
	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		arr[i] = i * 2;
		ans = ans + i * 2;
		cout << arr[i] << endl;
	}

	cout << "Ans = " << ans << endl;

	//cout << (sizeof(arr) / sizeof(int)) << endl;

	cout << "SunArr = " << SumArr(arr, N - 1) << endl;
	return 0;
}

