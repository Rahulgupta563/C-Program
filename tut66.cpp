#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class rahul
{
public:
    T1 a;
    T2 b;
    T3 c;
    rahul(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};

int main()
{
    rahul<> r(5, 4.8, 'h');
    r.display();
    cout<<endl;

    rahul<float, char, char> p(5.8, 'j', 'k');
    p.display();
    return 0;
}