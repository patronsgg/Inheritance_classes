#include "Classes.h"


int main()
{
    Property* p[7];
    p[0] = new Apartment(2000000);
    p[1] = new Apartment(1000000);
    p[2] = new Apartment(3000000);
    p[3] = new Car(1000000);
    p[4] = new Car(4000000);
    p[5] = new CountryHouse(500000000);
    p[6] = new CountryHouse(1000000000);

    for (int i = 0; i < 7; i ++)
    {
        
        p[i]->CalculationTax();
        delete[] p[i];
    }
    return 0;
}