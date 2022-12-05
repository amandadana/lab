/// Laiks.h
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
class Laiks
{
private :
    int stunda;
    int minute;
    int sekunde;
public :
    Laiks(int stunda = 0, int minute = 0, int sekunde = 0); /// Konstruktors ar noklusētām vērtībām - 0
    ~Laiks();                                               /// Destruktors, paziņo par likvidēšanu
    void change(int h, int m, int s);                       /// Uzstāda jaunās vērtības
    void print();                                           /// Izdrukā laiku
    bool equals(Laiks);                                     /// Salīdzina abus laika momentus
    int Distance (int h, int m, int s);                         /// Aprēķina un izdrukā attālumu starp abiem laika momentiem
};
