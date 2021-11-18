#include <iostream>
using namespace std;

float funcavg (int a,int b)
{
    float avg=(a+b)/2.0;
    return avg;
}

int main ()
{
    float a;
    a = funcavg(9,2);
    printf("the avg of this num is %f",a);
    return 0;
    

}