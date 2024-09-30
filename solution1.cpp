#include <bits/stdc++.h>

using namespace std;

int main() {
    /*
     * declare numerator and denominator as integers
     */
    int numerator, denominator = 0; 

    /*
     * read the numerator and denominator from the input
     */
    cout << "Nhap vao tu so: ";
    cin >> numerator;
    cout << "Nhap vao mau so khac 0: ";
    cin >> denominator;
    while (denominator == 0) {
        cout << "Error: Mau so khong duoc bang 0. Nhap lai mau so: ";
        cin >> denominator;
    }

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
    cout << "Phan so toi gian: ";
    cout << numerator << "/" << denominator << '\n';
}

