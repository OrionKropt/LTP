#include <iostream>
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

//	ДЗ  Timus ^Волшебник, ^Предохранители, ^1215


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


bool InsideAim(Point P, Point* Aim, int N) {
	bool isInside = false;

	for (int i = 0, j = N - 1; i < N; j = i++) {
		if (((Aim[i].y > P.y) != (Aim[j].y > P.y)) &&
			(P.x < (Aim[j].x - Aim[i].x) * (P.y - Aim[i].y) / (Aim[j].y - Aim[i].y) + Aim[i].x))
			isInside = !isInside;
	}

	return isInside;
}

int main()
{
	/*int N, M;
	int left = 0;

	cin >> N >> M;
	char charr[1001];
	for (int i = 0; i < N; i++)
	{
		cin >> charr[i];
	}	
	

	left = (left + M) % N;
	int count = 0;
	int j = left;
	for (int count = 0; count < 10; count++)
	{
		cout << charr[j];
		if (j + 1 < N)
		{
			j++;
		}
		else j = 0;
		
	}*/


	//int A, B;
	//cin >> A >> B;

	//int nom = 0;
	//for (int i = A; i <= B; i++)
	//{
	//	if (i % 2 == 1) nom++;
	//}
	//cout << nom;







	// 1215

	//int N;
	//double Min = numeric_limits<double>::max();
	//double dist;
	////cout << Min;
	//Point  P;
	//cin >> P.x >> P.y >> N;
	//Point* Aim = new Point[N];
	//int n = 0;
	//while (n < N)
	//{
	//	cin >> Aim[n].x >> Aim[n].y;
	//	n++;
	//}

	//if (InsideAim(P, Aim, N)) {
	//	cout << 0.000 << endl;
	//	return 0;
	//}

	//for (int i = 1; i < N; i++)
	//{
	//	dist = DistToSegment(Aim[i - 1], Aim[i], P);
	//	if (dist < Min) Min = dist;
	//}

	//dist = DistToSegment(Aim[0], Aim[N - 1], P);
	//if (dist < Min) Min = dist;

	//cout << fixed << setprecision(3) << 2 * Min << endl;







	
	return 0;
}