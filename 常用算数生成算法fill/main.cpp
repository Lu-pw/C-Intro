#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

void test01()
{
    vector<int> v;

    for(int i = 0;i < 7;i ++)
    {
        v.push_back(i);
    }

    //后期重新填充
    fill(v.begin(),v.end(),1000);
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout <<  *it << " ";
    }
    cout << endl;
}

int main()
{
    test01();
}
