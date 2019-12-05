#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

class MyPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);
    v.push_back(65);
    v.push_back(3);
    v.push_back(4);
    v.push_back(8);

    sort(v.begin(),v.end());

    for(vector<int>::iterator it = v.begin();it != v.end();it++)
        cout << *it << " ";
    cout << endl;

    //¸Ä±àÎª½µÐò
    sort(v.begin(),v.end(),greater<int>());
    for_each(v.begin(),v.end(),MyPrint());
}

int main()
{
    test01();
    return 0;
}
