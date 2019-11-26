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

    printList(ls1);

    //ͷ��
    ls1.insert(ls1.begin(),5);
    printList(ls1);

    ls1.push_front(6);
    printList(ls1);

    //βɾ
    ls1.pop_back();
    printList(ls1);

    //ͷɾ
    ls1.pop_front();
    printList(ls1);

    //insert
    ls1.insert(ls1.begin(),1000);
    printList(ls1);

    list<int>::iterator it = ls1.begin();
    ls1.insert(++it,500);
    printList(ls1);

    //ɾ��
    it = ls1.begin();
    ls1.erase(it);
    printList(ls1);

    //�Ƴ�
    //ɾ��������������elem��ͬ��Ԫ��
    ls1.push_back(20000);
    ls1.push_back(20000);
    ls1.push_back(20000);
    ls1.push_back(20000);
    printList(ls1);
    ls1.remove(20000);
    printList(ls1);

    //���
    ls1.clear();
    printList(ls1);
}

int main()
{
    test01();
    return 0;
}
