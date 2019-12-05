#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void printDeque(deque<int>& d)
{
    for(deque<int>::iterator it = d.begin();it != d.end();it++)
    {
        cout << *it <<" ";
    }
    cout << endl;
}

void test01()
{
    deque<int>  d1;
    for(int i = 0;i < 7; i ++)
    {
        d1.push_back(i);
    }
    d1.push_front(10);
    d1.push_front(20);
    d1.push_front(15);
    printDeque(d1);

    //排序
    //对于支持随机访问的迭代器的容器，都可以利用sort算法对其进行排序，
    //包括vector容器
    cout << "排序后：";
    sort(d1.begin(),d1.end());
    printDeque(d1);

    //反序
    reverse(d1.begin(),d1.end());
    printDeque(d1);

}

int main()
{
    test01();
    return 0;
}
