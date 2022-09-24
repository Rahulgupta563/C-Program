#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    private:
    int b;

};
/*
                         public derivation   private derivation    protected derivation 
   1. private members-     not inherited       not inherited        not inherited
   2. protected members-   protected            private               protected
   3. public members-      public               private               protected

*/
class derived: protected base{

};

int main(){
    base b;
    derived d;
    cout<<d.a;   // will not work since a is protected in both base as well as derived class 
    return 0;
}