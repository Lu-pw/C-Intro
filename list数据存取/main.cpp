#include <iostream>
#include <list>
using namespace std;

void printList(list<int> &ls)
{
    for(list<int>::iterator it = ls.begin();it != ls.end();it++)
    {
        cout << *it << "\t";
    }
    cout << endl;
}

void test01()
{
    list<int> ls1;
    ls1.push_back(10);
    ls1.push_back(20);
    ls1.push_back(30);
    ls1.push_back(40);
    ls1.push_back(50);

    printList(ls1);

    //��������ls��0���ķ�ʽ����list�����е�Ԫ��
    //��������ls.at[0]�ķ�ʽ������Ԫ��
    //ԭ��list�������������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�

    cout << "��һ��Ԫ�أ�" << ls1.front() << endl;
    cout << "���һ��Ԫ�أ�" << ls1.back() << endl;

    //��֤��������֧���������
    list<int>::iterator it = ls1.begin();
    it++;//֧��˫��++����--��
//    it = it + 1; // ����������֧���������

}

int main()
{
    test01();
    return 0;
}
