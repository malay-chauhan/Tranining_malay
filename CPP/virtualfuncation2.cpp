#include <iostream>
using namespace std;

class cplusplus 
{
    protected:
        string title;
        float rating;
    public:
        cplusplus (string s, float r);
        {
            title=s;
            rating=r;
        }
        virtual void display(){}
};
 
class cplusplusVideo: public cplusplus
 {
     float videolength;
     public:
     cplusplus video (string s, float r float vl): cplusplus (s,r)
     {
         videolength=v1;
     }
 }
 void display ()
 {
     cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
 }
 };

 class cplusplus text : public cplusplus 
 {
     int words;
     public:
     cplusplus text(string s, float r, int wc):(s,r)
     {
         words=wc;
     }
     void display ()
     {
         cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
     }
 };

 int main()
     {
         string title;
         float rating,vlen;
         int words;

         title="amazing tutorial";
         vlen=55.7;
         rating=44.6;
         cplusplus atvideo (title,rating,vlen);

         title="amazing tutorial text";
         words=500;
         rating=77.9
         cplusplus attext (title,word,rating); 

         cplusplus *tuts[2]
         tuts[0] = &cpvideo;
         tuts[1] = &cptext;

         tuts[0]->display();
         tuts[1]->display();
         return 0;
     }


     }
 
