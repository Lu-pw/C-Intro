#include <iostream>
#include <map>
using namespace std;

void printMap(map<int,int> &m)
{
    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key=" << it->first << " value=" << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int,int> m;
    m.insert(pair<int,int> (1,10));

    //第二种
    m.insert(make_pair(2,20));

    //第三种
    m.insert(map<int,int>::value_type(3,30));

    //第四种,不建议，如果去掉=40，即不赋值其会默认给值0
    //可以利用key访问value
    m[4] = 40;

    printMap(m);
    //删除
    m.erase(m.begin());
    printMap(m);
    //按key删
    m.erase(3);
    printMap(m);
    //按区间删
    m.erase(m.begin(),m.end());
    printMap(m);
    //清空
    m.clear();
    printMap(m);
}
int main()
{
    test01();
    return 0;
}
