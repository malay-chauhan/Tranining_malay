// C++ program to show comparisons with nullptr
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	nullptr_t np1, np2;

	// <= and >= comparison always return true
	if (np1 == np2)
		cout << "can compare" << endl;
	else
		cout << "can not compare" << endl;

	// Initialize a pointer with value equal to np1
	char *x = np1; // same as x = nullptr (or x = NULL
					// will also work)
	if (x == nullptr)
		cout << "x is null" << endl;
	else
		cout << "x is not null" << endl;

	return 0;
}
