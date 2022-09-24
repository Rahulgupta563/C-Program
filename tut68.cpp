#include<iostream>
using namespace std;

template<class T>
class rahul{
    public:
    T data;
    rahul(T a){
        data = a;
    }
    void display();
};

template <class T>
void rahul<T>:: display(){
    cout<<data;
}
void func(int a){
    cout<<"i am first func() "<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"i am templateized func() "<<a<<endl;
}

int main(){
   // rahul<float>r(5.2);
  // rahul<char>r('f');
 /*  rahul<int>r(5);
    cout<<r.data<<endl;
    r.display();    */

func(4); // exact match takes the highest priority
func1(4);
    return 0;
}