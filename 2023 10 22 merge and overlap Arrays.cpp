#include <iostream>
#include <set>
using namespace std;

int& merge(int*, int*, const int, const int); // Слияние


set <int> Set(int*, int*,  const int, const int);
int& merge_for_overlap(int*, int*, const int, const int, int&);   // Пересечение
int& overlap(int*, int*, const int, const int, int&);

int main()
{
	const int A = 5, B = 3;
	int arr1[A] = { 1,4,5,8,10 };
	int arr2[B] = { 1,2,9 };

	// Слияние
	//int* target = &merge(arr1, arr2, A, B);



	//for (int i = 0; i < A+B; i++)
	//{
	//	cout << target[i] << " ";
	//}
	//cout << endl;

	//delete[] target;



	// Пересечение
	//set <int> MySet = Set(arr1, arr2, A, B);
	//for (int i : MySet) cout << i << " ";
	//cout << endl;

	int size_overlap = 1;
	int *target = &overlap(arr1, arr2, A, B, size_overlap);
	
	for (int i = 0; i < size_overlap; i++)
	{
		cout << target[i] << " ";
	}
	cout << endl;

	delete[] target;

	return 0;
}


int& merge(int* arr1, int* arr2, const int A, const int B)
{
	int* target = new int[A + B];
	int numA, numB, numC;
	bool FB = false, FA = false;
	numA = numB = numC = 0;
	while (numC < A + B)
	{
		if (arr1[numA] <= arr2[numB] || FB)
		{
			target[numC] = arr1[numA];
			if (numA < A - 1) numA++;
			else FA = true;
		}
		else if (arr1[numA] >= arr2[numB] || FA)
		{
			target[numC] = arr2[numB];
			if (numB < B - 1) numB++;
			else FB = true;
		}
		//cout << target[numC];
		numC++;
	}

	return *target;
	
}

set <int> Set(int* arr1, int* arr2, int A, int B)
{
	set <int> Set;
	for (int i = 0; i < max(A, B); i++)
	{
		if (i < A) Set.insert(arr1[i]);
		if (i < B) Set.insert(arr2[i]);
	}
	return Set;
}

int& merge_for_overlap(int* arr1, int* arr2, const int A, const int B, int& size)
{
	int* target = new int[A + B];
	int numA, numB, numC;
	bool FB = false, FA = false;
	numA = numB = numC = 0;
	while (numC < A + B)
	{
		if (arr1[numA] <= arr2[numB] || FB)
		{
			target[numC] = arr1[numA];
			if (numA < A - 1) numA++;
			else FA = true;
		}
		else if (arr1[numA] >= arr2[numB] || FA)
		{
			target[numC] = arr2[numB];
			if (numB < B - 1) numB++;
			else FB = true;
		}
		if (numC > 0)
		{
			if (target[numC] != target[numC - 1]) size++;
		}
		//cout << target[numC];
		numC++;
	}

	return *target;
}
int& overlap(int* arr1, int* arr2, const int A, const int B, int& size)
{
	int* arr = &merge_for_overlap(arr1, arr2, A, B, size);
	int* target = new int[size];
	int j = 0;
	target[j] = arr[0];
	j++;
	for (int i = 1; i < A + B; i++)
	{
		if (arr[i] != arr[i - 1])
		{
			target[j] = arr[i];
			j++;
		}

	}
	delete[] arr;

	return *target;
}

