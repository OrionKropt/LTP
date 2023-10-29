#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>

using namespace std;

//// 1 cosx cos(x) = 1 - x^2/2! + x^4/ 4 - ..
//
//
//// три точки найти ратсояние от очик до отрезка  
struct Point
{
	double x, y;
};



bool pointisleft(point a, point b, point c)
{
	double a, b, c;
	a = c.x - b.x;
	b = c.y - b.y;
	c = -a * b.x - b * b.y;
	return a * a.x + b * a.y + c <= 0;
}

double disttoline(point a, point b, point c)
{
	double dist;
	double a, b, c;
	b = c.x - -b.x;
	a = b.y - c.y;
	c = -a * b.x - b * b.y;
	dist = abs(a * a.x + b * a.y + c) / sqrt(a * a + b * b);
	
	return dist;
}

double distancepoints(point a, point b)
{
	return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

double dist(point a, point b, point c)
{
	if (pointisleft(a, b, c))
	{
		return distancepoints(a, b);
	}
	if (!pointisleft(a, b, c));
	return distancepoints(b, a);

}





int main()
{
	setlocale(LC_ALL, "RU");
	


	

	//cout << MyCos(10e-5, 0.5) << " " << cos(0.5);

	//Point A, B, C;
	//
	////A.x = 0;
	////A.y = 0;
	////B.x = 1;
	////B.y = 0;
	////C.x = 0;
	////C.y = 1;
	//
	//A.x = 0;
	//A.y = 0;
	//B.x = 1;
	//B.y = 0;
	//C.x = 1;
	//C.y = 1;

	//cout << fixed << setprecision(6) << DistancePoints(A, B) << endl;

	return 0;
}