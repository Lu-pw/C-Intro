#include <iostream>
#include <deque>
using namespace std;

void printDeque(deque<int>& d)
{
    for(deque<int>::iterator it = d.begin();it != d.end();it++)
        cout << *it << " ";
    cout << endl;
}

void test01()
{
    deque<int> d1;
    for(int i=0;i<7;i++)
    {
        d1.push_back(i);
    }

    for(int i = 0;i < d1.size();i++)
    {
        cout << d1[i] <<" ";
    }
    cout << endl;

    for(int i = 0; i < d1.size();i++)
    {
        cout << d1.at(i) <<" ";
    }
    cout << endl;

    cout << "Ê×ÔªËØ£º" << d1.front() <<endl;
    cout << "Î²ÔªËØ£º" << d1.back() << endl;
}
int main()
{
    test01();
    return 0;
}
