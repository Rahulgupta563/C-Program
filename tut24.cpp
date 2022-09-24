#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout <<"the id of this employee is" << id<<" and this is employee number"<<count<<endl;
        
    }
};
int employee:: count;  // default value is 0
int main()
{
    employee rahul, aarav, chhaya;

    // rahul.id = 1;
    // rahul.cout=1; // cannot do this as id and count are private

    rahul.setdata();
    rahul.getdata();

    aarav.setdata();
    aarav.getdata();

    chhaya.setdata();
    chhaya.getdata();

    return 0;
}