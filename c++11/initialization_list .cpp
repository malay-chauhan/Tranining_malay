#include<iostream>
using namespace std;
class base 
{
    int x;
    int y;
    public:
    base {int a,int z}:x={a},y={z}  {}
    void print() { cout << x << " " << y << endl; }
}; 
int main()
{
    base b(300,100);
    b.print ();

return 0;
}
