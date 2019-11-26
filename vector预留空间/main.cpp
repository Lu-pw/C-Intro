#include <iostream>
#include <vector>
using namespace std;

void test01()
{
    vector<int> v1;

    //利用reserve预留空间
    v1.reserve(100000);//删除我看效果

    int num = 0;//统计开辟次数
    int * p = NULL;

    for(int i = 0; i < 100000; i ++)
    {
        v1.push_back(i);

        if(p != &v1[0])
        {
            p = & v1[0];
            num++;
        }
    }

    cout << "开辟内存次数：" << num << endl;
    cout << "v1容量：" << v1.capacity() << endl;
    cout << "v1大小：" << v1.size() << endl;
}

int main()
{
    test01();
    return 0;
}
