#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

 int main ()
 {
     std :: vector<int> v{1,2,3,4};
     std :: for_each(v.begin(), v.end() ,[](int n) 
     {
         std:: cout <<n*n << std::endl;
     });
     return 0;
 }




       /*{
           auto f= [] (int num) {return num*2;};
           int d= f(2);
             std :: cout<< d << std :: endl;
            return 0;
       }*/
     
 /*struct doublenum
        {
            int operator () (int num)
            {
                return num*2;
            }        
       };*/

