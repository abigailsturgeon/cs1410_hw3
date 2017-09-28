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

    cout<<"Enter a date (format 12/31/2007):"<<endl;
    d1.setDate(0, 0, 0);
    d1.getDate();


    cout<<"Enter another date:"<<endl;
    d2.setDate(0, 0, 0);
    d2.getDate();

    cout << "Date 1: ";
    d1.showDate();
    cout << "\nDate 2: ";
    d2.showDate();

    return 0;
}