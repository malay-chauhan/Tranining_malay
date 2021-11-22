// C++ code to demonstrate the
// use of defaulted functions
#include <iostream>
using namespace std;

class A {
public:

	// A user-defined
	// parameterized constructor
	A(int x)
	{
		cout << "This is a parameter constructor" <<endl;
	}
	
	// Using the default specifier to instruct
	// the compiler to create the default
	// implementation of the constructor.
	A(){
        cout << "This is a default constructor";
    };
};

int main()
{
	A a;

	A x(1);
	return 0;
}
