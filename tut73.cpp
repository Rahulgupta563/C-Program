#include<iostream>
#include<map>
#include<string>
using namespace std;

// map is an associative array


int main(){
    map<string, int>marksmap;
    marksmap["rahul"] = 98;
    marksmap["chhaya"] = 56;
    marksmap["aarav"] = 86;
    marksmap["trishaya"] = 45;

marksmap.insert({{"vikash", 169}, {"purab", 187}});

    map<string, int> :: iterator iter;
    for (iter=marksmap.begin(); iter!=marksmap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
cout<<"the size is: "<<marksmap.size()<<endl;
cout<<"the max size is: "<<marksmap.max_size()<<endl;
cout<<"the empty's return value is: "<<marksmap.empty()<<endl;

    return 0;
}