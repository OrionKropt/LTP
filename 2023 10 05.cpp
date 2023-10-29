#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;
// ДЗ ^1820 ^1893 ^1581 (Без массивов)

void Task_1820()
{
	int n, k;
	double ans;
	cin >> n >> k;
	if (n <= k) ans = 2;
	else
	{
		
		ans = 2 * n;
		ans = ceil(ans / k);
		
	}
	cout << ans;
}

void Task_1893()
{
	string str;
	int num, l;
	cin >> str;
	if (str.length() == 2)
	{
		num = str[0] - '0';
		l = str[1];
	}
	else
	{
		num = (str[0] - '0') * 10;
		num += str[1] - '0';
		l = str[2];
	}

	if (num == 1 || num == 2)
	{
		if (l == 'A' || l == 'D')
		{
			cout << "window\n";
		}
		else cout << "aisle\n";

	}
	else if (num >= 3 && num <= 20)
	{
		if (l == 'A' || l == 'F') cout << "window\n";
		else cout << "aisle\n";
	}
	else if (num >= 21 && num <= 65)
	{
		if (l == 'A' || l == 'K') cout << "window\n";
		else if (l == 'C' || l == 'D' || l == 'G' || l == 'H') cout << "aisle\n";
		else cout << "neither\n";
	}
}

void Task_1581()
{
	int N;
	int first_fig, second_fig, num = 1;
	cin >> N;
	cin >> first_fig;
	for (int i = 0; i < N-1; i++)
	{
		cin >> second_fig;
		if (first_fig == second_fig) num++;
		else
		{
			cout << num << " " << first_fig << " ";
			num = 1;
		}
		first_fig = second_fig;
	}
	cout << num << " " << first_fig << " ";
}
int main()
{
	//Task_2010();
	//Task_2035();
	//Task_1550();
	//Task_1820();
	//Task_1893();
	Task_1581();

	return 0;
}