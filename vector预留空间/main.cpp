#include <iostream>
#include <vector>
using namespace std;

void test01()
{
    vector<int> v1;

    //����reserveԤ���ռ�
    v1.reserve(100000);//ɾ���ҿ�Ч��

    int num = 0;//ͳ�ƿ��ٴ���
    int * p = NULL;

    for(int i = 0; i < 100000; i ++)
    {
        v1.push_back(i);

        if(p != &v1[0])
        {
            p = & v1[0];
            num++;
        }
    }

    cout << "�����ڴ������" << num << endl;
    cout << "v1������" << v1.capacity() << endl;
    cout << "v1��С��" << v1.size() << endl;
}

int main()
{
    test01();
    return 0;
}
