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

    //�ж��Ƿ�Ϊ��
    if(ls1.empty())
    {
        cout << "ls1Ϊ�գ�" << endl;
    }else
    {
        cout << "ls1�ǿգ�" << endl;
        cout << "ls1Ԫ�ظ���:" << ls1.size() << endl;
    }

    //�����ƶ���С
    ls1.resize(10);
    printList(ls1);
    ls1.resize(2);
    printList(ls1);
    ls1.resize(5,6);
    printList(ls1);


}

int main()
{
    test01();
    return 0;
}
