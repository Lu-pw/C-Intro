#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool MyPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v1;
    for(int i = 0 ; i < 7 ; i++)
    {
        v1.push_back(i);
    }

    vector<int> v2;
    v2.resize(v1.size());
    copy(v1.begin(),v1.end(),v2.begin());

    for_each(v2.begin(),v2.end(),MyPrint);
    cout << endl;
}

int main()
{
    test01();
    return 0;
}
