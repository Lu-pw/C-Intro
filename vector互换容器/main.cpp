#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &v)
{
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
        cout << *it << "\t";
    cout << endl;
}

void test01()
{
    vector<int> v1;
    vector<int> v2;

    for(int i = 0; i < 10 ;i ++)
    {
        v1.push_back(i);
    }
    printVector(v1);
    for(int i = 10;i>0;i--)
    {
        v2.push_back(i);
    }
    printVector(v2);

    //交换后
    v1.swap(v2);
    printVector(v1);
    printVector(v2);

}


    //2.实际用途
    //巧用swap可以收缩内存空间

void test02()
{
    vector<int> v3;
    for(int i = 0; i < 1000;i++)
    {
        v3.push_back(i);
    }
    cout << "v3的容量：" << v3.capacity() << endl;
    cout << "v3的大小：" << v3.size() << endl;

    v3.resize(3);
    cout << "v3的容量：" << v3.capacity() << endl;
    cout << "v3的大小：" << v3.size() << endl;

    //巧用swap收缩内存
    vector<int>(v3).swap(v3);
    cout << "v3的容量：" << v3.capacity() << endl;
    cout << "v3的大小：" << v3.size() << endl;

}
int main()
{
    test01();
    test02();
}
