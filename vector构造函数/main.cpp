#include <iostream>
#include <vector>
using namespace std;

//�����Ǿ�̬�ռ䣬��Сһ��
//vector���Զ�̬��չ

void printVector(vector<int> &m)
{
    for(vector<int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << *it << endl;
    }
}

//vector��������
void test01()
{
    vector<int> v1;//Ĭ�Ϲ��죬�޲ι���

    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    //ͨ�����䷽ʽ����
    vector<int> v2(v1.begin(),v1.end());
    printVector(v2);

    //n��elem��ʽ����
    vector<int> v3(10,100);
    printVector(v3);
}
int main()
{
    test01();
    return 0;
}
