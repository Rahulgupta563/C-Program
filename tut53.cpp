#include<iostream>
using namespace std;
class a{
    int a;
    public:
    // a & setdata(int a){
    void setdata(int a){
        this->a = a;
        // return *this
    }
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
    }
};
int main(){

// this is a keyword which is a pointer which points to the object which invokes the member function

    a a;
    a.setdata(4);
    
    a.getdata();
    return 0;
}