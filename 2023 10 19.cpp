#include <iostream>
#include <string>
#include <math.h>

#include <iomanip>

using namespace std;

void find(string result, int N, int Sum,long long& count)
{
	if (N && Sum >= 0)
	{
		char d = '0';
		while (d <= '9')
		{
			find(result + d, N - 1, Sum - (d - '0'), count);
			d++;
		}
	}
	else if (N == 0 && Sum == 0)
	{
		//cout << result << " ";
		count++;
	}
	
}

void Task_1036()
{
	int N, Sum;
	string result;
	cin >> N >> Sum;
	//N *= 2;
	
	
	
		if (Sum % 2 == 0)
		{
			if (N == 1 && Sum / 2 <= 18) cout << 1;
			else if (N == 1) cout << 0 << endl;
			else
			{
				Sum /= 2;
				long long count = 0;
				find(result, N, Sum, count);
				//find(result, N, Sum, count);
				cout << count * count << endl;

				


			}
		}
		else cout << 0 << endl;
	
	
	
}

struct Point
{
	double x;
	double y;
};
double DistancePoints(Point A, Point B)
{
	return sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y));
}

double DistToSegment(Point A, Point B, Point C)
{

	double dx = B.x - A.x, dy = B.y - A.y;
	double length_squared = dx * dx + dy * dy;


	double t = ((C.x - A.x) * dx + (C.y - A.y) * dy) / length_squared;
	Point Projection;
	Projection.x = A.x + t * dx;
	Projection.y = A.y + t * dy;
	if (t >= 0 && t <= 1) return DistancePoints(C, Projection);
	else return min(DistancePoints(A, C), DistancePoints(B, C));


}


void Task_1348()
{

	Point A, B, C;

	double L;

	cin >> A.x >> A.y >> B.x >> B.y;
	cin >> C.x >> C.y >> L;
	double Dis = DistToSegment(A, B, C);

	double DisA = DistancePoints(A, C), DisB = DistancePoints(B, C);
	if (L >= Dis) cout << fixed << setprecision(2) << 0 << endl;
	else cout << fixed << setprecision(2) << Dis - L << endl;

	if (L >= DisA && L >= DisB) cout << fixed << setprecision(2) << 0 << endl;
	else cout << fixed << setprecision(2) << max(DisA, DisB) - L << endl;



}

int main()
{
//	// счастливые биелты 1036
//	// Пустить козла в огрод 2 1348
//	// дан массив положительных целых чисел, числа это высоты столбиков
//	// растояние между столбиков 1
//	// льют воду найти объём налитой воды
//	

	//Task_1036();
	Task_1348();





	return 0;
}