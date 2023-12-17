#include "fraction.h"

int main() {
    
    Fraction fraction1, fraction2;

    
    std::cout << "Enter data for the first fraction:\n";
    fraction1.input();

    
    std::cout << "\nEnter data for the second fraction:\n";
    fraction2.input();

    std::cout << "\nFirst Fraction: ";
    fraction1.display();
    std::cout << "\nSecond Fraction: ";
    fraction2.display();

    Fraction sum = fraction1.add(fraction2);
    Fraction difference = fraction1.subtract(fraction2);
    Fraction product = fraction1.multiply(fraction2);
    Fraction quotient = fraction1.divide(fraction2);

    std::cout << "\n\nSum: ";
    sum.display();
    std::cout << "\nDifference: ";
    difference.display();
    std::cout << "\nProduct: ";
    product.display();
    std::cout << "\nQuotient: ";
    quotient.display();
    std::cout << std::endl;

    return 0;
}