#include <iostream>
using namespace std;
template <class T1, class T2>
class myvector
{
public:
    T1 data1;
    T2 data2;
    myvector(T1 x, T2 y)
    {
        data1 = x;
        data2 = y;
    }
    void display()
    {

        cout << this->data1 << this->data2;
    }
};
int main()
{
    myvector<float, char> obj(1.9, 'r');
    obj.display();

    return 0;
}