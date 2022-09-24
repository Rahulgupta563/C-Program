#include<iostream>

using namespace std;

int main(){
/*loop in c++:
  there are three types of loops in c++
1. for loop
2. while loop
3. do-while loop   */

/* for loop in c++*/
  //int i=1;
 // cout<<i;
 // i++

// syntax for for loop
// for(initialization; condition; updation)
//{
  //  loop body(c++ code)
// }


 //for (int i = 0; i < 40; i++)
 //{
    /* code */
    // cout<<i<<endl;
 //}

// example of infinite for loop
//for (int i = 0; 34 < 40; i++)
 //{
    /* code */
  //   cout<<i<<endl;
 //}


/* while loop in c++*/
// syntax:
//while (/* condition */)
//{
    /* code */
//}

// printing 1 to 40 using while loop
//int i=1;
//while(i<=40){
  //  cout<<i<<endl;
   // i++;
//}

// example of infinite while loop
//int i=1;
//while(true)
//{
 //   cout<<i<<endl;
   // i++;
//}

 
/* do while loop in c++*/
// syntax:
// do
//{
    // c++ statement;
//}
// while(condition)

// printing 1 to 40 using while loop
int i=1;
do{
    cout<<i<<endl;
    i++;
}while(false);


    return 0;

}