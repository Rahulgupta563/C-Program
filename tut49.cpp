#include <iostream>
using namespace std;
/*
syntax for initilization lists in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
class test{
    int a;
    int b;
    public:
        test(int i, int j) : a(i), b(j){constructor _ body}
};
*/
class test
    {
        int a;
        int b;

    public:
        test(int i, int j) : a(i), b(j)
       // test(int i, int j) : a(i), b(i+j)
       // test(int i, int j) : a(i), b(10*j)
      // test(int i, int j) : a(i), b(a + j)
      // test(int i, int j) :  b(j), a(i + b) ----> red flag this will create problrms becouse a will be initilized value

        { 
             cout << "constructer execution"<<endl;
             cout<<"value of a is "<<a<<endl;
             cout<<"value of b is "<<b<<endl;
        }
    };

int main()
{
    test t(4, 6);
    return 0;
}