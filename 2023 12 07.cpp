
//
//
// ^5 задча свой вариант
// ДЗ ^1102 , ^1404, ^2033
//  Войско три девятого царства 1656
//





#include <iostream>
#include <cstring>
using namespace std;

/////////                                          2033

int main()
{
	int costs[6];
	char friends[6][21];
	char devices[6][21];
	char ans[21];
	unsigned int index[6];
	unsigned int counters[6] { 1, 1, 1, 1, 1, 1 };
	for (int i = 0; i < 6; i++)
	{
		cin >> friends[i] >> devices[i] >> costs[i];
		index[i] = i;
	}


	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6 - 1 - i; j++)
		{
			if (costs[index[j]] > costs[index[j + 1]]) swap(index[j], index[j + 1]);
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 6; j++)
		{
			//cout << devices[i] << " " << devices[j] << endl;
			if (strcmp(devices[index[i]], devices[index[j]]) == 0) counters[index[i]]++;
		}
	}
	int most_common = 0;
	unsigned int index_most_common = 0;
	for (int i = 0; i < 6; i++)
	{
		//cout << counters[i] << endl;
		if (most_common < counters[index[i]])
		{
			most_common = counters[index[i]];
			index_most_common = index[i];
		}
	}
	/*for (int i = 0; i < 6; i++)
	{
		cout << friends[index[i]] << " " << devices[index[i]] << " " << costs[index[i]] << endl;

	}*/
	//cout << most_common;
	
	int Min_cost = costs[index_most_common];
	strcpy_s(ans, devices[index_most_common]);
	for (int i = 0; i < 6; i++)
	{
		//cout << counters[index[i]] << " " << devices[index[i]] << endl;
		if (counters[index[i]] == most_common)
		{
			
			if (Min_cost > costs[index[i]])
			{
				Min_cost = costs[index[i]];
				
				strcpy_s(ans, devices[index[i]]);
			}
		}
	}

	cout << ans;
	




	
	return 0;
}
/////////                                          2033





/////////                                          1102

// one - out output puton
	// puton in input one

//bool Cheack(string& str)
//{
//	int n = str.length();
//	string arr[] = { "eno", "tuo", "tuptuo", "notup", "ni", "tupni" };
//	string pars = "";
//	for (int i = 0; i < n ; i++)
//	{
//		pars += str[i];
//		for (int i = 0; i < 6; i++)
//		{
//			if (arr[i] == pars)
//			{
//				pars = "";
//				break;
//			}
//		}
//	}
//
//	if (pars.empty()) return 1;
//	else return 0;
//	
//}
//
//void Revers(string& str)
//{
//	int n = str.length();
//	for (int i = 0, j = n - 1; i < j; i++, j--)
//	{
//		swap(str[i], str[j]);
//	}
//}
/////////                                          1102



