#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//ͳ��������������
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

    int num = count(v.begin(),v.end(),5);
    cout << "Ԫ��5�ĸ�����" <<num << endl;

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

    int num = count(v.begin(),v.end(),p);
    cout << "��hhͬ�������ˣ�" << num << endl;
}
int main()
{
    test01();
    test02();
    return 0;
}
