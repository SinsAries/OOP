#include <bits/stdc++.h>

using namespace std;

class Date {
    int day, month, year;
public:
    /*
     * Constructor with default values
     */
    Date(int day = 5, int month = 4, int year = 2005) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    /*
     * Read the date from the input
     */
    void input() {
        cin >> day >> month >> year;
    }

    /*
     * Output the date
     */
    void print() const {
        if(day < 10)
            cout << '0';
        cout << day << '/';
        if(month < 10)
            cout << '0';
        cout << month << '/' << year;
    }

    /*
     * Calculate next day
     */
    Date nextDay() const {
        int nextDay = day + 1;
        int nextMonth = month;
        int nextYear = year;
        if(month == 2) {
            if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                if(nextDay == 30) {
                    nextDay = 1;
                    nextMonth++;
                }
            } else {
                if(nextDay == 29) {
                    nextDay = 1;
                    nextMonth++;
                }
            }
        } else if(month == 4 || month == 6 || month == 9 || month == 11) {
            if(nextDay == 31) {
                nextDay = 1;
                nextMonth++;
            }
        } else {
            if(nextDay == 32) {
                nextDay = 1;
                nextMonth++;
            }
        }

        if(nextMonth == 13) {
            nextMonth = 1;
            nextYear++;
        }
        return Date(nextDay, nextMonth, nextYear);
    }
};

int main() {
    Date date;
    date.input();
    date.nextDay().print();
    return 0;
}