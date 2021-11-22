#include <iostream>
using namespace std;
 
int main()
{
    enum Gender { Male,
                  Female };

    enum Color { Red,
                 Green };
 

    Gender gender = Male;
    Color color = Red;
 
    if (gender == color)
        cout << "Equal";
 
    return 0;
}