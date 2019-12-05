#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class greaterFive
{
    public:
    bool operator()(int val)
    {
        return val > 5;
    }
};

void test01()
{
    vector<int> v;
    for(int i = 0;i < 7;i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find_if(v.begin(),v.end(),greaterFive());

    if(it == v.end())
    {
        cout << "未找到！" << endl;
    }
    else
    {
        cout << "找到了：" << *it << " ";
    }
    cout << endl;
}



class Person
{
public:
    Person(string _name,int _age):name(_name),age(_age)
    {

    };

    bool operator == (Person & p)
    {
        if(this->name == p.name && this->age == p.age)
            return true;
        else
            return false;
    }
    string name;
    int age;
};

bool greaterThree(Person & p)
{
    return p.age > 3;
}

void test02()
{
    vector<Person> v;
    Person p1("aa",1);
    Person p2("dd",2);
    Person p3("ss",3);
    Person p4("cc",4);
    Person p5("xx",5);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    vector<Person>::iterator it = find_if(v.begin(),v.end(),greaterThree);

    if(it == v.end())
    {
        cout << "未找到！" << endl;
    }
    else{
        cout << "找到了：" << it->name <<" " << it->age << endl;
    }
}
int main()
{
    test01();
    test02();
    return 0;
}
