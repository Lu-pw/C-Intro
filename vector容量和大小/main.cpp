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
        cout << "v1�ǿյģ�"<<endl;
    }
    else
    {
        cout << "v1�ǿգ�"<<endl;
        cout << "v1��������" << v1.capacity() << endl;
        cout << "v1�Ĵ�С��" << v1.size() << endl;
    }

    //�����ƶ���С
    v1.resize(18);
    printVector(v1);
    //�������ָ����ԭ������Ĭ����0���
    v1.resize(19,100);
    //�������ذ汾������ָ��Ĭ�����ֵ
    printVector(v1);

    //�������ָ����ԭ���̣���Ĭ��ɾ�������
    v1.resize(5);
    printVector(v1);


}

int main()
{
    test01();
    return 0;
}
