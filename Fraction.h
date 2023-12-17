#include <iostream>

class Fraction {
private:
    int numerator;   
    int denominator; 

public:
    Fraction();

    Fraction(int num, int denom);

    void input();

    void display() const;

    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;

    static int findCommonDenominator(int denom1, int denom2);
};