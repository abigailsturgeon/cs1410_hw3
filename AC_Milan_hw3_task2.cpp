#include <iostream>
using namespace std;

//Define class date
class Date
{
//Set variables
private:
    int month, day, year;
public:
    void setDate(int m, int d, int y)
    {
        int month = m;
        int day = d;
        int year = y;
    }
    //Get user input
    void getDate()
    {
        char tempchar;
        cin >> month >> tempchar >> day >> tempchar >> year;
    }
    //Display Information
    void showDate()
    {
        cout << month << "/" << day << "/" << year;
    }
};
//Main program
int main()
{
    //Create two instances of the class
    Date d1, d2;

    //set, get, first date
    cout<<"Enter a date (format 12/31/2007):"<<endl;
    d1.setDate(0, 0, 0);
    d1.getDate();

    //set, get second date
    cout<<"Enter another date:"<<endl;
    d2.setDate(0, 0, 0);
    d2.getDate();

    //Show dates
    cout << "Date 1: ";
    d1.showDate();
    cout << "\nDate 2: ";
    d2.showDate();

    return 0;
}