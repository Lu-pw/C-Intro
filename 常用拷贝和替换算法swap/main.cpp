#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void test01()
{
    vector<int> v1;
    vector<int> v2;

    for(int i = 0; i < 7;i++)
    {
        v1.push_back(i);
        v2.push_back(i+9);
    }


    cout << "交换前！\n";
    for(vector<int>::iterator it = v1.begin();it != v1.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for(vector<int>::iterator it = v2.begin();it != v2.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    swap(v1,v2);
    cout << "交换后！\n";
    for(vector<int>::iterator it = v1.begin();it != v1.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for(vector<int>::iterator it = v2.begin();it != v2.end();it++)
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
