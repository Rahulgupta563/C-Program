/* Question no 1----

 create 2 class-----
   1. simplacalculator - takes input 2 numbers using a utility function and performs +, -, *, /,
      and displays the results using another function
   2. scientificcalculator - takes input 2 numbers using a utility function and performs any four 
      scientific operation of your choice and displays results using another function

   create another classes hybridcalculator and inherit it using these 2 classes:
   Q1. what type of inheritance are you using? ---- multiple inheritance
   Q2. which mode of inheritance are you using? ---- public simplacalcuator, public scientificcalcuator
   Q3. create an object of hybridcalculator and display results of simple and scientific calculator.
   Q4. how is code reusability implemented?
   */   




#include<iostream>
#include<math.h>
using namespace std;

class simplacalcuator{
    int a, b;
    public:
    void getdatasimple(){
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
    void performoperationssimple(){
        cout<<"the value of a + b is:"<<a + b<<endl;
        cout<<"the value of a - b is:"<<a - b<<endl;
        cout<<"the value of a * b is:"<<a * b<<endl;
        cout<<"the value of a / b is:"<<a / b<<endl;
    }

};

class scientificcalcuator{
     int a, b;
    public:
    void getdatascientific(){
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
    }
    void performoperationsscientific(){
        cout<<"the value of cos(a) is:"<<cos(a)<<endl;
        cout<<"the value of sin(a) is:"<<sin(a)<<endl;
        cout<<"the value of exp(a) is:"<<exp(a)<<endl;
        cout<<"the value of tan(a) is:"<<tan(a)<<endl;
    }


};
class hybridcalculator : public simplacalcuator, public scientificcalcuator{


};
int main(){
  /*  simplacalcuator calc;
    scientificcalcuator calc;
    calc.getdata();
    calc.performoperations();   */

    hybridcalculator calc;
    calc.getdatascientific();
    calc.performoperationsscientific();
    calc.getdatasimple();
    calc.performoperationssimple();

    return 0;
}