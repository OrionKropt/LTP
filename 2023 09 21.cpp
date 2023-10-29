#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;





void main()
{
	setlocale(LC_ALL, "RUS");

	

	/*int N;
	string str;
	int ans;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		int x = str[0] - 'a' + 1;
		int y = str[1] - '0';

		if (x > 4)
		{
			x = 9 - x;
		}
		if (y > 4)
		{
			y = 9 - y;
		}

		if (x == 1 && y == 1) ans = 2;
		else if (x == 2 && y == 1 || x == 1 && y == 2) ans = 3;
		else if (x == 3 && y == 1 || x == 1 && y == 3 || x == 2 && y == 2) ans = 4;
		else if ((x > 2 || x < 5) && y > 2 || y < 5) ans = 8;
		else ans = 6;
		

	
	
		cout << ans << endl;
	}*/



	// 
	// ДЗ 1. дан (a, b) посчитать количество високосных лет 
	//    2. днано int Hours=[0, 12], Min = [0, 60], расчитать угол от минутной до часовой стрелки 
	//	  3. a, b, c, d, e отсоритровать за наименьшее количесвто сравнений (12 - много), (8 - ?) , (9 - можно) 
	//    4. ^ДЕЛАТЬ x1, y1, x2, y2 = [1, 8] это  координаты двух точек на шахматной доске побьет ли фигура другую (Слон-, -конь, -кароль, лодья, ферзь)
	//    5. ДЕЛАТЬ x1. x2. y1, y2 найти прямую проходящей через точку Ax + By + C = 0 - уравнение прмяой веторами
	//	  6. 3 точки проверить что они явлются сторонами квдрата и найти последнюю
	//int n, x, y;// x% %y
	//cin >> n >> x >> y;
	//cout << n/x + n/y - (n/(x*y))

	//int a, b;
	//cin >> a >> b;
	//int m, n, k;
	//cin >> m >> n >> k;
	//if (a > b)
	//{
	//	a = a + b;
	//	b = a - b;
	//	a = a - b;
	//}
	//int temp = min({m, n, k});
	//
	//m = temp;
	//n = (n + m + k) - max({ m, n, k }) - temp;
	//if (b > m && a > n)
	//{
	//	cout << "YEEES\n";
	//}
	//else cout << "NO\n";


	/*
	int x1, x2, y1, y2, x3, y3, dx, dy;
	cin >> x1 >> x2 >> y1 >> y2 >> x3 >> y3;*/

	// Найти растоняие от точки до ближайшей и дальней

	//1



	////2
	//dx = abs(x1 - x2);
	//dy = abs(y1 - y2);
	//cout << max(dx, dy);

	//int R, x, y;

	//cin >> x >> y >> R;
	//if (y < 0) y = -y;
	//
	//if (x > 0 && x * x + y * y < R * R) cout << "YES\n";
	//else cout << "NO\n";

	//if (x <= 0 && x < R && y < R) cout << "YES\n";
	//else cout << "NO\n";



	


//
//double x, eps;
//cin >> x >> eps;
//int n = 1;
//double ans = x;
//double sqrt = x * x;
//double next = x;
//while (abs(next) > eps)
//{
//	next = next * sqrt * (-1)/ (n+1)/(n+2);
//	n += 2;
//	ans += next;
//}
//
//cout << ans;

//double sum, r;
//int n;
//cin >> n >> r;
//int i = 0;
//double x, y, x1, y1, x2, y2;
//cin >> x >> y ;
//x1 = x;
//y1 = y;
//sum = 2 * 3.14 * r;
//while (i < n)
//{
//	cin >> x2 >> y2;
//	
//	sum += sqrt((x1 - x2) * (x1 - x2) + (y1 - y2)*(y1 - y2));
//	i++;
//	x1 = x2, y1 = y2;
//}
//sum += ((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
//cout <<fixed << setprecision(2) << sum;

//long long n;
//int count;
//int Max = 0, ans=Max;
//while (n > 0)
//{
//	if (n % 10 <= n / 10 % 10) count++;
//	n /= 10;
//}


// Выводит цифру по разрядам
int n, a = 10;
cin >> n;
while (n % a != n) a *= 10;
a /= 10;
while (a > 0)
{
	cout << n / a << " ";
	n = n % a;
	a /= 10;
}

}


