#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &v)
{

    for(vector<int>::iterator it = v.begin();it != v.end();it++)
        cout << *it <<endl;
    cout << endl;
}

void test01()
{
    vector<int> v1(10,100);

    //���á�����ʽ����Ԫ��
    for(int i = 0; i < v1.size();i++)
    {
        cout << v1[i] << "\t";
    }
    cout << endl;

    //����at��ʽ����Ԫ��
    for(int i = 0;i < v1.size();i++)
        cout << v1.at(i) << "\t";
    cout << endl;

    //��ȡ��һ��Ԫ��
    cout << v1.front() <<endl;
    //��ȡ���һ��Ԫ��
    cout << v1.back() << endl;

}

int main()
{
    test01();
    return 0;
}
