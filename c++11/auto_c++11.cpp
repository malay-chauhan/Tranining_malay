#include <iostream>
#include <typeinfo>
using namespace std;

class malay {};
int main()
{
    auto x=20;
    auto y=33.3;
    auto b=  malay();

    cout << typeid(x).name() << endl;
       cout << typeid(y).name() << endl;
           cout << typeid(b).name() << endl;

 
return 0;
}