//int main()
//{




	// 1656 войско 3\9 царства




	//  Войско три девятого царства 1656
	//int N;
	//cin >> N;
	//int** arr = new int* [N];
	//for (int i = 0; i < N; i++)
	//{
	//	arr[i] = new int[N];
	//}

	//int* A = new int[N * N];

	//for (int i = 0; i < N * N; i++)
	//{
	//	cin >> A[i];
	//}

	//for (int i = 0; i < N * N; i++)
	//{
	//	for (int j = 0; j < N * N - i - 1; j++)
	//	{
	//		if (A[j] > A[j + 1]) swap(A[j], A[j + 1]);
	//	}
	//}

	///*cout << endl;
	//for (int i = 0; i < N * N; i++)
	//{
	//	cout << A[i] << endl;
	//}
	//cout << endl;*/

	//
	//int k = 0;
	//int P1x = 0, P1y = 0, P2x = N - 1, P2y = 0, P3x = N - 1, P3y = N - 1, P4x = 0, P4y = N - 1;
	//int i = 0;
	//while (k < N*N)
	//{	
	//	if (P1x < N - i-1)
	//	{
	//		arr[P1x++][P1y] = A[k];
	//		k = k + (k < N * N);
	//		arr[P2x][P2y++] = A[k];
	//		k = k + (k < N * N);
	//		arr[P3x--][P3y] = A[k];
	//		k = k + (k < N * N);
	//		arr[P4x][P4y--] = A[k];
	//		k = k + (k < N * N);
	//	}
	//	else
	//	{
	//		i++;
	//		P1x = i;
	//		P1y++;
	//		P2x--;
	//		P2y = i;
	//		P3x = N - i - 1;
	//		P3y--;
	//		P4x++;
	//		P4y = N - i - 1;
	//	}
	//	if (k == N*N - 1) arr[N/2][N/2] = A[k++];

	//}
	//
	//for (i = 0; i < N; i++)
	//{
	//	for (int j = 0; j < N; j++)
	//	{
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//  Войско три девятого царства 1656





	/////////                                          1102
	//int N;
	//cin >> N;
	//cin.get();
	//string* arr = new string[N];
	////string alph[] = { "out", "puton", "in", "one" };
	////string oldWord = "";
	//string pars="";
	//bool flag = false;
	//char a;
	//for (int i = 0; i < N; i++)
	//{
	//	while (true) 
	//	{
	//		a = getc(stdin);
	//		
	//		if (a == '\n') break;
	//		pars += a;
	//
	//	}

	//	Revers(pars);
	//	//cout << pars;
	//	if (Cheack(pars)) cout << "YES" << endl;
	//	else cout << "NO" << endl;
	//	pars = "";
	//	
	//	
	//}
	/////////                                          1102

	

    /////////                                          1404

	/*char a;
	int code=5;
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	bool flag = true;
	int temp;
	while ((a = getc(stdin)) != '\n')
	{
		for (int i = 0; i < 26; i++)
		{
			if (a == alph[i])
			{
				if (flag)
				{	
					temp = i;
					i -= code;
					if (i < 0) i += 26;
					cout << alph[i];
					code = temp;
					flag = !flag;
				}
				else
				{
					
					while (i < code)
					{
						i += 26;
					}
					temp = i;
					i = i - code;
					code = temp;
					cout << alph[i];
				}
			
				break;
			}
		}
	}*/

	

	/////////                                          1404
	//return 0;
//}




//// 08.12.2023

//void PrintArray(int* arr, const int& N)
//{
//	for (int i = 0; i < N; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}

//void BubleSortArray(int* arr, const int& N)
//{
//	//for (int i = 0; i < N; i++)
//	//{
//	//	for (int j = 0; j < N - i - 1; j++)
//	//	{
//	//		if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
//	//	}
//	//}
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				arr[j] = arr[j] + arr[j + 1];
//				arr[j + 1] = arr[j] - arr[j + 1];
//				arr[j] = arr[j] - arr[j + 1];
//			}
//		}
//	}
//
//
//}

//int main()
//{
	// Сложность алгоритмов на next паре

	// Дан массив целых чисел отрицательных(-) и положительных (+) расположить в порядке возратсния без доп памяти
	// 
	
//	int arr[] = { 1, 4, -10, 3, -19, 2, 4, -1, -4, -5, 7, 6, 5 };

//	PrintArray(arr, size(arr));

//	BubleSortArray(arr, size(arr));

//	PrintArray(arr, size(arr));
	// 
	// 2. Есть N точек плоскости нужно соединить эти точки ломаной линией, так чтобы она не пересекались 
	// ВВОД: N - количесвто точек
	//       x y - точки (x, y) , N раз
	// пример ВВОДА
	//        3
	//        1 2
	//        1 4
	//        5 1
	// ОТВЕТ: последовательность точек, такая что соеднив их в таком порядке получиась ломаная не пересекающая себя линия.

	//1207





//	return 0;
//}