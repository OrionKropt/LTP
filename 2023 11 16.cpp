#include <iostream>
#include <string>

#include <fstream>
using namespace std;




int main()
{
	// ДЗ  1506-Столбцы чисел, Обратный прядок, 5 задание на массивы номер 4)

	// Обратный порядок

	//string s;
	//string temp = "";
	//string str = "";
	//while (!getline(cin, s))
	//{
		
	//	if (s.empty()) break;
	//	for (auto c : s)
	//	{
	//		if (!isalpha(c))
	//		{
	//			str += temp;
	//			str += c;
	//			temp = "";
	//		}
	//		else
	//		{
	//			temp = c + temp;
	//		}



	//	}

	//	
	//	//if (!(s[s.length()-1] == ' ') /*&& s[s.length() - 2] == ' '*/) break;
	//	
	//	str += "\n";
	//	
	//}
	////fstream file("1.txt");
	////

	////file << str;
	////file.close();

	//cout << str;

	// 4.	В массиве из целых чисел найти среднее арифметическое тех чисел, которые начинаются с    цифры 5.

	//string s;
	//double Sum=0;

	//const int N = 10;

	//int arr[N] = { 1, 21, 5, 65, 5, 33, 4, 7, 5, 10 };
	//for (int c : arr)
	//{
	//	s = to_string(c);
	//	if (s[0] == '5') {
	//		Sum += atoi(s.c_str());
	//	}

	//}

	//cout << Sum / 3 << endl;


	int N, K, count = 0;
	cin >> N >> K;
	int  Shift = ceil((double)N / K);
	
	int arr[100] = { 0 };
	


	for (int i = 0; i < N; i++)
	{
		
		cin >> arr[i];
		
	}
	






    // СТОЛБЦЫ ЧИСЕЛ 
 
	for (int i = 0; i < Shift; i++)
	{
		string res = "";
		for (int j = 0; j < K; j++)
		{
			if (i + j * Shift < N)
			{
				int temp = arr[i + j * Shift] / 10;
				int count = 1;

				while (temp)
				{
					temp /= 10;
					count++;
				}
				res += string(4 - count, ' ') + to_string(arr[i + j * Shift]);
			}
			else break;
		}
		cout << res << endl;
	}




	return 0;
}



// ДЗ 1881 1868