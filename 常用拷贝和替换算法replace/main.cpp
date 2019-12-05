#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//会把所有指定的数值都替换掉
void test01()
{
    vector<int> v;

    for(int i = 0; i < 7;i++)
    {
        v.push_back(i);
    }


    cout << "替换前！\n";
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    replace(v.begin(),v.end(),5,500);
    cout << "替换后！\n";
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
