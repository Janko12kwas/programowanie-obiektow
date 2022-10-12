#include <iostream>
#include <cmath>




/*
Napisz funkcje ktora pobierze dwie liczby oraz wykona podstawowa operacje arytmetyczne
*/


void task1()
{
    
    int firstNumber, secondNumber;

    std::cout << "Podaj pierwsza liczbe:\n";
    std::cin >> firstNumber;

    std::cout << "Podaj druga liczbe:\n";
    std::cin >> secondNumber;


    int sum, difference, product, quotient, rest;

    sum = firstNumber + secondNumber;
    difference = firstNumber - secondNumber;
    product = firstNumber * secondNumber;
    quotient = firstNumber / secondNumber;
    rest = firstNumber % secondNumber;

    std::cout << "Suma: " << sum << "\n";
    std::cout << "Roznica: " << difference << "\n";
    std::cout << "Iloczyn: " << product << "\n";
    std::cout << "Iloraz: " << quotient << "\n";
    std::cout << "Reszta z dzielenia: " << rest << "\n";
    
    
}


void task2()
{
    std::cout << "15 / 4 = " << (15 / 4) << '\n';
    std::cout << "15 / 4 = " << (15.0 / 4) << '\n';
    std::cout << "15 / 4 = " << (15 / 4.0) << '\n';
    std::cout << "15 / 4 = " << (15.0 / 4.0) << '\n';
}




/*
Napisz funkcje która oblic\y pole trójkąta.
*/

void task3()
{
    float base, height;

    std::cout << "Podaj podstawe trojkata\n";
    std::cin >> base;

    std::cout << "Podaj wysokosc trojkata\n";
    std::cin >> height;

    float area;
    area = 0.5 * base * height;

    std::cout << "Pole trojkata wynosi: " << area << "\n";
}

/*
Napisz funkcje ktora obliczy przekatna kwadratu
*/


void task4()
{

    float side;

    std::cout << "Podaj bok kwadratu\n";
    std::cin >> side;

    float diagonal;

    diagonal = side * sqrt(2);
}


int main()
{
    //task1();
    //task2();
    //task3();
    task4();
}
