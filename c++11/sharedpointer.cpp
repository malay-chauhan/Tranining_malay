#include<iostream>
#include <memory>
using namespace std;

class malay
{
    int x;
    public:
    malay (int x):x{x} {}
    int getx() {return x;}
    
    ~malay() {cout << "~ malay " << endl;}

};

int main()
{
std::shared_ptr<malay> sp(new malay(100));
  cout << sp->getx() << endl;
  cout << sp.use_count () << endl;
  std::shared_ptr<malay> spl=sp;
  cout << sp.use_count () << endl;
  cout << sp.use_count () << endl;
  
return 0;
}
