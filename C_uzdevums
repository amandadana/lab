/// LaboratorijasdarbsC21.cpp
/*****************************************************************************
Amanda Dana Stugle, as20256.
C21:
Doti naturāls skaitlis n un veseli skaitļi a(1), a(2),..a(n).
Neveicot visa masīva sakārtošanu, atrast trešo lielāko no šiem skaitļiem.
Programma izveidota: 20.11.2022.
*****************************************************************************/

#include <iostream>
using namespace std;

/*******************************************************************************
void tresaisLielakais(int arr[], int arr_size);
Funkcija void tresaisLielakais(arr[], arr_size) -
noskaidro, kurš no ievadītajiem veselajiem skaitļiem a, masīvā ar garumu n,
ir trešais lielākais. Funkcija atgriež trešo lielāko skaitli kā rezultātu.
*******************************************************************************/

void tresaisLielakais(int arr[], int arr_size)
{

    int pirmaisLielakais = arr[0];  /// Tiek atrasts pirmais lielākais skaitlis
    for (int i=1; i < arr_size; i++)
        if (arr[i] > pirmaisLielakais)
        pirmaisLielakais = arr[i];

    int otraisLielakais = INT_MIN; /// Tiek atrasts otrs lielākais skaitlis
    for (int i=0; i < arr_size; i++)
        if (arr[i] > otraisLielakais && arr[i] < pirmaisLielakais)
        otraisLielakais = arr[i];

    int tresaisLielakais = INT_MIN; /// Tiek atrasts trešais lielākais skaitlis
    for (int i=0; i< arr_size; i++)
        if (arr[i] > tresaisLielakais && arr[i] < otraisLielakais)
        tresaisLielakais = arr[i];


}

int main ()
{
    int ok;
    do
    {
        int arr_size;
        cout << "Ievadiet naturālu skaitli n - masīva garumu, n>=3 :" << endl;
        cin >> arr_size;

        if (arr_size < 3)
        {
            cout << "Nederīga ievade!";
            return 0;
        }


        int *arr;
        arr = new int [arr_size];

        for (int i=0; i<arr_size; i++)
        {
            cout << "Ievadiet " << i+1 << ". veselo skaitli:" << endl;
            cin >> arr[i];
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        tresaisLielakais(arr,n);
        cout << "Trešais lielākais skaitlis ir " << tresaisLielakais << endl;
        return 0;

        delete [] arr;


        cout << endl;
        cout << "Vai turpināt (1), vai beigt (0)?" << endl;
        cin >> ok;
    }while (ok == 1);

    return 0;
}
