#include<iostream> 
#include<cstring>

using namespace std;

class code_with_harry
{
   protected:
   string title;
   float rating;
   public:
   code_with_harry(string s , float r)
   {
      title = s;
      rating = r;
   }
   virtual void display() = 0; // Do nothing function ---> PURE VIRTUAL FUNCTION
   /* **   Pure virtual function  say that "you have to overright I'm not perform myself".
      **  pure virtual function is necessary for creation of "ABSTRACT BASE CLASS".
      **  ABC ---> a class which is made as a base class and not creat any object or not perform any operation within it
          is called Abstract Base Class  
   */
 

};

class CWH_Video : public code_with_harry 
{
  float videolength;
  public :
    CWH_Video(string s , float r , int vl) : code_with_harry(s , r) , videolength(vl)
     { }
   void display()
   {
    cout<<"This is an amazing video --->  "<<title<<endl;
    cout<<"Ratings :  "<<rating<<" out of 5 star"<<endl;
    cout<<"Length of this video is  "<<videolength<<" minuts."<<endl;
   }
};

class CWH_word : public code_with_harry 
{
  int wordlength;
  public :
    CWH_word(string s , float r , int wl) : code_with_harry(s , r) , wordlength(wl)
     { }
      void display()
   {
    cout<<"This is an amazing text tutorial --->  "<<title<<endl;
    cout<<"Ratings of this text tutorial is  :  "<<rating<<" out of 5 star"<<endl;
    cout<<"Number of words in this video is  "<<wordlength<<endl;
   }
   
};
int main()
{
    string title;
    int words;
    float rating , vid_len;
   
   // for Video
   title = "Jay Shree Ram";
   vid_len = 5.6;
   rating = 4.50;

   CWH_Video obj_vid(title,rating,vid_len);
   CWH_Video *ptr_vid = &obj_vid;
   //ptr_vid->display();
   //obj_vid.display();

   // CWH text 
   title = "Har Har Mahadev";
    rating = 4.3;
   words = 9999;
   CWH_word obj_text(title,rating,words);
   CWH_word *ptr_text = & obj_text;
   //ptr_text->display();
   code_with_harry *ptr[2];
   ptr[0] = &obj_vid;
   ptr[1] = &obj_text;

   ptr[0] ->display();
   ptr[1] ->display();
  return 0;
}

//  Rules 
/*
   1. They cannot be static.
   2. They are only accessed by object pointer.
   3. Virtual function can be a friend of another class.
   4. A virtual function in a base class might not be used.
   5. If a virtual function is defined in a base class , there is no necessity of 
       redefining it in the derived class.----> base class function called if not define   
*/