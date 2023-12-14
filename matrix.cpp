#include <iostream>
#include <fstream>
using namespace std;



struct Matrix
{
	int** matrix;
	int Max;
	Matrix() { Max = 0; matrix = nullptr; };
};

void PrintOneMatrix(Matrix*, const int&, const int&, const int&);

Matrix* Read(ifstream&, int& , int&);

bool IsSymmetricMatrix(Matrix*, const int&, const int&, const int&);

void SortMatrix(Matrix*, const int&, const int&);


int main()
{
	//  Дан размер массива и разме матрицы.Пишем функцию чтение из файла, написать булевскую функция, которая определяет особеннсти матрицы, отсориорвать подходящие матрицы по наибольшему
	//  по модулю эллементу
	Matrix* arr;
	ifstream input("matrixinput.txt");
	int n, m;
	input >> n >> m;


	arr = Read(input, n, m);

	//PrintOneMatrix(arr, n, m, 1);
	int* indexs = new int[n];
	int count = 0;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (IsSymmetricMatrix(arr, n, m, i))
		{
			indexs[k++] = i;
			count++;
		}
	}

	Matrix* ans = new Matrix[count];
	for (int i = 0; i < count; i++)
	{
		ans[i] = arr[indexs[i]];
		//PrintOneMatrix(ans, count, m, i);
	}
	
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < n; j++)
	//		delete[] arr[i].matrix[j];
	//	delete[] arr[i].matrix;
	//}

	delete[] arr;

	//cout << ans[0].matrix[0][1];
	SortMatrix(ans, count, m);

	for (int i = 0; i < count; i++)
	{
		PrintOneMatrix(ans, n, m, i);
	}


}


Matrix* Read(ifstream& input, int& n, int& m)
{
	Matrix* arr = new Matrix[n];
	for (int i = 0; i < n; i++)
		arr[i].matrix = new int* [m];
	

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i].matrix[j] = new int[m];
		
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			for (int k = 0; k < m; k++)
				input >> arr[i].matrix[j][k];

	input.close();

	return arr;
}


void PrintOneMatrix(Matrix* arr, const int& n, const int& m, const int& index)
{
	if (index < n)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < m; j++)
				cout << arr[index].matrix[i][j] << " ";

			cout << endl;
		}
		cout << endl;
	}
		
	else cout << "Error index more than array size\n";
}

bool IsSymmetricMatrix(Matrix* arr, const int& n, const int& m, const int& index)
{
	if (index < n)
	{
		int x1 = 0, y1 = 1, x2 = 1, y2 = 0;
		int i = 1, j = 0;
		while (j < m - 1)
		{
			while (i < m - j)
			{
				if (arr[index].matrix[i][j] != arr[index].matrix[j][i]) return false;
				else i++;
			}
			j++;
			i = j + 1;
		}
		return true;
	}
	else
	{
		cout << "Error index more than array size\n";
		return false;
	}
}

void SortMatrix(Matrix* arr, const int& n, const int& m)
{

	for (int i = 0; i < n; i++)
	{
		int Max = 0;
		for (int j = 0; j < m; j++)
			for (int k = 0; k < m; k++)
				if (abs(arr[i].matrix[j][k]) > Max) Max = abs(arr[i].matrix[j][k]);
		arr[i].Max = Max;
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - 1 - i; j++)
			if (arr[j].Max > arr[j + 1].Max) swap(arr[j], arr[j + 1]);
		
	



}