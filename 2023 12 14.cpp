#include <iostream>

using namespace std;


void hoarasort(int** a, int first, int last, int ind = 1) {
    int i = first, j = last;
    int* tmp; int x = a[(first + last) / 2][ind];
    do {
        while (a[i][1] < x)
            i++;
        while (a[j][1] > x)
            j--;

        if (i <= j)
        {
            if (i < j)
            {
                if (a[i][ind] == a[j][ind]) {
                    if (a[i][ind - 1] > a[j][ind - 1]) {
                        tmp = a[i];
                        a[i] = a[j];
                        a[j] = tmp;
                    }
                }
                else {
                    tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
            i++;
            j--;
        }
    } while (i <= j);

    if (i < last)
        hoarasort(a, i, last);
    if (first < j)
        hoarasort(a, first, j);
}


int main()
{
	// дз ^1910 1203 (1. СОРТИРОВКА полсчетом 2. сортовка хоара - сортируем вс пары по возрастанию последнего числа пары, если последние числа пары одинаковые то сравниваем первые чисда пары) 
	// надо иучить бинарный поиск и сортирвки слиянием,  вставками, хоар
	// 
    // Дан размер массива и разме матрицы.  Пишем функцию чтение из файла, написать булевскую функция, которая определяет особеннсти матрицы, отсориорвать подходящие матрицы по наибольшему
    //  по модулю эллементу


	// Поиск наибольшего общего фрагмента (можно стриить дерево и искать по нему) (можно искать по хэшам) 



	



	///                                          1203
    int n;
    cin >> n;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[2];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
   
   
    //cout << endl;
    hoarasort(arr, 0, n - 1);
    //cout << endl;
   /* for (int i = 0; i < n; i++)
    {
        cout << arr[i][0] << " " << arr[i][1] << endl;;
    }*/
   // cout << endl;
    int cur =0;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] > cur)
        {
            cur = arr[i][1];
            count++;
        }
    }
    cout << count;
   ///                                          1203


   ///                                          1910

   /* int n;
    int Sum = 0;
    int Max = 0;
    int Num = 2;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i <= 2) Sum += arr[i];
    }
    Max = Sum;
    
    for (int i = 3; i < n; i++)
    {
        
        
        
            Sum -= arr[i - 3];
            Sum += arr[i];
            if (Sum > Max)
            {
                Max = Sum;
                Num = i;
            }
        
    }

    cout << Max << " " << Num;*/


    ///                                          1910
	return 0;
}