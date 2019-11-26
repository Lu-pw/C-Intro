#include <iostream>
#include <map>
using namespace std;

void printMap(map<int,int> &m)
{
    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key=" << it->first << " value=" << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int,int> m;
    m.insert(pair<int,int> (1,10));

    //�ڶ���
    m.insert(make_pair(2,20));

    //������
    m.insert(map<int,int>::value_type(3,30));

    //������
    m[4] = 40;

    if(m.empty())
    {
        cout << "mΪ�գ�"<< endl;
    }else
    {
        cout << "m�ǿգ�" << endl;
        cout << "m��С��" << m.size() << endl;
    }

    map<int,int> m2;
    m2 = m;
    m2.insert(make_pair(6,60));
    cout << "����ǰ��" << endl;
    printMap(m);
    printMap(m2);

//    swap(m,m2);
    m.swap(m2);
    cout << "������" << endl;
    printMap(m);
    printMap(m2);
}
int main()
{
    test01();
    return 0;
}
