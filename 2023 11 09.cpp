#include <iostream>
#include <string>
#include <fstream>
using namespace std;


// ^1545

int main()
{
	/*1545*/
	int n;
	cin >> n;
	string* dic = new string[n];
	char letter;

	for (int i = 0; i < n; i++)	cin >> dic[i];

	cin >> letter;


	for (int i = 0; i < n; i++)
	{
		if (dic[i][0] == letter) cout << dic[i] << endl;
	}

	/*4.	По  каждому из некоторого количества натуральных чисел N
	заменой одной из его цифр на произвольную цифру, если это возможно,
	найти число, максимально близкое к некоторой степени двойки. */


	setlocale(LC_ALL, "RUS");
	int n;
	cin >> n;
	int N;
	for (int i = 0; i < n; i++)
	{
		cin >> N;
		int st_2 = 1, prew = 1, st = 0, dis = 0;
		while (prew < N)
		{
			prew = st_2;
			st_2 *= 2;
		}
		int dis_st_2 = max(N, st_2) - min(N, st_2);
		int dis_prew = max(N, prew) - min(N, prew);

		if (dis_st_2 < dis_prew)
		{
			st = st_2;
			dis = dis_st_2;
		}
		else
		{
			st = prew;
			dis = dis_prew;
		}

		//cout << N << endl;
		cout << "Степень двойки " << st << " ";
		int temp = N, right = N;
		int st_10 = 1;
		while (temp > 0)
		{
			for (int i = 0; i < 9; i++)
			{
				int mayright = N - ((temp % 10) * st_10) + i * st_10;
				if (abs(st - mayright) < dis)
				{
					dis = abs(st - mayright);
					right = mayright;
				}
			}
			st_10 *= 10;
			temp /= 10;
		}
		cout << "Новое число " << right << endl;
	}



	/*4.	В строке, состоящей из слов и знаков препинания
	(пробел . : , ! ?-;), найти все слова-палиндромы.*/

	setlocale(LC_ALL, "RUS");
	// строка на вход
	//aha civic, dad ? deed!deleveled ? hello it is me.deified
	string str;
	getline(cin, str);

	bool Flag = false, Fword = true;
	int n = str.length();
	int left = 0, right = 0;
	for (int i = 0; i < n; i++)
	{
		if (!Fword && isalpha(str[i]))
		{
			left = i;
			Fword = true;
		}
		if (!isalpha(str[i]) || i == n - 1)
		{
			right = i - !(i == n - 1);
			Fword = false;
		}
		else continue;
		Flag = false;
		for (int j = left, k = right; j < k; j++, k--)
		{
			if (str[j] != str[k])
			{
				Flag = true;
				break;
			}
		}
		if (!Flag)
		{
			for (int j = left; j <= right; j++) cout << str[j];
			cout << endl;
			Flag = true;
		}
	}



}

