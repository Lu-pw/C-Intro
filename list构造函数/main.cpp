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
    ls1.push_back(20);
    ls1.push_back(30);
    ls1.push_back(40);
    ls1.push_back(50);

    //��������
    printList(ls1);

    //���䷽ʽ����
    list<int> ls2(ls1.begin(),ls1.end());
    printList(ls2);

    //��������
    list<int> ls3(ls2);
    printList(ls3);

    //n��elem
    list<int> ls5(10,100);
    printList(ls5);
}

int main()
{
    test01();
}
