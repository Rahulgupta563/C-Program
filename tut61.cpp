#include<iostream>
#include<fstream>


using namespace std;

int main(){
    // connectiong our file with rout stream
    ofstream rout("simple60.txt");

    // creating a name string anf filing it with th string entersd by the user
    cout<<"enter your number";
    string name;
    cin>>name;

     // writing a string to the file
    rout<<"my name is";

    rout.close();

    ifstream rin("simple60.txt");
    string content;
    rin>>content;
    cout<<"the content of this file is: "<<content;
    rin.close();
    return 0;
}