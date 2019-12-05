#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//必须是有序序列才能查找，如1--9的升序；
//如果是无序的，结果未知！
void test01()
{
    vector<int> v;
    for(int i = 0; i < 7;i++)
    {
        v.push_back(i);
    }

    //二分查找，返回bool型
    bool ret = binary_search(v.begin(),v.end(),5);

    if(!ret)
    {
        cout << "未找到！" << endl;
    }
    else
    {
        cout << "找到了！" << endl;
    }
}

int main()
{
    test01();
    return 0;
}
