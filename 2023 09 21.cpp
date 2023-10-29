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
	cout << (a + 1) * (abs(a - 1) + 1) / 2 << endl; //  формула арифметической прогрессии 
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
			Z[i] = arr[i][0] - (C + A);
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
	double ans = floor(sqrt(pow((arr[1][0] - arr[0][0]), 2) + pow((arr[1][1] - arr[0][1]), 2) + (pow((Z[1] - Z[0]), 2))) * pow(10, 6)) / pow(10, 6);
	cout << setprecision(6) << ans;

}



void main()
{


	Task_1000();
	Task_1409();
	Task_1068();
	Task_2001();

}
