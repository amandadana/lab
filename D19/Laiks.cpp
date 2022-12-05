/// Laiks.cpp
/**************************************************************************************************************************
Klase "Laiks" - Time, kurā tiek glabāti trīs skaitļi - stunda, minūte, sekunde.
Realizētas metodes:
(1) konstruktors, ar kuru tiek padotas sākotnējās vērtības,
(2) destruktors, kurš paziņo par objekta likvidēšanu,
(3) metode "Mainīt" - change ar trīs parametriem, kas uzstāda jaunās vērtības,
(4) metode "Drukāt" - print, kas izdrukā laiku,
(5) metode "Distance" - distance ar trīs parametriem - citu laika momentu, kas aprēķina
un izdrukā attālumu starp abiem laika momentiem gan sekundēs, gan minūtēs, gan apvienoti (stundās, minūtēs un sekundēs).
***************************************************************************************************************************/
/// Autors : Amanda Dana Stugle
/// Izveidots : 05.12.2022.

#include <iostream>
#include <iomanip>
#include "Laiks.h"
using namespace std;

Laiks :: Laiks (int stunda, int minute, int sekunde)
{
   this->stunda = stunda;
   this->minute = minute;
   this->sekunde = sekunde;
   cout << "Izveidots objekts ar adresi " << this << endl;
}
Laiks :: ~Laiks()
{
    cout << "Likvidēts objekts ar adresi " << this << endl;
}

void Laiks :: change (int h, int m, int s)
{
    stunda = h;
    minute = m;
    sekunde = s;
}

void Laiks :: print ()
{
    cout << setw(2) << setfill('0') << stunda << ":" << setw(2) << setfill ('0') <<
    minute << ":" << setw(2) << setfill('0') << sekunde << "\n";
}

int Laiks :: Distance (int h, int m, int s)
{

}
