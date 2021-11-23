#include<iostream>
#include <memory>
#include <thread>
using namespace std;

class malay
{
    int x;
    public:
    malay (int x):x{x} {}
    int getx() {return x;}
    
    ~malay() {cout << "~ malay " << endl;}

};

void fun(std::shared_ptr <malay> sp)
{
    cout << "fun " << sp.use_count() <<endl;
}
int main()
{
std::shared_ptr<malay> sp(new malay(100));
  thread t1(fun, sp), t2(fun, sp),t3(fun,sp);
  cout << "main" << sp.use_count() << endl;
  t1.join(); t2.join(); t3.join();
return 0;
}
