#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    // function object (functor): function wrapped in a class so that it available like an object
    
    int arr[] = {1, 13, 5, 17, 8, 90, 66};
   // sort(arr, arr+6);
    sort(arr, arr+7, greater<int>());


    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    
    
    return 0;
}