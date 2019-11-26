#include <iostream>
#include <list>

using namespace std;

//�����Զ�����������
class person
{
public:
    person(string name,int age,int height)
    {
        m_name = name;
        m_age = age;
        m_height = height;
    }

    string m_name;
    int m_age;
    int m_height;
};

bool ComparePerson(person p1,person p2)
{
    //�������䣬����
    if(p1.m_age == p2.m_age)
        return p1.m_height > p2.m_height;
    return p1.m_age < p2.m_age;
}

void test01()
{
    list<person> ls1;

    //׼������
    person p1("��",18,175);
    person p2("��",19,185);
    person p3("��",15,171);
    person p4("��",18,173);
    person p5("��",17,165);
    person p6("֣",18,195);

    //��������
    ls1.push_back(p1);
    ls1.push_back(p2);
    ls1.push_back(p3);
    ls1.push_back(p4);
    ls1.push_back(p5);
    ls1.push_back(p6);

    cout << "����ǰ"<<endl;
    for(list<person>::iterator it = ls1.begin();it != ls1.end();it++)
    {
        cout << "����:" << it->m_name << " ����:" << it->m_age << " ���:" << it->m_height << endl;
    }

    cout << "�����"<<endl;
    ls1.sort(ComparePerson);
    for(list<person>::iterator it = ls1.begin();it != ls1.end();it++)
    {
        cout << "����:" << it->m_name << " ����:" << it->m_age << " ���:" << it->m_height << endl;
    }

}

int main()
{
    test01();
    return 0;
}
