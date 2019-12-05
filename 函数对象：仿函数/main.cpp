#include <iostream>

using namespace std;

//重载函数调用操作符的类，其对象常称为函数对象
//函数对象使用重载的（）时，行为类似函数调用，也叫仿函数
//仿函数是一个类，不是一个函数

/*
函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
函数对象超出普通函数的概念，函数对象可以有自己的状态
函数对象可以作为参数传递
*/

//函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值
class MyAdd
{
public:
    int operator()(int v1,int v2)
    {
        return v1 + v2;
    }
};
void test01()
{
    MyAdd myadd;
    cout << myadd(10,12) << endl;

}

//函数对象超出普通函数的概念，函数对象可以有自己的状态
class MyPrint
{
public:
    MyPrint()
    {
        this->count = 0;
    }
    void operator()(string test)
    {
        cout << test << endl;
        this->count++;
    }

    int count;//内部自己状态
};

void test02()
{
    MyPrint myprint;
    myprint("hello world!");
    myprint("hello world!");
    myprint("hello world!");

    cout <<"myprint调用次数："<< myprint.count << endl;

}


//函数对象可以作为参数传递
void doPrint(MyPrint & mp,string st)
{
    mp(st);
}

void test03()
{
    MyPrint myprint;
    doPrint(myprint,"hello c++");
}

int main()
{
    test01();
    test02();
    test03();
    return 0;
}
