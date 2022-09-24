#include<iostream>
using namespace std;
/*
student--- test
studetn--- sports
test---- result
sports--- result
*/

class student{
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no = a;
    }
    void print_number(void){
        cout<<"your roll no is "<< roll_no<<endl;
    }
};
class test : virtual public student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(void){
        cout<<"you result is here:"<<endl 
            << "maths: "<< maths<<endl
            << "physics: "<<physics<<endl;
    }
};

class sports: virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout<<"your pt score is "<<score<<endl;
    }

};

class result : public test, public sports{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is: "<<total<<endl;
    }


};
int main(){
    result rahul;
    rahul.set_number(4200);
    rahul.set_marks(78.9, 99.5);
    rahul.set_score(9);
    rahul.display();
    
    return 0;
}