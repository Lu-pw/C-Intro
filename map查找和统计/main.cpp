#include <iostream>
#include <map>
using namespace std;

void test01()
{
    //����
    map<int,int> m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));

    map<int,int>::iterator pos = m.find(3);

    if(pos != m.end())
    {
        cout << "�鵽�� key=" << pos->first << " value=" << pos->second <<endl;
    }
    else
    {
        cout << "δ�ҵ�Ԫ�أ�" << endl;
    }

    //ͳ��
    //map����������ظ�keyԪ�أ�countͳ��Ҫô0Ҫô1
    //multimap��countͳ�ƿ��ܴ���1
    int num = m.count(3);
    cout << "num = " << num << endl;
}

int main()
{
    test01();
    return 0;
}
