#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
complex(){
    a = 0;
    b = 0;                          // defuicult constructer
}

    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x){
        a = x;
        b = 0;                       // two parameters constructer
    }
    void printnumber()                                        // totoal constructure overloading
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1(4, 6);
    c1.printnumber();

    complex c2(5);
    c2.printnumber();

    complex c3;
    c3.printnumber();
    return 0;
}