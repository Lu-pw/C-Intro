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

    cout << "��תǰ��";
    printList(ls1);

    cout << "��ת��";
    ls1.reverse();
    printList(ls1);

}

bool myCompare(int v1,int v2)
{
    //�����õ�һ�������ڵڶ�����
    return v1 > v2;
}

//����
void test02()
{
        list<int> ls1;
    ls1.push_back(10);
    ls1.push_back(50);
    ls1.push_back(20);
    ls1.push_back(30);
    ls1.push_back(70);

    cout << "����ǰ��";
    printList(ls1);

//    sort(ls1.begin(),ls2.end());
    //���в�֧��������ʵ��������������������ñ�׼�㷨
    //��֧��������ʵ��������������ڲ����ṩһЩ��Ӧ�㷨
    cout << "�����";
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
