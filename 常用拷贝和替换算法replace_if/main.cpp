#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
#include <functional>
using namespace std;

//�������ָ������ֵ���滻��
class greaterFive
{
public:
    bool operator()(int val)
    {
        return val > 3;
    }
};
void test01()
{
    srand((unsigned int)time(NULL));
    vector<int> v;

    for(int i = 0; i < 7;i++)
    {
        v.push_back(i);
    }
    random_shuffle(v.begin(),v.end());

    cout << "�滻ǰ��\n";
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    replace_if(v.begin(),v.end(),greaterFive(),500);
    cout << "�滻��\n";
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    cout << "Hello world!" << endl;
    test01();
    return 0;
}
