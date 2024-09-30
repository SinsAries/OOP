#include <bits/stdc++.h>

using namespace std;

int main() {
    /*
     * declare numerator_1 and denominator_2 as integers
     */
    int numerator_1, denominator_1;
    
    /*
     * read the numerator_1 and denominator_1 from the input
     */
    denominator_1 = 0;
    while (denominator_1 == 0) {
        cout << "Nhap vao tu so va mau so phai khac 0 (cach nhau boi khoang trang): ";
        cin >> numerator_1 >> denominator_1;
    }
    
    /*
     * declare numerator_2 and denominator_2 as integers
     */
    int numerator_2, denominator_2;

    /*
     * read the numerator_2 and denominator_2 from the input
     */
    denominator_2 = 0;
    while (denominator_2 == 0) {
        cout << "Nhap vao tu so va mau so phai khac 0 (cach nhau boi khoang trang): ";
        cin >> numerator_2 >> denominator_2;
    }

    /*
     * compare the two fractions
     * output the fraction with the larger value
     */
    cout << "Phan so lon hon: ";
    if(numerator_1 * denominator_2 > numerator_2 * denominator_1) {
        cout << numerator_1 << "/" << denominator_1;
    } else {
        cout << numerator_2 << "/" << denominator_2;
    }
}
