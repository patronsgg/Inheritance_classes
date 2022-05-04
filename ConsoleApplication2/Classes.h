#pragma once
#include <iostream>
#include <string>

using namespace std;



class Vector
{
private:
    float x, y;
public:
    Vector();
    Vector(float, float);
    Vector(const Vector& v);
    ~Vector();
    float getX();
    float getY();
    void changeX(float);
    void changeY(float);
    friend ostream& operator<< (ostream& out, const Vector& vector);
    Vector operator +(const Vector& other);
    Vector operator -(const Vector& other);
};

class Complex
{
private:
    float real,
        imaginary;
public:
    Complex();
    Complex(float, float);
    Complex(const Complex& v);
    ~Complex();
    float module();
    friend ostream& operator<< (ostream& out, const Complex& complex);
    Complex operator +(const Complex& other);
    Complex operator -(const Complex& other);
    Complex operator /(const Complex& other);
    Complex operator *(const Complex& other);
};



class Circle
{
private:
    float r;
public:
    Circle();
    Circle(float);
    Circle(const Circle& v);
    ~Circle();
    float getSquare();
    float getLength();
    float getRadius();
    friend ostream& operator<< (ostream& out, const Circle& circle);
};