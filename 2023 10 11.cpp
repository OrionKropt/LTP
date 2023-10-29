#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;






void Task_1044()
{
	

	int n, j = 1, res = 0;

	cin >> n;

	for (int i = 0; i < n; ++i)
		j *= 10;

	for (int i = 0; i < j; ++i) {
		int tmp = i, N = 0, suml = 0, sumr = 0;
		while (i) {
			if (N < n / 2)
				sumr += i % 10;
			else
				suml += i % 10;
			N++;
			i /= 10;
		}
		i = tmp;
		if (suml == sumr)
			res++;
	}
	cout << res << endl;


	//int n, fig=0;
	//
	//cin >> n;
	//int N = 1, num = 0;
	//for (int i = 0; i < n; i++)
	//{
	//	N *= 10;
	//}
	////cout << N << endl;
	//while (fig < N)
	//{
	//	string str = "";
	//	string figs = to_string(fig);
	//	int SumR = 0, SumL = 0;
	//	for (int i = 0; i < n - figs.length(); i++)
	//	{
	//		str += "0";
	//	}
	//	str += figs;
	//	//cout << str << endl;
	//	for (int i = 0, j = n - 1; i < j; i++, j--)
	//	{
	//		SumL += str[i];
	//		SumR += str[j];
	//	}
	//	if (SumL == SumR) num++;
	//	
	//	//cout << num << endl;
	//	fig++;
	//}
	//cout << num << endl;
	


}
// 1084, ^1044, ^Из файла 1 задание "Циклы" номер задания 4

void Loops_4()
{
	int k;
	cin >> k;
	for (int z = 0; z < k; z++)
	{
		int N1, N2;
		cin >> N1 >> N2;
		for (long i = N1; i <= N2; i++)
		{
			long Sum = 1;
			for (long j = 2; j * j < i; j++)
			{
				if (i % j == 0)
				{
					Sum += j;
					//cout << "j= " << j << "Sum = " << Sum;
					if (j != i / j) Sum += i / j;
					//cout << "j= " << j << " Sum = " << Sum << endl;
				}
			
			}
			if (Sum == i) cout << Sum << endl << endl;
			//else cout << "NO\n\n";
		}
	}
}
/*int main()
{
	setlocale(LC_ALL, "RU");
	


	
	//Task_1820();
	//Task_1893();
	//Task_1581();


	


	//Task_1044();
	Loops_4();

	return 0;
}*/