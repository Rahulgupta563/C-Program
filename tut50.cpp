#include<iostream>
using namespace std;

int main(){
    // basic example
    int a = 4;
    int* ptr = &a;
   // *ptr = 999;

    cout<<"the value of a is "<<*(ptr)<<endl;

    // new keyword
  //  int *p = new int(40);
    float *p = new float(40.78);
    cout<<"the value at address p is "<< *(p) <<endl;

// new operator
    int *arr = new int[3];
    arr[1] = 10;
   // arr[2] = 20;
    *(arr+2) = 20;
    arr[3] = 30;
  //  delete[] arr;
    cout<<"the value of arr[1] is "<< arr[1] <<endl;
    cout<<"the value of arr[2] is "<< arr[2] <<endl;
    cout<<"the value of arr[3] is "<< arr[3] <<endl;

    // delete operator
    //delete[] arr;

    return 0;
}