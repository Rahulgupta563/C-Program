#include <iostream>
using namespace std;

class complex
{
    int a, b;
    public:

    // creating the constructor
    // constructure is a specail member function with the same name as of the class, 
    // it is used to initializ the object of its class ;
    // it is automatically invoked whenever an object is created
    complex(void);  // constructure declaration 

    void printnumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;

    }
};

complex :: complex(void){  // this is a default constructer as it accept on parameter;
    a = 10;
    b = 0;
}


int main()
{
complex c;
c.printnumber();

    return 0;
}

/* properties of constructure;

1. it should be declered in the invoke in the public section of the class
2. they are automatically invoked whenever the object is created 
3. they can not return value and do not havr return types
4. they can have defult arguments 
5. we cannot refer to their address */