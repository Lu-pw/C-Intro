#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test01()
{
    vector<int> v1;
    vector<int> v2;

    for(int i = 0;i < 7;i++)
    {
        v1.push_back(i);
        v2.push_back(i+3);
    }

    vector<int> vTarget;
    //Ŀ������������������ȡС
    vTarget.resize(min(v1.size(),v2.size()));
    vector<int>::iterator ItEnd = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    //ʹ��ǰ��������ṩ��ĩβ��õļ��ϲŶ�
    for(vector<int>::iterator it = vTarget.begin();it != ItEnd;it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    test01();
    return 0;
}
