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
using namespace std;

bool isPrime(int n) {
bool isPrime = true;
if (n == 0 || n == 1) {
    isPrime = false;    // 0 un 1 nav pirmskaitļi
}
else {
    int i = 0;
    for (i =2; i <= n / 2; ++i) {
        if ( n % i == 0){
            isPrime = false;
            break;
        }
    }
}
return isPrime;
}

int main() {
int ok;
do {
int m, n;
cout << "Ievadiet pirmo naturālo skaitli (intervāla sākumpunktu), N >= 1: " << endl;
cin >> m;
cout << "Ievadiet otro naturālo skaitli (intervāla beigu punktu), N >= 1 : " << endl;
cin >> n;

while (m<0 || n<0)  // m un n - Naturāli skaitļi
{
    cout << "Nekorekta vērtība / (-as), mēģiniet vēlreiz!" << endl;
    cout << endl;
    cout << "Ievadiet pirmo naturālo skaitli (intervāla sākumpunktu), N >= 1:" << endl;
    cin >> m;
    cout << "Ievadiet otro naturālo skaitli (intervāla beigu punktu), N >= 1 :" << endl;
    cin >> n;
}


int mazakais = (m > n)? n: m;
int lielakais = (m > n)? m: n;

cout << "Pirmskaitļi :";
while (mazakais <= lielakais){
    if (isPrime(mazakais)){
        cout << mazakais << " ";
    }
    mazakais++;
}
cout << endl;
 cout << endl;
   cout << "Vai turpināt (1) vai beigt (0) ?" << endl;
   cin >> ok;
} while (ok ==1);
}

/***************************Testu plāns************************************************
      m                n                         Izvade
      0                9                       2  3  5  7
      1                2                           -
     -1                9            Nekorekta vērtība / (-as), mēģiniet vēlreiz!
      8               -1            Nekorekta vērtība / (-as), mēģiniet vēlreiz!
      9                0                       2  3  5  7
      2               17                  2  3  5  7  11  13   17
*************************************************************************************/
