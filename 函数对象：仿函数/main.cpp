#include <iostream>

using namespace std;

//���غ������ò��������࣬����󳣳�Ϊ��������
//��������ʹ�����صģ���ʱ����Ϊ���ƺ������ã�Ҳ�зº���
//�º�����һ���࣬����һ������

/*
����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
�������󳬳���ͨ�����ĸ����������������Լ���״̬
�������������Ϊ��������
*/

//����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
class MyAdd
{
public:
    int operator()(int v1,int v2)
    {
        return v1 + v2;
    }
};
void test01()
{
    MyAdd myadd;
    cout << myadd(10,12) << endl;

}

//�������󳬳���ͨ�����ĸ����������������Լ���״̬
class MyPrint
{
public:
    MyPrint()
    {
        this->count = 0;
    }
    void operator()(string test)
    {
        cout << test << endl;
        this->count++;
    }

    int count;//�ڲ��Լ�״̬
};

void test02()
{
    MyPrint myprint;
    myprint("hello world!");
    myprint("hello world!");
    myprint("hello world!");

    cout <<"myprint���ô�����"<< myprint.count << endl;

}


//�������������Ϊ��������
void doPrint(MyPrint & mp,string st)
{
    mp(st);
}

void test03()
{
    MyPrint myprint;
    doPrint(myprint,"hello c++");
}

int main()
{
    test01();
    test02();
    test03();
    return 0;
}
