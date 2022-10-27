

#include <iostream>

/*
DRY - dont repeat yourself - nie powtarzaj się
*/

/*
Napisz funkcje, ktora wczyta dwie liczby i wykona dzielenie na nich
*/

/*
* rownosci      ==
* róznosci      !=
* wiekszosci    >
* mniejszosci       <
* wieksze lub rowne     >=
* mniejsze lub rowne <=
* 
* 
* argument1 >= argument2
* 
* wynikiem dzilan tych operatorow jest wartosc logiczna true/false typu bool
* 
* bool zmienna = true;
* bool zmnienna2 = 5 > 7;
* 
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
    {
        quotient = firstNumber / secondNumber;
        std::cout << "Iloraz: " << quotient << "\n";
    }

    else
        std::cout << "Dzielenie przez zero\n";
}


void task2()
{
    int numberToCheck;

    std::cout << "Liczba do sprawdzenia:\n";
    std::cin >> numberToCheck;

    if (numberToCheck > 0)
        std::cout << "Liczba wieksza od zera\n";
    else
        std::cout << "Liczba równa lub mniejsza od zera\n";


}

/*
Napisz funkcje , ktora wczyta liczbe i wyswietli informacje czy jest ona w zakresie <10, 25>
*/


void task3()
{
    int numberToCheck;

    std::cout << "Liczba do sprawdzenia:\n";
    std::cin >> numberToCheck;

    if ()
}


int main()
{
	//task1();
    //task2();
}   task3();
    

