#include<iostream>
using namespace std;

int main(){
    // array examples 

    int marks[] = {23, 45, 56, 89};
    int mathmarks[4];
    mathmarks[0] = 2267;
mathmarks[1] = 29267;
mathmarks[2] = 22677;
mathmarks[3] = 27267;

cout<<"these are the math marks"<<endl;
cout<<mathmarks[0]<<endl;
cout<<mathmarks[1]<<endl;
cout<<mathmarks[2]<<endl;
cout<<mathmarks[3]<<endl;



marks[2]=455;
 // you can change the value of an array
cout<<"these are marks"<<endl;
  //  cout<<marks[0]<<endl;
  //  cout<<marks[1]<<endl;
  //  cout<<marks[2]<<endl;
  //  cout<<marks[3]<<endl;

for (int i = 0; i < 4; i++)
{
    cout<<"the value of marks" <<i<<"is "<<marks[i]<<endl;
}

// pointer and arrays

int* p = marks;
cout<<"the value of *p is"<<*p;
cout<<"the value of *(p+1) is"<<*(p+1);
cout<<"the value of *(p+2) is"<<*(p+2);
cout<<"the value of *(p+3) is"<<*(p+3);
    return 0;

}