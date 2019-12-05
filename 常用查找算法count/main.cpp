#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

//统计内置数据类型
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
    cout << "元素5的个数：" <<num << endl;

}

//统计自定义数据类型
class Person
{
public:
    Person(string _name,int _age):name(_name),age(_age)
    {

    };
    //重载==才能判断
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
    cout << "跟hh同岁数的人：" << num << endl;
}
int main()
{
    test01();
    test02();
    return 0;
}
