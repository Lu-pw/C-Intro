#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <time.h>
using namespace std;

void test01()
{
    //记得加随机数种子
    srand((unsigned int)time(NULL));
    vector<int> v;
    for(int i = 0; i <7;i++)
    {
        v.push_back(i);
    }

    random_shuffle(v.begin(),v.end());

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
