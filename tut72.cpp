#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
   cout<<endl; 
};
int main(){
    // 6 8 9 

    list<int> list1; // list of 0 lenght
   list1.push_back(5);
   list1.push_back(9);
   list1.push_back(7);
   list1.push_back(3);
   list1.push_back(1);
   display(list1);

// removing elements of the list 

// list1.pop_back();  //last element delete
// display(list1);

// list1.pop_front();   //first element delete
// display(list1);

// list1.remove(7);  // jo likhe wahi remove
// display(list1);

// sorting the list
// list1.sort();
// display(list1);

// reversing the list
list1.reverse();
display(list1);





 /*  list<int> :: iterator iter;
   iter = list1.begin();
   cout<< *iter<<" ";
   iter++;
   cout<<*iter<<" ";
   iter++;
   cout<<*iter<<" ";
   iter++;
   cout<<*iter<<" ";
   iter++;
   cout<<*iter<<" ";      */


 
list<int> list2(3); // empty list of size 7
list<int> :: iterator iter;
iter = list2.begin();
*iter = 4;
iter++;
*iter = 41;
iter++;
*iter = 14;
iter++;
display(list2);

list1.sort();
list2.sort();
list1.merge(list2);
cout<<"list 1 after marging: ";
display(list1);


    return 0;
}