#include "Classes.h"

Property::Property(float worth_in) 
{
	worth = worth_in;
}

void Property :: CalculationTax() 
{
	cout << "Worth: " << fixed << setprecision(1) << worth << endl;
}

Apartment::Apartment(float worth_in) : Property(worth_in) {}

Car::Car(float worth_in) : Property(worth_in){}

CountryHouse::CountryHouse(float worth_in) : Property(worth_in) {}

void Car::CalculationTax() {
	Property::CalculationTax();
	cout << "Tax for car: " << fixed << setprecision(1) << worth * 0.005 << endl;
}

void CountryHouse::CalculationTax() {
	Property::CalculationTax();
	cout << "Tax for countryhouse: " << fixed << setprecision(1) << worth * 0.002 << endl;
}

void Apartment::CalculationTax() {
	Property::CalculationTax();
	cout << "Tax for apartament: " << fixed << setprecision(1) << worth * 0.001 << endl;
}