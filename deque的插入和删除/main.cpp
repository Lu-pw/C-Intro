#include <iostream>
#include <deque>
using namespace std;

void printDeque(deque<int> & d)
{
    for(deque<int>::iterator it = d.begin();it != d.end();it++)
    {

        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1;
    for(int i = 0;i<10;i++)
    {
        d1.push_back(i);
    }
    d1.push_front(100);
    d1.push_front(200);
    printDeque(d1);
    //尾删
    d1.pop_back();
    printDeque(d1);
    //头删
    d1.pop_front();
    printDeque(d1);
}


void test02()
{
    deque<int> d1;
    d1.push_back(100);
    d1.push_back(200);
    d1.push_front(300);
    printDeque(d1);
    //指定位置插入
    d1.insert(d1.begin(),120);
    printDeque(d1);

    d1.insert(d1.begin(),2,600);
    printDeque(d1);

    //按照区间插入
    deque<int> d2;
    d2.push_back(1);
    d2.push_back(2);
    d2.push_front(6);

    d1.insert(d1.begin(),d2.begin(),d2.end());
    printDeque(d1);
}

void test03()
{
    deque<int> d1;
    d1.push_back(100);
    d1.push_back(200);
    d1.push_front(300);
    d1.insert(d1.begin(),120);
    d1.insert(d1.begin(),2,600);
    printDeque(d1);

    //删除
    d1.erase(d1.begin());
    printDeque(d1);
    deque<int>:: iterator it = d1.begin();
    it++;
    d1.erase(it);
    printDeque(d1);

    d1.erase(d1.begin(),d1.end());
    printDeque(d1);
    d1.clear();
}
int main()
{
    test01();
    test02();
    test03();
    return 0;
}
