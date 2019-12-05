#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVector(vector<int>& v)
{
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
        cout << *it << " ";
    cout << endl;
}

class biger
{
    public:
    bool operator()(int v1,int v2)
    {
        return v1 > v2;
    }
};

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(60);

    sort(v.begin(),v.end());
    printVector(v);

    //使用函数对象，改变算法策略，变排序规则为由大到小
    sort(v.begin(),v.end(),biger());
    printVector(v);
}

int main()
{
    test01();
    return 0;
}
