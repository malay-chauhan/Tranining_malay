#include <iostream>
using namespace std;

//base class;

class employee{
    public:
    int id;
    float salary;
    employee(int inpid)
    {
        id=inpid;
        salary=34.0; 
    }
    employee(){}


};

class Programmer : public employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    employee malay(1), rohan(2);
    cout << malay.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}