#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void printVector(vector<int>& v)
{
    for(int i = 0; i < v.size(); i ++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

class myCompare
{
   public:
    bool operator()(int v1,int v2)
    {
        return v1 > v2;
    }
};

void test01()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    v.push_back(1);
    printVector(v);
    //降序
//    sort(v.begin(),v.end(),myCompare());
    //greater<int>()内建函数对象(大于)
    sort(v.begin(),v.end(),greater<int>());
    printVector(v);
}

int main()
{
    test01();
    return 0;
}
