#include<iostream>
using namespace std;

class complex
{
    int a, b;
    public:

    complex(int x, int y);  // constructure declaration 

    void printnumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;

    }
};
complex :: complex(int x, int y){  // this is a parameterized  constructer as it takes 2 parameter;
    a = x;
    b = y;
}

int main(){
    // implicit call                                                                                     
    complex a(4, 6);

    // explicit call
    complex b(5, 7);

    
    a.printnumber();                                                                                                                                                     
    b.printnumber();
    return 0;
}