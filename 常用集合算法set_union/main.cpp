#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test01()
{
    vector<int> v1;
    vector<int> v2;

    for(int i = 0;i < 7;i++)
    {
        v1.push_back(i);
        v2.push_back(i+3);
    }

    vector<int> vTarget;
    //目标容器从两个容器中取大
    vTarget.resize(max(v1.size(),v2.size()));
    vector<int>::iterator ItEnd = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    //使用前面迭代器提供的末尾求得的集合才对
    for(vector<int>::iterator it = vTarget.begin();it != ItEnd;it++)
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
