#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;
// (^) - выполнено
// 21.09.2023 ДЗ Timus 1000^, 1409^, 1068^, 2001^ (1489 СЛОЖ)


void Task_1000()
{
	int a, b;
	a = b = 0;
	cin >> a >> b;
	cout << a + b;
}

void Task_1409()
{
	int a, b;
	cin >> a >> b;
	cout << b - 1 << " " << a - 1 << endl;
}

void Task_1068()
{
	int a;
	cin >> a;
	cout << (a + 1) * (abs(a - 1)+1) / 2 << endl; //  формула арифметической прогрессии 
	                                              //  так как "a" может быть отрицательна берем модуль
	                                              //  abs(x) возвращает модуль числа
}
 

void Task_2001()
{
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1;
	cin >> a2 >> b2;
	cin >> a3 >> b3;
	cout << (a1 - a3) << " " << (b1 - b2);
}

void Task_1489()
{

	int A, B, C;
	double arr[2][2];
	double Z[2] = { 0 };

	cin >> A >> B >> C;
	cin >> arr[0][0] >> arr[0][1];
	cin >> arr[1][0] >> arr[1][1];

	int height = (B + C) * 2;
	int weight = C * 2 + A;
	for (int i = 0; i < 2; i++)
	{
		if (arr[i][0] <= (weight - C) && arr[i][0] >= C && arr[i][1] <= B)
		{
			arr[i][1] = height / 2 + (B - arr[i][1]);   
			Z[i] = C;
		}
		else if (arr[i][0] >= C && arr[i][0] <= (weight - C) && arr[i][1] >= B && arr[i][1] <= (height / 2))
		{
			Z[i] = arr[i][1] - B;
			arr[i][1] = height / 2;
			
		}
		else if (arr[i][0] <= C && arr[i][1] >= height / 2 && arr[i][1] <= height - C)
		{
			Z[i] = arr[i][0];
			arr[i][0] = C;
		}
		else if (arr[i][0] <= weight && arr[i][0] >= weight - C && arr[i][1] >= height / 2 && arr[i][1] <= height - C)
		{
			Z[i] = arr[i][0]-(C+A);
			arr[i][0] = C + A;
		}
		else if (arr[i][0] >= C && arr[i][0] <= (weight - C) && arr[i][1] >= height - C && arr[i][1] <= height)
		{
			Z[i] = arr[i][1] - (height - C);
			arr[i][1] = height - C;
		}
		
	}
	
	
	//cout << "X1= " << arr[0][0] << " Y1 = " << arr[0][1] << " Z1= " << Z[0] << endl;
	//cout << "X2= " << arr[1][0] << " Y2 = " << arr[1][1] << " Z2= " << Z[1] << endl;
	double ans = floor(sqrt(pow((arr[1][0] - arr[0][0]), 2) + pow((arr[1][1] - arr[0][1]), 2) + (pow((Z[1] - Z[0]), 2)))*pow(10,6))/ pow(10, 6);
	cout << setprecision(6) <<ans;
	
}





void main()
{
	setlocale(LC_ALL, "RUS");

	//Task_1000();
	//Task_1409();
	//Task_1068();
	//Task_2001();


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



	//#define DEBUG



	//#ifdef DEBUG
	//	int a = 5, b = 4, c = 3, d = 2, e = 1;
	//#else
	//	int a, b, c, d, e;
	//	cin >> a >> b >> c >> d >> e;  // ВВодим числа
	//#endif // DEBUG
	//
	//
	//	cout << a << " " << b << " " << c << " " << d << " " << e << endl; 
	//	cout << endl;
	//	if (a > b) swap(a, b); // Находим максимум у первых двух
	//	
	//	
	//
	//	if (c > d) swap(c, d); // Находим максимум у 3 и 4 цифры
	//	
	//	
	//	
	//	if (a > c) swap(a, c); // Находим максимум из минимумов
	//	
	//	if (b > d) swap(b, d); // Находим максимум из максимумов
	//	
	//	int temp = c;
	//	c = max(c, b);
	//	b = min(temp, b);
	//
	//	temp = a;
	//	a = min(a, d);
	//	d = max(temp, d);
	//
	//	/*На этом этапе у нас отсортированы первые 4 цифры*/
	//#ifdef DEBUG
	//	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	//#endif
	//
	//	// В следующих if мы сравниваем последнюю цифру с каждой
	//
	//	if (d > e)
	//	{
	//		swap(d, e);
	//		if (c > d)
	//		{
	//			swap(d, c);
	//			if (b > c)
	//			{
	//				swap(b, c);
	//				if (a > b)
	//				{
	//					swap(a, b);
	//				}
	//			}
	//		}
	//	}
	//	else if (c > e)
	//	{
	//		swap(e, c);
	//		
	//		
	//		if (b > c)
	//		{
	//			swap(b, c);
	//			if (a > b)
	//			{
	//				swap(a, b);
	//			}
	//		}
	//	
	//	}
	//	else if (b > e)
	//	{
	//		swap(e, b);
	//		
	//		
	//		
	//		if (a > b)
	//		{
	//			swap(a, b);
	//		}
	//	}
	//	else if (e > a) swap(e, a);
	//	cout << a << " " << b << " " << c << " " << d << " " << e << endl;


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


