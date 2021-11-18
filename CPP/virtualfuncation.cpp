#include <iostream>
using namespace std;

class baseclass 
{
    public:
    int var_base=1;
    virtual void display ()
    {
        cout<<"1 display the base class variable  var_base "<<var_base<<endl;
    }

};

class derivedclass
{
    public:
    int var_derived=2;
    void display ()
    {
        cout<<"2 display the derived class varivable var_derived"<<var_derived<<endl;
         cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;

    }
};

int main(){
    baseclass * base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}