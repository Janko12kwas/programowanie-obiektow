#include <iostream>

void task1()
{
	int number;


	do
	{
		std::cout << "Podaj liczbe dodatnia: \n";
		std::cin >> number;
	} while (number <= 0);
	
	std::cout << "Podales liczbe " << number << "\n";
}

/*void task2()
{
	int a, b, c;
	a = 0;
	std::cout << "Podaj liczbe" << "\n";
	std::cin >> c;
	do
	{
		a = a + 1;
		std::cout << a << "\n";
	} while (a < c);
}*/

/*void task3()
{
	int lowRange, highRange;
	std::cout << "Podaj zakres dolny\n";
	std::cin >> lowRange;
	std::cout << "Podaj zakres gorny\n";
	std::cin >> highRange;

	int currentNumber = lowRange;

	do
	{
		std::cout << currentNumber << " \n";
		currentNumber++;
	} while (currentNumber != highRange + 1);
}*/

void task4()
{
	int randomNumber;

	srand(time(NULL));
	
	randomNumber = rand() % 10 + 1;
		int numberFromUser;

	do
	{
		std::cout << "Podaj liczbe: \n";
		std::cin >> numberFromUser;
	} while (numberFromUser != randomNumber);

		std::cout << "Gratulaccje";
} 

/*void task5()
{
	int lowRange, highRange;
	std::cout << "Podaj zakres dolny\n";
	std::cin >> lowRange;
	std::cout << "Podaj zakres gorny\n";
	std::cin >> highRange;

	int currentNumber = lowRange;

	/*
	{
		std::cout << currentNumber << " \n";
		currentNumber++;
	} while (currentNumber <= highRange + 1);
	*
	
	while (currentNumber <= highRange)
	{
		std::cout
	}
} */

void task6()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsz¹ liczbê\n";
	std::cin >> firstNumber;
	std::cout << "Podaj drug¹ liczbê\n";
	std::cin >> secondNumber;

	int dzielnik;
	if (firstNumber > secondNumber)
		dzielnik = secondNumber;
	else
		dzielnik = firstNumber;
	//algorytm NWD
	while (firstNumber % dzielnik > 0 || secondNumber % dzielnik > 0)
		dzielnik--;

	std::cout << "NWD = " << dzielnik << "\n";

	int a = firstNumber;
	int b = secondNumber;

	while (b != a)
	{
		int tmA = a;
		a = b;
		b = tmA % b;
	}

	std::cout << "NWD = " << dzielnik << "\n";
	std::cout << "NWD = " << a << "\n";
}

/*  void task7()
{
	int numberFromUser;
	std::cout << "Podaj liczbe:\n";
	std::cin >> numberFromUser;

	unsigned long long result = 1;

	int i = 2;
	/*while (i <= numberFromUser)
	{
		result = result * i;
		i++;
	}

	std::cout << numberFromUser << "! = " << result << "\n";

	for (int i = 2; i <= numberFromUser; i++)
	{
		result = result * i;
	}

	std::cout << numberFromUser << "! = " << result << "\n";
*/

void task8()
{
	std::string textFromUser;
	std::cout << "Podaj wyraz\n";
	std::cin >> textFromUser;


	//textFromUser[0] = 'A';
	std::cout << "U¿ytkownik poda³: " << textFromUser << "\n";
	std::cout << "Napis sklada sie z " << textFromUser.length() << " znaków\n";
	std::cout << "Pierwszy znak z napisu to " << textFromUser[0] << "\n";
	std::cout << "Ostatni znak z napisu to " << textFromUser[textFromUser.length() - 1] << "\n";

	int coutChar = 0;
	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] == 'a')
			coutChar++;
	}


	std::cout << "Znaków 'a' jest " << coutChar << "\n";
}

void task9()
{
	std::string textFromUser;
	std::cout << "Podaj wyraz\n";
	std::cin >> textFromUser;

	for (int i = 0; i < textFromUser.length(); i++)
	{
		if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z')
			textFromUser[i] = textFromUser[i] + 32;
		else if(textFromUser[i] >= 'a' && textFromUser[i] <= 'z')
			textFromUser[i] = textFromUser[i] - 32;
	}

	std::cout << "Napis po zmianie: " << textFromUser << "\n";
}



int main()
{
	setlocale(LC_CTYPE, "polish");

	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	task9();
}