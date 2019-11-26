#include <iostream>
#include <map>
using namespace std;


void printMap(map<int,int> &m)
{
    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key=" << (*it).first << " value=" << it->second << endl;
    }
    cout << endl;
}


void test01()
{
    //����map����
    map<int,int> m;
    //��������һ��Ҫʹ�ö���
    m.insert(pair<int , int> (1,10));
    m.insert(pair<int , int> (2,30));
    m.insert(pair<int , int> (3,60));
    m.insert(pair<int , int> (4,40));
    m.insert(pair<int , int> (5,20));
    printMap(m);
    //����
    map<int,int> m2(m);

    printMap(m2);
    //��ֵ
    map<int,int> m3;
    m3 = m2;
    printMap(m3);
}

int main()
{
    test01();

}
