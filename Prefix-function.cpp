#include <iostream>

#include <string>


using namespace std;

int main()
{
	//// префикс функция

	string s, t;
	
	s = "abcabeabcabcabd";
	t = "abcabd";
	
	//cin >> s >> t;

	string ts = t + "&" + s;

	int n = s.length(), m = t.length(), N_ts = ts.length();

	int* pi = new int[m];


	// Создаем префикс функцию для подстроки
	pi[0] = 0;
	int k = 0;
	for (int i = 1; i < m + 1; i++)
	{
		while ((k > 0) && (t[k] != t[i])) k = pi[k - 1]; 
		if (t[k] == t[i]) k++;
		pi[i] = k;
	}


	// вывод префикс функции
	for (int i = 0; i < m; i++)
	{
		cout << t[i] << " = " << pi[i] << endl;
	}

	// алгоритм поиска используя префикс функцию
	int j = 0;
	for (int i = m + 1; i < N_ts; i++)
	{
		while ((j > 0) && (ts[j] != ts[i])) j = pi[j - 1];
		if (ts[j] == ts[i]) j++;
		if (j == m) cout << i - 2 * m + 1 << endl;
	}
	return 0;
	}