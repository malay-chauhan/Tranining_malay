#include <iostream>
using namespace std;
struct Base
{
    virtual void foo();
};
 
struct A : Base
{
    void foo() final; 
    void bar() final;
};
 
struct B final : A 
{
    void foo() override; 
};
 
struct C : B //  B is final
{
};