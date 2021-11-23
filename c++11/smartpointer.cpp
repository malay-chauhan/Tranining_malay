#include<iostream>
using namespace std;

class sp 
{
    public:
    explicit sp(int *p=nullptr) { data = p;}

    ~sp() {delete data;}
    int& operator *() {return *data;}
    private:
     int *data;

};

int main()
{
    int*p=new int{10};
    sp myint=sp(p);
    cout << *myint <<endl;
return 0;
}
