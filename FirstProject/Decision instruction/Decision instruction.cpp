

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

    if (numberToCheck >= 10)
   {
        if (numberToCheck <= 25)
        {
            std::cout << "liczba jest w zakresie\n";
        }
        else
        {
            std::cout << "Liczba nie jest w zakresie\n";
        }
   }

    else
    {
        std::cout << "liczba nie jest w zakresie\n";
    }

    
}


/*
Napisz liczbe która wczyta liczbe od uzytkownika i wyswietli informacje czy jest ona parzysta czy nie.
*/

void task4()
{
    
}

void task5()
{
    int bok;

    std::cout << "Podaj bok kwadratu:\n";
    std::cin >> bok;
    
    int obwod;
    int pole;

    if (bok > 0)
    {
        obwod = bok * 4;
        pole = bok * bok;
        std::cout << "Obwod kwadratu: " << obwod << "\n";
        std::cout << "Pole kwadratu: " << pole << "\n";
    }
    else
        std::cout << "Podales bok ujemny.kys \n";
}


/*void task7()
{
    int firstNumber, secondNumber, thirdNumber;

    std::cout << "Podaj pierwsza liczbe do sprawdzenia:\n";
    std::cin >> firstNumber;

    std::cout << "Podaj drugą liczbe do sprawdzenia:\n";
    std::cin >> secondNumber;

    std::cout << "Podaj trzecia liczbe do sprawdzenia:\n";
    std::cin >> thirdNumber;

    if (firstNumber > secondNumber || firstNumber > thirdNumber )
        std::cout << "Liczba najwieksza: " << firstNumber << "\n";
    else
    {
          if(secondNumber > firstNumber)
               std::cout << "Liczba najwieksza: " << secondNumber << "\n";
    }
    else
    {
        std::cout << "Liczba najwieksza: " << thirdNumber << "\n";
    }
}*/

/*void task8()
{
    int firstNumber, secondNumber;

    std::cout << "Podaj pierwsza liczbe do sprawdzenia:\n";
    std::cin >> firstNumber;

    std::cout << "Podaj druga liczbe do sprawdzenia:\n";
    std::cin >> secondNumber;

    if (secondNumber > firstNumber)
        std::cout << "Kolejnosc rosnaca: " << secondNumber << " " << firstNumber;
    else
    {
        std::cout << "Kolejnosc rosnaca: " << firstNumber << " " << secondNumber;
    }
}*/





 void task10()
{
    int dayNumber;


    std::cout << "Podaj numer dnia tygodnia do sprawedzenia:\n";
    std::cin >> dayNumber;

    switch (dayNumber)
    {
    case 1:
        std::cout << "Poniedzialek\n";
        break;
    case 2:
        std::cout << "Wtorek\n";
        break;
    case 3:
        std::cout << "Sroda\n";
        break;
    case 4:
        std::cout << "Czwartek\n";
        break;
    case 5:
        std::cout << "Piatek\n";
        break;
    case 6:
        std::cout << "Sobota\n";
        break;
    case 0:
    case 7:
        std::cout << "Niedziela\n";
        break;
    default:
        std::cout << "Bledny dzien\n";
    }
}

 void task12()
{
     int numberToCheck;

     std::cout << "Podaj temperature do sprawdzenia:\n";
     std::cin >> numberToCheck;

     if (numberToCheck <= 0)
         std::cout << "Bardzo zimno\n";
     if(numberToCheck >= 1 || numberToCheck < 15)
         std::cout << "zimno\n";

}

int main()
{
	//task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task12();
    //task10();
    task12();
}  
    
  