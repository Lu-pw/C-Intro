#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
using namespace std;

void test01()
{
    vector<int> v;

    for(int i = 0;i < 7;i ++)
    {
        v.push_back(i);
    }

    int total = accumulate(v.begin(),v.end(),1000);
    cout << "total = " << total << endl;
}

int main()
{
    test01();
}
