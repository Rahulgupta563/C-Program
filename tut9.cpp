#include<iostream>

using namespace std;

int main(){
    //cout<<"this is tutorial 9";
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    
 //  // salection control structure: if else-if else ladder 
  //  if(age<18){
  //      cout<<"you can not come to party"<<endl;    
  //  }
  //  else if(age==18){
 //       cout<<"you are a kid you will get a kid pass to the party"<<endl;    
  //  }
  //  else{
 //       cout<<"you can come to the party"<<endl;

 // }


// salection conrol structure: switch case statement

switch (age)
{
case 18:
    /* code */
    cout<<"you are 18"<<endl;
    break;
 case 22:
    /* code */
    cout<<"you are 22"<<endl;
    break;
case 2:
    /* code */
    cout<<"you are 2"<<endl;
    break;
default:
cout<<"no specail cases"<<endl;
    break;
}

    return 0;

}