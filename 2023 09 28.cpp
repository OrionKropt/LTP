#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;
// дз ^1197, 1550, ^2010, ^2035

//void Task_1197()
//{
//	int N;
//	string str;
//	int ans;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> str;
//		int y = str[0] - 'a' + 1;
//		int x = str[1] - '0';
//		if (x > 4) x = 9 - x;
//		if (y > 4) y = 9 - y;
//
//		if (x == 1 && y == 1) ans = 2;
//		else if (x + y == 3) ans = 3;
//		else if ((y > 2 && y < 5 && x == 1) || (x > 2 && x < 5 && y == 1) || (x == 2 && y == 2)) ans = 4;
//		else if (x > 2 && x < 5 && y >2 && y < 5) ans = 8;
//		else ans = 6;
//		cout << ans << endl;
//	}
//}
//
//void Task_2010()
//{
////King: 8
////Knight : 6
////Bishop : 9
////Rook : 14
////Queen : 23
//	int n, x, y;
//	cin >> n;
//	cin >> x >> y;
//
//	// king
//	int king = 0;
//	if (x + 1 <= n)
//	{
//		king++;
//		if (y + 1 <= n) king++;
//		if (y - 1 >= 1) king++;
//	}
//	if (x - 1 > 0)
//	{
//		king++;
//		if (y + 1 <= n) king++;
//		if (y - 1 >= 1) king++;
//	}
//	if (y - 1 >= 1) king++;
//	if (y + 1 <= n) king++;
//	cout << "King " << king << endl;
//
//	//Knight
//	int Knight = 0;
//
//	if (x - 2 > 0)
//	{
//		if (y - 1 > 0) Knight++;
//		if (y + 1 <= n) Knight++;
//	}
//	if (x + 2 <= n)
//	{
//		if (y - 1 > 0) Knight++;
//		if (y + 1 <= n) Knight++;
//	}
//
//	if (y + 2 <= n)
//	{
//		if (x - 1 > 0) Knight++;
//		if (x + 1 <= n) Knight++;
//	}
//
//	if (y - 2 > 0)
//	{
//		if (x - 1 > 0) Knight++;
//		if (x + 1 <= n) Knight++;
//	}
//	cout << "Knight " << Knight << endl;
//
//	// Bishop
//
//	int Bishop=0;
//	Bishop += min((n - x), (n - y));
//	Bishop += min((n - x), (y - 1));
//	Bishop += min((x - 1), (y - 1));
//	Bishop += min((x - 1), (n - y));
//	cout << "Bishop " << Bishop << endl;
//
//	// Rook
//	int Rook = 0;
//	Rook += (n - x)+(x-1)+(n - y) + (y - 1);
//	cout << "Rook " << Rook << endl;
//
//
//	// Queen
//	int Queen = 0;
//	Queen += min((n - x), (n - y));
//	Queen += min((n - x), (y - 1));
//	Queen += min((x - 1), (y - 1));
//	Queen += min((x - 1), (n - y));
//	
//	
//	Queen += (n - x) + (x - 1) + (n - y) + (y - 1);
//	cout << "Bishop " << Queen;
//}
//
//void Task_2035()
//{
//	bool F = false;
//	long long X, Y, C;
//	cin >> X >> Y >> C;
//
//	if (X < Y)
//	{
//		F = !F;
//		swap(X, Y);
//	}
//	if (X + Y >= C)
//	{
//		if (X <= C)
//		{
//			if (C - X <= Y)
//			{
//				if (F)
//				{
//					cout << C-X << " " << X;
//				} else cout << X << " " << C - X;
//			}
//			else if (C - Y <= X)
//			{
//				if (F)
//				{
//					cout << Y << " " << C - Y;
//				} else cout << C - Y << " " << Y;
//				
//			}
//		}
//		else
//		{
//			if (F)
//			{
//				cout << 0 << " " << C;
//			}
//			else cout << C << " " << 0;
//			
//		}
//	}
//	else cout << "Impossible";
//
//
//
//	
//}
//
//void Task_1550()
//{
//	double H, W, X, Y, R, V;
//	cin >> H >> W;
//	cin >> X >> Y;
//	cin >> R;
//	V = W * W * H / 3;
//
//
//
//
//
//	cout << fixed << setprecision(4) << V;
//}
//
//void task_1585()
//{
//	int n, k_e = 0, k_m = 0, k_l = 0;
//	string str;
//	cin >> n;
//for (int i = 0; i <= n; i++)
//{
//	getline(cin, str);
//
//	if (str == "Emperor penguin") k_e++;
//	else if (str == "little penguin") k_l++;
//	else if (str[0] == 'm') k_m++;
//}
//
//	if (k_e > k_m && k_e > k_l) cout << "emperor penguin";
//	else if (k_m > k_e && k_m > k_l) cout << "macaroni penguin";
//	else cout << "little penguin";
//
//
//}




// ДЗ 1820 1893 1581 (Без массивов)

//void Task_1820()
//{
//	int n, k, ans = 0;
//	cin >> n >> k;
//	ans = n * 2 / k;
//	if (n < k) ans = 2;
//	else
//	{
//		if (((n * 2) % k) != 0)
//		{
//			ans++;
//			if (((n * 2) % k) > 0) ans++;
//
//		}
//		
//	}
//	cout << ans;
//}

void Task_1893()
{
	string str;
	int num, l;
	cin >> str;
	if (str.length() == 2)
	{
		 num = str[0]- '0';
		 l = str[1] - 'A' + 1; 
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
int main()
{
	//Task_2010();
	//Task_2035();
	//Task_1550();
//	Task_1820();
	Task_1893();
	
	return 0;
}