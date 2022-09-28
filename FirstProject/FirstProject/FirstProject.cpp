// FirstProject.cpp : This file contains the 'main' function.
//  Program execution begins and ends there.

using namespace std;
#include <iostream>

int main()
{
    /*
    Instrukcja do wyświetlania informacji na standardowy strumień wyjścia.
    Domyślnie, jesli nie zostało to zmienione, jest to konsola w której aplikacja
    została uruchomiona.
    Aby wyswietlić na konsoli nalezy użyć std::cout.
    Na konosle wywyłamy za pomoca operatora <<.
    Po nim musi znajdować się dana do wysłania.
    Instrukcję kończymy znakiem średnik.
    "Hello World!\n" - jest to stała o wartości tekstowej.
    Stałe tekstowe są ograniczone znakami cudzysłowu.
    * ' (apostrof) - jesli jest jeden znak
    * " (cudzysłów) - jesli jest zero lub więcej znaków
    W stałych tekstowych moga być wstawiane znaki specjalne. Takie znaki
    zaczynają się od znaku \ (backslash) po którym może się znajdować:
    * jedna litera alfabetu angielskiego
    * trzy cyfry dające liczbę ósemkową
    Przykładowo:
    * \n - symbol oznaczający nową linię.
    * \t - symbol oznaczający znak tabulatora
    * \\ - symbol oznaczający znak \
    * \' - symbol oznaczający znak '
    * \" - symbol oznaczający znak "
    * \141 - symbol ósemkowy oznaczajacy zgodnie z tablicą kodów ASCII znak młaej literki a
    */

    //github.com/IronLittleFox

   



    int numberFromUser;


    cout << "Podaj liczbe ";
    cin >> numberFromUser;
    cout << "Liczba to " << numberFromUser ;


   

}


