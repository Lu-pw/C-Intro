#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//������������һ��������
//���ñ����㷨Transform

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
    //Ŀ����������ǰ���ٿռ�
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
