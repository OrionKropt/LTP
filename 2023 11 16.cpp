#include <iostream>
#include <string>
#include <fstream>
using namespace std;


// ^1545


bool IsTr(int** arr, const int& N)
{
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i][j] != 0) return 0;
		}
	}
	return 1;
}

int** Matrix(ifstream& file, int& N)
{
	file >> N;
	int** arr = new int* [N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = new int[N];
		for (int j = 0; j < N; j++)
		{
			file >> arr[i][j];
		}
	}
	return arr;
}

void PrintM(ofstream& file, int** arr, const int& N)
{

	file << N << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			file << arr[i][j] << " ";
		}
		file << endl;
	}
	file.close();
}


int main()
{
	//2. в файле количество студентов и экзаменов
	//в файле по строчно идет фамилии студентов с оценками




	//int n;
	//string fileName = "input.txt";
	//ifstream file(fileName);

	//int** arr = Matrix(file, n);

	//ofstream output("output.txt");


	//if (IsTr(arr, n)) PrintM(output, arr, n);


	//file.close();

	ifstream input("input.txt");
	ofstream output("output.txt");

	int studeN, markN;
	bool F = true;
	input >> studeN >> markN;
	input.get();
	string str;

	for (int i = 0; i < studeN; i++)
	{
		F = true;
		getline(input, str);
		int lenth = str.length();
		cout << str << endl;
		for (int j = lenth - 1; j > lenth - 2 * markN; j--)
		{

			if (isdigit(str[j]))
			{
				//cout << str[j];
				if (!(str[j] >= '4'))
				{
					F = false;
					break;
				}
			}


		}
		if (F)
		{
			output << str << endl;
		}
	}




	input.close();
	output.close();


	// ДЗ  1506-Столбцы чисел, Обратный прядок, 5 задание на массивы номер 4)
	int N, K;



	return 0;
}
