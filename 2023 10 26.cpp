#include <iostream>
#include <cmath>
#include <string>
using namespace std;




int main()
{
    // ^ДЗ Timus Развод 7 гномов
    // Кондукторы
    // ^1645
    // 


    //// 1243 Развод 7 гномов
    //// по признаку Паскаля
   
    string str;
    unsigned long long Sum = 0; // Сумма остатков 
    int ost = 1;         // ost_i = *ost_i-1 * 10) % 7
    cin >> str;
    int N = str.length();
    for (int i = N-1; i >= 0; i--) // идем с конца сроки (с разряда единиц)
    {
 
        Sum += (((int)str[i]) - '0') * ost; // Признак делимости Паскаля
       
        ost = (10 * ost) % 7; // пересчет остатка
    }
 
    cout << Sum % 7;

    






    // 1011 Кондукторы
    // WA 14
        double P, Q;
        cin >> P >> Q;
        double population = 1, cund = 1;
        while (!((cund / population * 100) > P && (cund / population * 100) < Q))
        {
            //cout << (cund / population * 100) << endl;
            if ((cund / population * 100) > P)
            {
                population++;
                cund = 1;
            }
            else cund++;


        }

        //cout << cund / population * 100 << endl;
        cout << population << endl;




        
        
   
        // 1645 Лыжная гонка
        /*int n;
        int arr[2001] = { 0 };*/
       
     //  First solution 
      /*  cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0, count2=0;
        cout << arr[0] << " "  << n << endl;
        for (int i = 1; i < n; i++)
        {
            count = 0;
            count2 = 0;
            for (int j = 0; j < i; j++)
            {
                if (arr[i] > arr[j]) count++;
            }
            cout << arr[i] - count <<  " ";
            for (int j = 0; j < i; j++)
            {
                if (arr[i] < arr[j]) count2++;
            }
            cout << n - count2 << endl;
          
        }*/

     //second solution
        int n;
        int arr[2001] = { 0 };
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <= n; i++)
        {
            int Min = 1;
            int Max = n;
            bool Found = false;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == i) Found = true;;
                if (Found && arr[j] < i) Max--;
                else if (!Found && arr[j] > i) Min++;

            }
            cout << Min << " " << Max << endl;
        }
        
    return 0;
}




