#include <iostream>
using namespace std;

//Define class serial//
class serial
{

private:
    int num;
    static int count;
public:
    //Create constructor
    serial (): num(0)
    {
        count++;
    }
    int getCount()
    {
        return count;
    }
};
int serial:: count = 0;

//Prototype
void ShowCount(serial s1);

//Main program
int main()
{
    //Create 3 intances of the serial class
    serial alpha;
    ShowCount(alpha);
    serial beta;
    ShowCount(beta);
    serial gamma;
    ShowCount(gamma);


    return 0;

}

// Function Definitions to display the number of objects
void ShowCount(serial s1)
{
    cout << "I am object number " << s1.getCount() << endl;
}