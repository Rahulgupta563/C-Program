#include<iostream>
using namespace std;
struct employee
{
    /* data */
    int eid;
    char favchar;
    float salary;
};

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};

int main(){
    enum meal{breakfast, lunch, dinner};
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner<<endl;
   meal m1 = lunch;
   cout<<m1;
   
   /* union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout<<m1.rice;
    
    
    /*struct employee rahul;
    rahul.eid = 1;
    rahul.favchar = 'c';
    rahul.salary = 12000000;
    cout<<"the value is "<<rahul.eid<<endl;
    cout<<"the value is "<<rahul.favchar<<endl;
    cout<<"the value is "<<rahul.salary<<endl;
   */
   
    return 0;
}