#include<iostream>
using namespace std;
inline int product(int a, int b){
    // not recommended to use below lines with inline function
//static int c=0; // this executes only once
//c= c + 1;       // next time this function is run, the value of c will  be retained
    //return a*b+;
    return a*b;
}
float moneyreceived(int currentmoney, float factor=1.04){
return currentmoney * factor;
}


int main(){
   /* int a, b;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    cout<<"the product if a and b is"<<product(a,b)<<endl;
    cout<<"the product if a and b is"<<product(a,b)<<endl;
    cout<<"the product if a and b is"<<product(a,b)<<endl;
    cout<<"the product if a and b is"<<product(a,b)<<endl; */
  
  int money = 100000;
  cout<<"if you have "<<money<<" rs in your bank account, you will receive" <<moneyreceived(money)<< "rs after 1 year"<<endl;
 cout<<"for vip: if you have "<<money<<" rs in your bank account, you will receive" <<moneyreceived(money, 1.1)<< "rs after 1 year";
  
    return 0;
}