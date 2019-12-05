#include <iostream>
#include <deque>
using namespace std;

void printDeque(deque<int> d)
{
    for(deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << "\t";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1;
    for(int i = 0; i < 10; i ++)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    if(d1.empty())
    {
        cout << "d1�ǿյģ�" << endl;
    }
    else
    {
        cout << "d1�ǿգ�" << endl;
        cout << "d1��С��" << d1.size() << endl;
    }

    //�����ƶ���С
    d1.resize(5);
    printDeque(d1);
    d1.resize(9);
    printDeque(d1);
    d1.resize(11,1);
    printDeque(d1);


}

int main()
{
    test01();
    return 0;
}
