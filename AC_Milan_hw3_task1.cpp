#include <iostream>
using namespace std;

// Define class date
class Date
{
// Set variables
private:
    int month, day, year;
public:
    void setDate(int m, int d, int y)
    {
        int month = m;
        int day = d;
        int year = y;
    }
    // Get user input
    void getDate()
    {
        char tempchar;
        cout << "\nEnter a date (format 12/31/99): " << endl;
        cin >> month >> tempchar >> day >> tempchar >> year;
    }
    // Display information
    void showDate()
    {
       cout << month << "/" << day << "/" << year;
    }
};

// Main program
int main()
{
    // Create an instance of the class
    Date d1, d2;

    // Set, get, and show first date from user
    d1.setDate(0, 0, 0);
    d1.getDate();
    cout << "Date 1: ";
    d1.showDate();

    // Set, get, and show second date from user
    d2.setDate(0, 0, 0);
    d2.getDate();
    cout << "Date 2: ";
    d2.showDate();

    return 0;
}