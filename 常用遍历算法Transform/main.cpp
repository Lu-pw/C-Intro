#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//搬运容器至另一个容器中
//常用遍历算法Transform

class Transform
{
public:
    int operator()(int val)
    {
        cout << val + 10 << " ";
    }
};

void MyPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v1;
    for(int i = 0;i <10 ;i++)
    {
        v1.push_back(i);
    }

    vector<int> vTarget;
    //目标容器需提前开辟空间
    vTarget.resize(v1.size());

    transform(v1.begin(),v1.end(),vTarget.begin(),Transform());
    cout << endl;

    for_each(v1.begin(),v1.end(),MyPrint);
}

int main()
{
    test01();
    return 0;
}
