#include <iostream>

using namespace std;



//#define DEBUG

int main()
{
#ifdef DEBUG
	int a = 5, b = 4, c = 3, d = 2, e = 1;
#else
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;  // ������ �����
#endif // DEBUG


	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	cout << endl;
	if (a > b) swap(a, b); // ������� �������� � ������ ����



	if (c > d) swap(c, d); // ������� �������� � 3 � 4 �����



	if (a > c) swap(a, c); // ������� �������� �� ���������

	if (b > d) swap(b, d); // ������� �������� �� ����������

	int temp = c;
	c = max(c, b);
	b = min(temp, b);

	temp = a;
	a = min(a, d);
	d = max(temp, d);

	/*�� ���� ����� � ��� ������������� ������ 4 �����*/
#ifdef DEBUG
	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
#endif

	// � ��������� if �� ���������� ��������� ����� � ������

	if (d > e)
	{
		swap(d, e);
		if (c > d)
		{
			swap(d, c);
			if (b > c)
			{
				swap(b, c);
				if (a > b)
				{
					swap(a, b);
				}
			}
		}
	}
	else if (c > e)
	{
		swap(e, c);


		if (b > c)
		{
			swap(b, c);
			if (a > b)
			{
				swap(a, b);
			}
		}

	}
	else if (b > e)
	{
		swap(e, b);



		if (a > b)
		{
			swap(a, b);
		}
	}
	else if (e > a) swap(e, a);
	cout << a << " " << b << " " << c << " " << d << " " << e << endl;
}