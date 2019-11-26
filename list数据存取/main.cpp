#include <iostream>
#include <list>
using namespace std;

void printList(list<int> &ls)
{
    for(list<int>::iterator it = ls.begin();it != ls.end();it++)
    {
        cout << *it << "\t";
    }
    cout << endl;
}

void test01()
{
    list<int> ls1;
    ls1.push_back(10);
    ls1.push_back(20);
    ls1.push_back(30);
    ls1.push_back(40);
    ls1.push_back(50);

    printList(ls1);

    //不可以用ls【0】的方式访问list容器中的元素
    //不可以用ls.at[0]的方式访问其元素
    //原因：list不是用连续线性空间存储数据，迭代器也是不支持随机访问的

    cout << "第一个元素：" << ls1.front() << endl;
    cout << "最后一个元素：" << ls1.back() << endl;

    //验证迭代器不支持随机访问
    list<int>::iterator it = ls1.begin();
    it++;//支持双向++或者--；
//    it = it + 1; // 报错！！！不支持随机访问

}

int main()
{
    test01();
    return 0;
}
