#include<iostream>
using namespace std;

/*  syntax for inheriting in multiple inheritance
    class derivedC: visibility-mode base1, visibility-mode base2
    {
        class body of class "derivedC"
    };    */


class base1{
    protected:
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};

class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int a){
        base2int = a;
    }
};

class derived : public base1, public base2
{
    public:
    void show(){
        cout<<"the value of base1 is " <<base1int<<endl;
        cout<<"the value of base2 is " <<base2int<<endl;
        cout<<"the sum of these value is " <<base1int + base1int<<endl;
    }
};

/*  the inherited derived class will look something like this:
    data member----
         base1int---> protected
        base2int----> protected 
    member function-------
        set_base1int()----> public
        set_base2int()-----> public
        set_show()--------> public   */

int main(){
  derived rahul;
  rahul.set_base1int(25);
  rahul.set_base2int(30);
  rahul.show();  
    return 0;
}