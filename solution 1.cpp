#include <bits/stdc++.h>

using namespace std;

int main() {
    /*
     * declare numerator and denominator as integers
     */
    int numerator, denominator; 

    /*
     * read the numerator and denominator from the input
     */
    cin >> numerator >> denominator; 

    /*
     * calculate the greatest common divisor of the numerator and denominator
     */
    int gcd = __gcd(numerator, denominator);

    /*
     * divide the numerator and denominator by the greatest common divisor
     */
    numerator /= gcd;
    denominator /= gcd;

    /*
     * output the simplified fraction
     */
    cout << numerator << "/" << denominator << '\n';
}

