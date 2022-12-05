/// Laiks.cpp
/**************************************************************************************************************************
Izveidot programmu valodā C++,
izmantojot objektorientētās programmēšanas līdzekļus un strukturējot programmu vismaz trīs failos.
Klases hederi obligāti novietot atsevišķā hedera failā (program.h).
Visas metodes realizēt ārpus hedera faila – speciālā C++ failā (program.cpp).
Funkcija main ievietojama vēl citā C++ failā (main.cpp). Klases dati pēc noklusēšanas ir slēpti (private),
bet metodes atklātas (public). Šīs programmas ietvaros NAV obligāti jānodrošina tāda lietotāja saskarne,
kāda tika prasīta iepriekšējos trīs uzdevumos (main funkciju drīkst “cieti” iekodēt).

Izveidot klasi "Laiks" - Time, kurā tiek glabāti trīs skaitļi - stunda, minūte, sekunde.
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

int main ()
{
Laiks t(10, 50, 56);
t.print();             /// 10:50:56
Laiks t2;
t2.change(12, 58, 59);
t2.print();            /// 12:58:59


}

