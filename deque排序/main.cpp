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

    //����
    //����֧��������ʵĵ�����������������������sort�㷨�����������
    //����vector����
    cout << "�����";
    sort(d1.begin(),d1.end());
    printDeque(d1);

    //����
    reverse(d1.begin(),d1.end());
    printDeque(d1);

}

int main()
{
    test01();
    return 0;
}
