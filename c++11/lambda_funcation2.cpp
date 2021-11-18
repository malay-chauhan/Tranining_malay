#include <iostream>
#include <vector>
using namespace std;
int main()
{
        vector <int> v1  {2,4,5,7,};
        vector <int> v2 {3,5,6,8,9,76};

        auto pushinto = [&] (int m)
        {
            v1.push_back(m);
            v2.push_back(m);
        };
        pushinto (20);

        [v1]()
    {
        for (auto p = v1.begin(); p != v1.end(); p++)
        {
            cout << *p << " ";
        }
    };
  
    int N = 5;

     vector<int>:: iterator p = find_if(v1.begin(), v1.end(), [N](int i)
    {
        return i > N;
    });
  
    cout << "First number greater than 5 is : " << *p << endl;
  
 int count_N = count_if(v1.begin(), v1.end(), [=](int a)
    {
        return (a >= N);
    });
  
    cout << "The number of elements greater than or equal to 5 is : "
         << count_N << endl;

return 0;
}
