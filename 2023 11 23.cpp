#include <iostream>
#include <string>


using namespace std;




int main()
{
	/*const int N = 17;
string arr[N][3];
int n;
cin >> n;



string a, b, c;
for (int i = 0; i < n; i++)
{
	cin >> a >> b >> c;
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	if (a > b) swap(a, b);
	arr[i][0] = a;
	arr[i][1] = b;
	arr[i][2] = c;
}

string B[N];
int num[N];
for (int i = 0; i < n; i++) cin >> num[i];
a = "a";
for (int i = 0; i < n; i++)
{
	int k = num[i]-1;
	if (a < arr[k][0])
	{
		B[i] = arr[k][0];
		a = B[i];
		continue;
	}
	else if (a < arr[k][1])
	{
		B[i] = arr[k][1];
		a = B[i];
		continue;
	}
	else if (a < arr[k][2])
	{
		B[i] = arr[k][2];
		a = B[i];
		continue;
	}
	cout << "IMPOSSIBLE";
	return 0;
}

for (int i = 0; i < n; i++)
{
	cout << B[i] << endl;
}*/


	string str;
	int i = 0;
	bool F = true;
	bool first = false;
	while (getline(cin, str))
	{

		int n = str.length();
		for (int i = 0; i < n; i++)
		{
			if (isalpha(str[i]))
			{
				if (!first)
				{
					first = true;
					//cout << str[i];
				}
				else
				{
					str[i] = tolower(str[i]);

				}
			}

			else if (str[i] == '.' || str[i] == '!' || str[i] == '?')
			{
				first = false;
			}


			cout << str[i];




		}
		cout << endl;
	}

}