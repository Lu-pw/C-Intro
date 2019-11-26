#include <iostream>
#include <list>
using namespace std;

void printList(list<int> &v)
{
    for(list<int>::iterator it = v.begin();it != v.end();it++)
        cout << *it << "\t";
    cout << endl;
}

void test01()
{
    list<int> ls1;

    ls1.push_back(10);
    ls1.push_back(20);
    ls1.push_back(30);

    //operator
    list<int> ls2;
    ls2 = ls1;
    printList(ls2);

    list<int>ls3;
    ls3.assign(ls2.begin(),ls2.end());
    printList(ls3);

    list<int>ls5;
    ls5.assign(10,100);
    printList(ls5);
}

//½»»»
void test02()
{
    list<int> ls1;
    ls1.push_back(10);
    ls1.push_back(20);
    ls1.push_back(30);
    printList(ls1);

    list<int> ls2;
    ls2 = ls1;
    ls2.push_back(60);
    printList(ls2);

    ls1.swap(ls2);
    printList(ls1);
    printList(ls2);
}

int main()
{
    test01();
    test02();
    return 0;
}
