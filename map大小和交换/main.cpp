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

    //第四种
    m[4] = 40;

    if(m.empty())
    {
        cout << "m为空！"<< endl;
    }else
    {
        cout << "m非空！" << endl;
        cout << "m大小：" << m.size() << endl;
    }

    map<int,int> m2;
    m2 = m;
    m2.insert(make_pair(6,60));
    cout << "交换前：" << endl;
    printMap(m);
    printMap(m2);

//    swap(m,m2);
    m.swap(m2);
    cout << "交换后：" << endl;
    printMap(m);
    printMap(m2);
}
int main()
{
    test01();
    return 0;
}
