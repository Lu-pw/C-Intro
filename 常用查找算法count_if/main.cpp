#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//ͳ��������������
bool greaterFive(int val)
{
    return val > 5;
}
void test01()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);
    v.push_back(5);
    v.push_back(1);
    v.push_back(5);
    v.push_back(5);
    v.push_back(2);

    int num = count_if(v.begin(),v.end(),greaterFive);
    cout << "Ԫ��>5�ĸ�����" <<num << endl;

}

//ͳ���Զ�����������
class Person
{
public:
    Person(string _name,int _age):name(_name),age(_age)
    {

    };
    //����==�����ж�
    bool operator==(const Person & p)
    {
        if(this->age == p.age)
            return true;
        else
            return false;
    };

    string name;
    int age;
};

class greaterThree
{
public:
    bool operator()(Person & p )
    {
        if(p.age > 3)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
void test02()
{
    vector<Person> v;
    Person p1("aa",1);
    Person p2("bb",6);
    Person p3("cc",4);
    Person p4("ss",6);
    Person p5("dd",3);
    Person p6("ff",6);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);
    v.push_back(p6);

    Person p("hh",6);

    int num = count_if(v.begin(),v.end(),greaterThree());
    cout << "����>3���ˣ�" << num << endl;
}
int main()
{
    test01();
    test02();
    return 0;
}
