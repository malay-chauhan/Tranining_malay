#include <iostream>
#include <map>
#include <string>

using namespace std;

int main ()
{
    map<string,int> marksmap;
    marksmap["malay"]=78;
    marksmap["sagar"]=87;
    marksmap["ajay"]=99;
    marksmap["rohit"]=34;
    marksmap["bhikhu"]=55;

    map<string,int> ::  iterator iter;

    for(iter=marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }

    return 0;
}