#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//�������������в��ܲ��ң���1--9������
//���������ģ����δ֪��
void test01()
{
    vector<int> v;
    for(int i = 0; i < 7;i++)
    {
        v.push_back(i);
    }

    //���ֲ��ң�����bool��
    bool ret = binary_search(v.begin(),v.end(),5);

    if(!ret)
    {
        cout << "δ�ҵ���" << endl;
    }
    else
    {
        cout << "�ҵ��ˣ�" << endl;
    }
}

int main()
{
    test01();
    return 0;
}
