/*2) Create a struct to hold a fraction.
The struct should have an integer numerator and an integer denominator member.
Declare 2 fraction variables and read them in from the user.
Write a function called multiply that takes both fractions,
multiplies them together, and prints the result out as a decimal number.
You do not need to reduce the fraction to its lowest terms.*/

#include <iostream>

struct fraction {
	int numerator;
	int denominator;
};

fraction Abfrage()
{
	fraction temp;
	std::cout << "gebe eine zahl ein: ";
	std::cin >> temp.numerator;
	std::cout << "gebe eine zweite zahl ein: ";
	std::cin >> temp.denominator;
	return temp;
}

void Abgabe(fraction Nummern)
{
	std::cout << "die zahlen multipliziert sind:\n";
	std::cout << Nummern.numerator * Nummern.denominator;
	std::cout << "\n";
}

int main()
{
	fraction Nummern = Abfrage();
	Abgabe(Nummern);
	return 0;
}