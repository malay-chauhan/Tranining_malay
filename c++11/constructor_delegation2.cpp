#include <iostream>

class Foo
{
private:
    int m_a{ 5 };
    int m_b{ 6 };


public:
    Foo()
    {
    }

    Foo(int a, int b)
        : m_a{ a }, m_b{ b }
    {
    }

    void print()
    {
        std::cout << m_a << ' ' << m_b << '\n';
    }

    void reset()
    {
        *this = Foo(); // create new Foo object, then use assignment to overwrite our implicit object
    }
};

int main()
{
    Foo a{ 1, 2 };
    a.reset();

    a.print();

    return 0;
}