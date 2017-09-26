#include <iostream>
using namespace std;

class Date
{
private:
    int month, day, year;
public:
    void setDate(int m, int d, int y)
    {
        int month = m;
        int day = d;
       int year = y;
    }
    void getDate()
    {
        char tempchar;
        cout << "\nEnter a date (format 12/31/99): " << endl;
        cin >> month >> tempchar >> day >> tempchar >> year;
    }
    void showDate()
    {
       cout << month << "/" << day << "/" << year;
    }
};

int main()
{
    Date d1, d2;
    d1.setDate(0, 0, 0);
    d1.getDate();
    cout << "Date 1: ";
    d1.showDate();

    d2.setDate(0, 0, 0);
    d2.getDate();
    cout << "Date 2: ";
    d2.showDate();
    return 0;
}