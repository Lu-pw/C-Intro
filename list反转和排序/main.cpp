#include <iostream>
#include <list>
using namespace std;

void printList(list<int> &ls)
{
    for(list<int>::iterator it = ls.begin();it != ls.end();it++)
        cout << *it << "\t";
    cout << endl;
}


void test01()
{
    list<int> ls1;
    ls1.push_back(10);
    ls1.push_back(50);
    ls1.push_back(30);
    ls1.push_back(20);
    ls1.push_back(40);

    cout << "反转前：";
    printList(ls1);

    cout << "反转后：";
    ls1.reverse();
    printList(ls1);

}

bool myCompare(int v1,int v2)
{
    //降序，让第一个数大于第二个数
    return v1 > v2;
}

//排序
void test02()
{
        list<int> ls1;
    ls1.push_back(10);
    ls1.push_back(50);
    ls1.push_back(20);
    ls1.push_back(30);
    ls1.push_back(70);

    cout << "排序前：";
    printList(ls1);

//    sort(ls1.begin(),ls2.end());
    //所有不支持随机访问迭代器的容器，不可以用标准算法
    //不支持随机访问迭代器的容器，内部会提供一些对应算法
    cout << "排序后：";
    ls1.sort();
    printList(ls1);
    ls1.sort(myCompare);
    printList(ls1);
}

int main()
{
    test01();
    test02();
    return 0;
}
