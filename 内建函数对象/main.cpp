#include <iostream>
#include <functional>
using namespace std;


//�����º���
//negate һԪ�º��� ȡ���º���

void test01()
{
    negate<int> n;

    cout << n(50) << endl;
}

//plus ��Ԫ�º��� �ӷ�
void test02()
{
    plus<int> p;
    cout << p(10,12) << endl;
}

//divides  modulus    minus

int main()
{
    test01();
    test02();
    return 0;
}
