#include <iostream>
using namespace std;
// base class
class employee
{
   

public:
     int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    employee(){}
};
// derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc
}
*/
// note.......
/// 1.  default visibility mode is private

//   2. private visibility mode: public members of the base class becomes private member of the derived class
 //     
//   3. public visibility mode: public members of the base class becomes public member of the derived class
 //     
//   4. private member are never inherited

// creating a programmer class derived from employee base class

class programmer : employee{
    public:
    programmer(int intid){
        id = intid;
    }
    int languagecode = 9;
    void getdata(){
        cout<<id<<endl;
    }
};


int main()
{
    employee rahul(1), rohan(2);
    cout << rahul.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    return 0;
}