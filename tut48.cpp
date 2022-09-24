#include<iostream>
using namespace std;
/*
case1:
class b: public a{
    // order ef execution of constructer ----> first a() then b()
};

case2:
class a: public b, public c{
    // order ef execution of constructer ---->  first b() the c()
};    

case3:
class a: public b, virtual public c{
    // order ef execution of constructer ---->  c() then b() ans a()
};
*/

class base1{
    int data1;
    public:
    base1(int i){
        data1 = i;
        cout<<"base1 class constructor called"<<endl;
    }
    void printdatabase1(void){
        cout<<"the value of data1 is "<<data1<<endl;

    }
};

class base2{
     int data2;
    public:
    base2(int i){
        data2 = i;
        cout<<"base2 class constructor called"<<endl;
    }
    void printdatabase2(void){
        cout<<"the value of data2 is "<<data2<<endl;

    }

};
class derived: public base1, public base2{
    int derived1, derived2;
    public:
    derived(int a, int b, int c, int d): base1(a), base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"derived class constructor called "<<endl;
    }
    void printdataderived(void){
        cout<<"the value of derived1 is "<<derived1<<endl;
        cout<<"the value of derived2 is "<<derived2<<endl;

    }

};
int main(){
    derived rahul(1, 2, 3, 4);
    rahul.printdatabase1();
    rahul.printdatabase2();
    rahul.printdataderived();
    return 0;
}