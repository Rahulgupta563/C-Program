#include <iostream>
#include<fstream>

/*
the useful classes for working with files in c++ are:
1. fstreambase
2. ifstream---> derived for fstreamebase
3. ofstream---> derived for fstreamebase
*/
/*
in order work the file in c++, you will have to open it. there are 2 ways to open a file:
1. using the Constructor
2. using the member function open() of the class 
*/


using namespace std;


int main()
{

string st = "rahul bhai";
string st2;


// opening files using constructor and writing it

//ofstream out("simple60.txt"); // write operation
// out<<st;


// opening files using constructor and reading0 it
ifstream in("simple60b.txt"); // read operation
// in>>st2;
getline(in, st2);
cout<<st2;
    return 0;
}