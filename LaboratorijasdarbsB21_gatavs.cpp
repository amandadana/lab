/// LaboratorijasdarbsB21.cpp
/*********************************************************
Amanda Dana Stugle, as20256.
B21:
Doti divi naturāli skaitļi m un n.
Izdrukāt visus pirmskaitļus, kas atrodas intervālā [m,n].
Risinājumā izmantot funkciju, kas atpazīst pirmskaitli.
Programma izveidota: 31.10.2022.
*********************************************************/


#include <iostream>
#include <string>

using namespace std;

bool isPrime(int n)
{
    bool isPrime = true;
    if (n == 0 || n == 1)
    {
        isPrime = false; // 0 un 1 nav pirmskaitļi
    }
    else
    {
        int i = 0;
        for (i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int main()
{
    int ok;
    do
    {
        int m, n;
        cout << "Ievadiet intervāla sākumpunktu , N >= 1: " << endl;
        cin >> m;

        while (m < 0)
        {
            cout << "Nekorekta vērtība, mēģiniet vēlreiz: ";
            cin >> m;
        }

        cout << "Ievadiet intervāla beigu punktu, N >= 1 : " << endl;
        cin >> n;

        while (n <= m)
        {
            cout << "Nekorekta vērtība, mēģiniet vēlreiz, N > M: ";
            cin >> n;
        }

        bool has_prime = false;

        string primes = "Pirmskaitļi: ";

        while (m <= n)
        {
            if (isPrime(m))
            {
                primes.append(to_string(m));
                primes.append(" ");

                if (!has_prime)
                {
                    has_prime = true;
                }
            }
            m++;
        }

        if (has_prime)
        {
            cout << primes;
        }
        else
        {
            cout << "Intervālā nav pirmskaitļu";
        }

        cout << endl;
        cout << endl;
        cout << "Vai turpināt (1) vai beigt (0) ?" << endl;
        cin >> ok;
    } while (ok == 1);
}

/***************************Testu plāns************************************************
      m                n                         Izvade
      0                9                       2  3  5  7
      1                2                           2
      2                3                          2  3
     -1                9            Nekorekta vērtība, mēģiniet vēlreiz!
      8               -1            Nekorekta vērtība, mēģiniet vēlreiz!
     -1               -4            Nekorekta vērtība, mēģiniet vēlreiz!
      9                0            Nekorekta vērtība, mēģiniet vēlreiz, N > M:
      2               17                  2  3  5  7  11  13   17
*************************************************************************************/
