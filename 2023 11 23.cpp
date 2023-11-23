
// ÄÇ 1881 1868

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// 1881
	/*string str;
	int h, w, n;
	cin >> h >> w >> n;
	int Ch, Cw, Cl;
	Ch = 1;
	Cw = 0;
	Cl = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		int l = str.length();
		for (int j = 0; j < l; j++)
		{
			if (Cw + 1 <= w) Cw++;
			else 
			{
				Cw = l;
				if (Ch + 1 <= h)
				{
					Ch++;
				}
				else {
					Cl++;
					Ch = 1;
				}
				break;
			}
		}
		Cw++;
	}

	cout << Cl;*/



	//1868
	string arr[12][2];
	for (int i = 0; i < 12; i++)
	{
		getline(cin, arr[i][0]);
		if (i <= 3) arr[i][1] = "gold";
		else if (i > 3 && i <= 7) arr[i][1] = "silver";
		else arr[i][1] = "bronze";
	}

	int n;
	cin >> n;
	int RightGues[101] = { 0 };
	string Member[101][12][2];
	for (int i = 0; i < n; i++)
	{
		int gues;
		cin >> gues;
		for (int j = 0; j < gues; j++)
		{
			char colon;
			cin >> Member[i][j][0] >> colon >> Member[i][j][1];



			for (int k = 0; k < 12; k++)
			{
				//cout << arr[k][0] << " = " << Member[i][j][0] << endl;
				if (arr[k][0] == Member[i][j][0])
				{
					//cout << arr[k][1] << " = " << Member[i][j][1] << endl;
					if (arr[k][1] == Member[i][j][1]) RightGues[i]++;
				}
			}
		}

	}
	int Max = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		
		if (RightGues[i] > Max)
		{
			Max = RightGues[i];
			ans = 5;
		}
		else if (RightGues[i] == Max)
		{
			ans += 5;
		}
	}
	cout << ans;


	/*for (int i = 0; i < 12; i++)
	{
		cout << arr[i][0] << " " << arr[i][1] << endl;
	}*/

	return 0;
}
