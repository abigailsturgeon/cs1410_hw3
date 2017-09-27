#include <iostream>

using namespace std;

class serial
{
private:
    int num;
    static int count;
public:
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

void ShowCount(serial s1);

int main()
{
    serial alpha;
    ShowCount(alpha);
    serial beta;
    ShowCount(beta);
    serial gamma;
    ShowCount(gamma);


    return 0;

}

// Function Definitions
void ShowCount(serial s1)
{
    cout << "I am object number " << s1.getCount() << endl;
}