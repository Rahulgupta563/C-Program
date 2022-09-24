#include <iostream>
#include <cstring>
using namespace std;
class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title= s;
        rating = r;
    }
    virtual void display()=0; // do-nothing function  ->pure virtual function
     
};

class cwhvideo: public cwh
{
    float videolength;
    public:
    cwhvideo(string s, float r, float vl): cwh(s, r)
    {
        videolength = vl;

    }
    void display(){
        cout<<"this is an amazing with title"<<title<<endl;
        cout<<"rating: "<<rating<<" out of 5 stars"<<endl;
        cout<<"length of this video is: "<<videolength<<" minutes"<<endl;
            }
    
};
class cwhtext: public cwh
{
    int words;
    public:
    cwhtext(string s, float r, int wc): cwh(s, r)
    {
        words = wc;

    }
    void display(){
        cout<<"this is an amazing text tutorial with title"<<title<<endl;
        cout<<"ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
        cout<<"no of words in this text tutorial  is: "<<words<<"words"<<endl;
            }
    
};

int main()
{
    string title; 
    float rating, vlen;
    int words;

    // for code with harry video
    title = "django tutorial";
    vlen = 4.56;
    rating = 4.89;
    cwhvideo djvideo(title, rating, vlen);
   // djvideo.display();

   // for code with harry video
    title = "django tutorial text";
    vlen = 433;
    rating = 4.19;
    cwhtext djtext(title, rating, words);
    //djtext.display();

    cwh* tuts[2];
    tuts[0] = &djvideo; 
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();




    return 0;
}



