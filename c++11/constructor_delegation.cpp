#include<iostream>
using namespace std;

class a
{
    int x,y,z;
    public :
    a()
    {
        x=0;
        y=0;
        z=0;
    }
    a (int z)
    {
        x=0;
        y=0;
        this->z=z;

    }
    void show ()
    {
        cout << x << '\n'
          << y << '\n'
           << z  ;

    }

};
int main()
{
    a obj(5);
    obj.show();
    return 0;
}