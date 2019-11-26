#include <iostream>
#include <vector>
using namespace std;

//数组是静态空间，大小一定
//vector可以动态扩展

void printVector(vector<int> &m)
{
    for(vector<int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << *it << endl;
    }
}

//vector容器构造
void test01()
{
    vector<int> v1;//默认构造，无参构造

    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    //通过区间方式构造
    vector<int> v2(v1.begin(),v1.end());
    printVector(v2);

    //n个elem方式构造
    vector<int> v3(10,100);
    printVector(v3);
}
int main()
{
    test01();
    return 0;
}
