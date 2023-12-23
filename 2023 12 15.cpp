//#include <iostream>
//
//using namespace std;
//
//
//////int main()
//////{
//////	setlocale(LC_ALL, "RUS");
//////
//////	/*int a;
//////	cin >> a;
//////	string Bin = "";
//////	if (a > 0)
//////		while (a || a == -1)
//////		{
//////			if (a & 1) Bin = '1' + Bin;
//////			else Bin = '0' + Bin;
//////			a = a >> 1;
//////		}
//////	else if (a < 0)
//////	{
//////		Bin = "1";
//////		while (a != -1)
//////		{
//////			if (a & 1) Bin = '1' + Bin;
//////			else Bin = '0' + Bin;
//////			a = a >> 1;
//////		}
//////	}
//////	else cout << "0";
//////
//////
//////	cout << Bin << endl;
//////	
//////	const int n = 3;
//////	int arr[n] = { 1, 2, 3 };
//////	int size = 1;
//////	for (int i = 0; i < n; i++)  size = size * size;
//////	int* B = new int [size];*/
//////
//////
//////
//////	/*int n, Sum=0, Sum1=0, MinSum = INT_MAX;
//////	cin >> n;
//////	int* arr = new int[n];
//////	for (int i = 0; i < n; i++)
//////	{
//////		cin >> arr[i];
//////	}
//////	
//////	for (int i = 0; i < 1 << (n - 1); i++)
//////	{
//////		int ch = i;
//////		int j = 0;
//////		int w = 0;
//////		while (ch)
//////		{
//////			if (ch & 1) w += arr[j];
//////			j++;
//////			ch = ch >> 1;
//////		}
//////		int razn = abs(w + w - Sum);
//////		if (MinSum > razn) MinSum = razn;
//////	}
//////	
//////	cout << MinSum;*/
//////
//////
//////
//////	return 0;
//////}
////
////
////// 2099
////
////struct Point
////{
////	double x;
////	double y;
////	double z;
////	Point(double x, double y, double z)
////	{
////		this->x = x;
////		this->y = y;
////		this->z = z;
////	}
////	Point() { x = 0; y = 0; z = 0; }
////	Point operator -(const Point& other)
////	{
////		return Point(x - other.x, y - other.y, z - other.z);
////	}
////
////	double operator *(const Point& a)
////	{
////		return x * a.x + y * a.y + z * a.z;
////	}
////
////	Point Mult(const Point& a)
////	{
////		return Point((y * a.z) - (z * a.y), (a.x * z) - (x * a.z), (x * a.y) - (y - a.x));
////	}
////
////	// Plain() -- плоскость
////
////};
////
////
//
////
////
////



//
//void Print(int**& arr, const int& N, const int& M)
//{
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < M; j++)
//			cout << arr[i][j] << " ";
//		cout << endl;
//	}
//	cout << endl;
//}
#include<iostream>
using namespace std;
bool Is_Desc(int* arr)
{
	int asc = 0, desc = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < arr[i + 1]) asc++;
		else desc++;
	}
	return desc > asc;
}

int main()
{

	


	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	/*int arr[][10] = { {4, 1, 2, 3, 5, 9, 7}, { 1, 5, 10, 4, 11, 14, 12, 16 },
		{ 16, 14, 15, 13, 11, 10, 7, 9, 8, 6 }, { 20, 1, 2, 3, 5, 21, 19 }, { 1, 2, 10, 9, 8, 7, 6, 5 } };*/
	//int arr[] = { 1, 5, 10, 4, 11, 14, 12, 16 };
	//int arr2[] = { 16, 14, 15, 13, 11, 10, 7, 9, 8, 6 };
	//int arr3[] = { 20, 1, 2, 3, 5, 21, 19 };
	//int arr4[] = { 1, 2, 10, 9, 8, 7, 6, 5 };
	//for (int j = 0; j < 4; j++)
	//{
		
		int Cpid = 0;
		if (Is_Desc(arr))
		{
			int prev = 0;
			for (int i = 1; i <n; i++)
			{
				if (arr[prev] < arr[i])
				{
					cout << "YES\n" << i << " "; Cpid++;
				}
				else prev = i;
			}

		}
		else
		{
			int prev = 0;
			for (int i = 1; i < n; i++)
			{
				if (arr[prev] > arr[i])
				{
					cout << "YES\n" << i << " ";
					Cpid++;
				}
				else prev = i;
			}
		}

		if (Cpid == 1) cout << 0;
		if (Cpid < 1) cout << "Nothing to do here";
	//}
	return 0;
}
////
////
////
////
////
////
////
////// Дз 1. Написать сортировку слиянием Данилка
////// Дз 2. Сортировка Хоара (Быстрая сортировка) Эрирка
////// Дз 3. Написать структуру Пашка
////// Дз 4. Напсиать как передать статический многомерный массив в функцию 
////// Дз 5. Есть масси и N эллемент N <= 100 000, эллементы массивыа это рост школьник , известно что все они стоят по возрастанию 
////// или убыванию, надо найти двух опоздваших, которые встали как кпапаол
////// Дз 6.Что то там
////
////
////
