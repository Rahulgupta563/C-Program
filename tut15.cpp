#include<iostream>
using namespace std;

 //function

 /*int sum(int a, int b){
    int c = a+b;
    return c;
}
int main(){
    int num1, num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    cout<<"the sum is "  <<sum(num1, num2);
    return 0;
} */


//function prototype
// type funtion name(arguments);
// int sum (int a, int b); // acceptable
// int sum (int a, b); // not acceptable
int sum (int, int); // acceptable

int main(){
    int num1, num2;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"the sum is "  <<sum(num1, num2);
    return 0;
}

int sum(int a, int b){
    // formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;
    return c;
    }