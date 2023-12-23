#include <iostream>



using namespace std;


bool IsPrime(int x)
{
	for (int i = 2; i < sqrt(x); i++)
		if (x % i == 0) return false;
	return true;
}


void PrintArray(int* arr, int n)
{
	for (int i = 0; i < n; i++) cout << arr[i] << ' ';
	cout << endl;
}


int* factorize(int x, int& outCount) // фактоизаци€ числа (разложение числа на простые множетели)
{
	int* prime = new int[sqrt(x) + 1] {0};
	int k = 0;
	for (int i = 2; i < sqrt(x) + 1; i++)
	{
		while (x % i == 0)
		{
			prime[k++] = i;
			x /= i;
		}
	}

	if (x != 1)
		prime[k++] = x;

	outCount = k;
	return prime;
}


int* Dividers(int x, int& OutCount)
{
	int* dividers = new int[sqrt(x) + 1] {0};
	int k = 0;
	for (int i = 2; i < sqrt(x) + 1; i++)
		if (x % i == 0)
		{
			dividers[k++] = i;
			if (x / i != i) dividers[k++] = x / i;
		}
	OutCount = k;
	return dividers;
}


int main()
{
	setlocale(LC_ALL, "RUS");


	int x = 543216;
	int n = 0;
	cout << "‘акторизаци€ числа " << x << endl;
	int* primes = factorize(x, n);

	PrintArray(primes, n);
	delete[] primes;

	//x = 16;
	n = 0;
	cout << "ƒелители числа " << x << endl;
	int* dividers = Dividers(x, n);
	PrintArray(dividers, n);
	delete[] dividers;
	return 0;
}
