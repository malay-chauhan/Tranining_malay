#include <iostream>
using namespace std;

template <class t1=int , class t2=float , class t3=char>
class malay 
{
    public:
    t1 a;
    t2 b;
    t3 c;
    malay (t1 x, t2 y , t3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display ()
    {
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;

    }
};

int main()
{
    malay<> m(7 , 2.5, 'm');
    m.display();
    cout << endl;
    malay<float ,char ,char>
    g(1.4,'m', 'n');
    g.display();
    return 0;


}
