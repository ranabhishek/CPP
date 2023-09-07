#include<iostream>
#include<cstring>
using namespace std;


class cwh
{
    protected:
    string title;
    float rating;
    public:
    cwh(string s,float r)
    {
        title=s;
        rating=r;
    }
    virtual void display()
    {
        
    }
};

class cwh_video : public cwh
{
    float video_length;
    public:
    cwh_video(string s,float r,float vl):cwh(s,r)
    {
        video_length=vl;
    }
    void display()
    {
        cout<<"this is an amazing video :: "<<title<<endl;
        cout<<"ratings :: "<<rating<<endl;
        cout<<"length of this video :: "<<video_length<<"minutes"<<endl;
    }
};

class cwh_text : public cwh
{
    int word_length;
    public:
    cwh_text(string s,float r,int wl):cwh(s,r)
    {
        word_length=wl;
    }
    void display()
    {
        cout<<"this is an amazing text :: "<<title<<endl;
        cout<<"ratings :: "<<rating<<endl;
        cout<<"length of this words :: "<<word_length<<endl;
    }
};


int main()
{
    string title=new char[30];
    float rating,vlen;
    int words;

    title="Django tutorial";
    vlen=4.36;
    rating=4.89;
    cwh_video DjVideo(title,rating,vlen);
    //DjVideo.display();

    //for cwh text
    title="Django tutorial text";
    words=213;
    rating=1.3;
    cwh_text Djtext(title,rating,words);
    Djtext.display();

    cwh *tuts[2];
    tuts[0]=&DjVideo;
    tuts[1]=&Djtext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
/*rules for virtual functions:

cannot be static
accessed by object pointers
can be a friend function of another class 
virtual function in base class might not be used
virtual function defined in a base class, there is no necessity of redifining it in the derived class.
 */