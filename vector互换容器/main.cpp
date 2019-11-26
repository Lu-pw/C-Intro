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

    //������
    v1.swap(v2);
    printVector(v1);
    printVector(v2);

}


    //2.ʵ����;
    //����swap���������ڴ�ռ�

void test02()
{
    vector<int> v3;
    for(int i = 0; i < 1000;i++)
    {
        v3.push_back(i);
    }
    cout << "v3��������" << v3.capacity() << endl;
    cout << "v3�Ĵ�С��" << v3.size() << endl;

    v3.resize(3);
    cout << "v3��������" << v3.capacity() << endl;
    cout << "v3�Ĵ�С��" << v3.size() << endl;

    //����swap�����ڴ�
    vector<int>(v3).swap(v3);
    cout << "v3��������" << v3.capacity() << endl;
    cout << "v3�Ĵ�С��" << v3.size() << endl;

}
int main()
{
    test01();
    test02();
}
