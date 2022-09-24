#include<iostream>
#include<vector>
using namespace std;

template<class T>

void display(vector<T> &v){
    cout<<"displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
     //   cout<<v.at(i)<< " ";

    }
    cout<<endl;
}
int main(){
    // way to create a vector
     vector<int> vec1;  // zero length integer vector
     
     int element, size=5;
    /*
     
     cout<<"enter the size your vector"<<endl;
     cin>>size;

     for (int i = 0; i < size; i++)
     {
        cout<<"enter an element to add to this vetor";
        cin>>element;
        vec1.push_back(element);
     }
     // vec1.pop_back();
     display (vec1);
     vector<int> :: iterator iter = vec1.begin();
     // vec1.insert(iter, 566);
     // vec1.insert(iter+1, 566);
     vec1.insert(iter+1,5,  566);
     display (vec1);

     */

    vector<char> vec2(4); //1-element character vector
     vec2.push_back('5'); 
     display(vec2);

     /* vector<char> vec3(vec2); //4-element character vector from vec2
     display(vec3); */

     vector<int> vec4(4, 3);  // 6-element vector of 3s
     display(vec4);
     cout<<vec4.size();






    return 0;
}