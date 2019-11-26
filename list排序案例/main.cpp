#include <iostream>
#include <list>

using namespace std;

//对于自定义类型排序
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
    //按照年龄，升序
    if(p1.m_age == p2.m_age)
        return p1.m_height > p2.m_height;
    return p1.m_age < p2.m_age;
}

void test01()
{
    list<person> ls1;

    //准备数据
    person p1("刘",18,175);
    person p2("关",19,185);
    person p3("张",15,171);
    person p4("周",18,173);
    person p5("吴",17,165);
    person p6("郑",18,195);

    //插入数据
    ls1.push_back(p1);
    ls1.push_back(p2);
    ls1.push_back(p3);
    ls1.push_back(p4);
    ls1.push_back(p5);
    ls1.push_back(p6);

    cout << "排序前"<<endl;
    for(list<person>::iterator it = ls1.begin();it != ls1.end();it++)
    {
        cout << "姓名:" << it->m_name << " 年龄:" << it->m_age << " 身高:" << it->m_height << endl;
    }

    cout << "排序后："<<endl;
    ls1.sort(ComparePerson);
    for(list<person>::iterator it = ls1.begin();it != ls1.end();it++)
    {
        cout << "姓名:" << it->m_name << " 年龄:" << it->m_age << " 身高:" << it->m_height << endl;
    }

}

int main()
{
    test01();
    return 0;
}
