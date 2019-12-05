#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test01()
{
    vector<int> v;
    for(int i = 0; i <7;i++)
    {
        v.push_back(i);
    }

    reverse(v.begin(),v.end());

    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    test01();
    return 0;
}
