#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class GreaterFive
{
public:
    bool operator()(int val)
    {
        return val > 5;
    }
};

void test01()
{
    vector<int> v;
    for(int i = 0; i < 7; i ++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it1 = v.begin();
    it1++;
    v.insert(it1,22);

    for(vector<int>::iterator it2 = v.begin();it2 != v.end();it2++)
        cout << *it2 <<  " ";
    cout << endl;

    //查找容器中，有没有大于5的数字
    //GrearFive()匿名函数对象
    vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterFive());
    if(it == v.end())
    {
        cout <<"未找到！"  << endl;
    }
    else
    {
        cout << "找到了：" << *it << endl;
    }
}

int main()
{
    test01();
    return 0;
}
