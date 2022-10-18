

#include <iostream>

/*
Napisz funkcje, ktora wczyta dwie liczby i wykona dzielenie na nich
*/


void task1()
{
    int firstNumber, secondNumber;

    std::cout << "Podaj pierwsza liczbe:\n";
    std::cin >> firstNumber;

    std::cout << "Podaj druga liczbe:\n";
    std::cin >> secondNumber;


    int quotient;

   if (secondNumber != 0)
       quotient = firstNumber / secondNumber;
    

   
    std::cout << "Iloraz: " << quotient << "\n";
    
    if (secondNumber == 0)
        std::cout << "Dzielenie przez 0 jdddddddddddddd\n";

}


int main()
{
	task1();
}

