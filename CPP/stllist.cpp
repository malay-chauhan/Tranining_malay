#include<iostream>
#include<list>
 
using namespace std;
 
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
 
int main(){
    
    list<int> list1;  
     list<int> list2(4);

    list<int> ::iterator it = list2.begin();
    *it = 55;
    it++;

    *it = 66;
    it++;

    *it = 77;
    it++;
    list2.pop_front();
    display (list2);

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
 
   list1.pop_back();
   list1.sort();
    display(list1);
    return 0;
} 