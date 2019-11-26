#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> v)
{
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << endl;
    }
}

void test01()
{
    vector<int> v1;
    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
    }

    printVector(v1);

    if(v1.empty())
    {
        cout << "v1是空的！"<<endl;
    }
    else
    {
        cout << "v1非空！"<<endl;
        cout << "v1的容量：" << v1.capacity() << endl;
        cout << "v1的大小：" << v1.size() << endl;
    }

    //重新制定大小
    v1.resize(18);
    printVector(v1);
    //如果重新指定比原来长，默认用0填充
    v1.resize(19,100);
    //利用重载版本，可以指定默认填充值
    printVector(v1);

    //如果重新指定比原来短，会默认删除后面的
    v1.resize(5);
    printVector(v1);


}

int main()
{
    test01();
    return 0;
}
