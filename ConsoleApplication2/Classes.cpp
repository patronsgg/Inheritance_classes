#define _USE_MATH_DEFINES
#include "Classes.h"
#include <cmath>


Vector::Vector()
{
    x = 0;
    y = 0;
}


Vector::Vector(float x_in, float y_in)
{
    x = x_in;
    y = y_in;
}


Vector::Vector(const Vector& v)
{
    x = v.x;
    y = v.y;
}


Vector::~Vector()
{
    cout << "deleted vector" << endl;
}


float Vector::getX()
{
    return x;
}


float Vector::getY()
{
    return y;
}


void Vector::changeX(float x_in)
{
    x = x_in;
}


void Vector::changeY(float y_in)
{
    x = y_in;
}


ostream& operator<< (ostream& out, const Vector& vector)
{
    out << '(' << vector.x << ',' << vector.y << ')';
    return out;
}



Vector Vector::operator +(const Vector& other)
{
    return Vector((this->x + other.x), (this->y + other.y));
}


Vector Vector::operator -(const Vector& other)
{
    return Vector((this->x - other.x), (this->y - other.y));
}



Complex::Complex()
{
    real = 0;
    imaginary = 0;
}


Complex::Complex(const Complex& v)
{
    real = v.real;
    imaginary = v.imaginary;
}


Complex::Complex(float real_num, float imaginary_num)
{
    real = real_num;
    imaginary = imaginary_num;
}


Complex::~Complex()
{
    cout << "deleted complex" << endl;
}


float Complex::module()
{
    return sqrt((this->real * this->real + this->imaginary * this->imaginary));
}



ostream& operator<< (ostream& out, const Complex& complex)
{
    char temp;
    float temp_imaginary;
    if (complex.imaginary < 0) {
        temp = '-';
        temp_imaginary = abs(complex.imaginary);
    }
    else {
        temp = '+';
        temp_imaginary = complex.imaginary;
    }
    out << complex.real << ' ' << temp << ' ' << temp_imaginary << " * i";
    return out;

}


Complex Complex::operator +(const Complex& other)
{
    Complex temp(0, 0);
    temp.real = this->real + other.real;
    temp.imaginary = this->imaginary + other.imaginary;
    return temp;
}



Complex Complex::operator -(const Complex& other)
{
    Complex temp(0, 0);
    temp.real = this->real - other.real;
    temp.imaginary = this->imaginary - other.imaginary;
    return temp;

}


Complex Complex::operator /(const Complex& other)
{
    if (other.real == 0 || other.imaginary) {
        return Complex(this->real, this->imaginary);
    }
    Complex temp(0, 0);
    temp.real = (this->real * other.real + this->imaginary * other.imaginary) /
        (other.real * other.real + other.imaginary * other.imaginary);
    temp.imaginary = (other.real * this->imaginary - this->real * other.imaginary) /

        (other.real * other.real + other.imaginary * other.imaginary);
    return temp;
}


Complex Complex::operator *(const Complex& other)
{
    Complex temp(0, 0);
    temp.real = this->real * other.real - this->imaginary * other.imaginary;
    temp.imaginary = this->real * other.imaginary + other.real * this->imaginary;
    return temp;
}


Circle::Circle()
{
    r = 1;
}


Circle::Circle(float r_in)
{
    r = r_in;
}


Circle::Circle(const Circle& v)
{
    r = v.r;
}


Circle::~Circle()
{
    cout << "deleted circle" << endl;
}


float Circle::getSquare()
{
    return (M_PI * pow(this->r, 2));
}


float Circle::getLength()
{
    return (2 * M_PI * this->r);
}


float Circle::getRadius()
{
    return r;
}


ostream& operator<< (ostream& out, const Circle& circle)
{
    out << "Circle with radius - " << circle.r;
    return out;
}