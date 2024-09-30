#include <bits/stdc++.h>

using namespace std;

class Fraction {
    int numerator, denominator;
public:
    /*
     * Constructor with default values
     */
    Fraction(int numerator = 0, int denominator = 1) {
        this->numerator = numerator;
        this->denominator = denominator;
        simplify();
    }
    
    /*
     * Read the numerator and denominator from the input
     */
    void input() {
        cout << "Nhập tử số và mẫu số (cách nhau bởi khoảng trắng): ";
        cin >> numerator >> denominator;
        simplify();
    }

    /*
     *  Calculate the greatest common divisor of the numerator and denominator
     */
    void simplify() {
        int gcd = __gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
        if (denominator < 0) {  // Ensure the denominator is positive
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    /*
     * Output the simplified fraction
     */
    void print() const {
        cout << numerator << "/" << denominator;
    }

    /*
     * Add current fraction with another fraction
     */
    Fraction operator+(const Fraction &other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    /*
     * Subtract current fraction with another fraction
     */
    Fraction operator-(const Fraction &other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    /*
     * Multiply current fraction with another fraction
     */
    Fraction operator*(const Fraction &other) const {
        int num = numerator * other.numerator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    /*
     * Divide current fraction by another fraction
     */
    Fraction operator/(const Fraction &other) const {
        int num = numerator * other.denominator;
        int den = denominator * other.numerator;
        return Fraction(num, den);
    }
};

int main() {
    /*
     * Declare two fractions
     */
    Fraction f1, f2;
    
    /*
     * Read the numerator and denominator of first fraction from the input
     */
    f1.input();

    /*
     * Read the numerator and denominator of second fraction from the input
     */
    f2.input();
    
    /*
     * Calculate the sum, difference, product, and quotient of the two fractions
     */
    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;
    Fraction prod = f1 * f2;
    Fraction quot = f1 / f2;

    /*
     * Output the sum, difference, product, and quotient of the two fractions
     */
    cout << "Sum: ";
    sum.print();
    cout << '\n';

    cout << "Difference: ";
    diff.print();
    cout << '\n';

    cout << "Product: ";
    prod.print();
    cout << '\n';

    cout << "Quotient: ";
    quot.print();
    cout << '\n';
}