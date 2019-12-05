#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//find可以找到指定的元素，但是返回值是迭代器

//查找内置的数据类型
void test01()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(7);
    v.push_back(1);
    v.push_back(2);
    v.push_back(9);
    vector<int>::iterator it =  find(v.begin(),v.end(),2);
    if(it == v.end())
    {
        cout << "未找到!\n";
    }
    else{
        cout << "找到了：" << *it <<endl;
    }
}

class Person
{
public:
    Person(string _name,int _age):name(_name),age(_age)
    {

    };


    //不重载会导致find报错
    //重载 == 底层find知道如何对比person数据类型
    bool operator==(const Person & p )
    {
        if(this->name == p.name && this->age == p.age)
            return true;
        else
            return false;
    }
    string name;
    int age;
};
//查找自定义的数据类型
void test02()
{
    vector<Person> v;
    //创建数据
    Person p1("aa",1);
    Person p2("bb",18);
    Person p3("vv",14);
    Person p4("cc",16);
    Person p5("xx",12);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    vector<Person>::iterator it = find(v.begin(),v.end(),p2);

    if(it == v.end())
    {
        cout << "未找到！\n";
    }
    else
    {
        cout << "找到了:" << it->name << " " << it->age << endl;
    }
}
int main()
{
    test01();
    test02();
        return 0;
}
