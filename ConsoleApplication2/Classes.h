#pragma once
#include <iostream>
#include <iomanip>
using namespace std;



class Property
{
protected:
	float worth;
public:
	Property(float);
	virtual void CalculationTax();
};

class Apartment : public Property 
{
public:
	Apartment(float);
	void CalculationTax() override;
};

class Car : public Property
{
public:
	Car(float);
	void CalculationTax() override;
};

class CountryHouse : public Property
{
public:
	CountryHouse(float);
	void CalculationTax() override;
};