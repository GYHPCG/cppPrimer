#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
using namespace std;

int main()
{
    vector<int>vec{1,2,3,4,5,6,7,8};
    int val = 4;
    //返回迭代器
    auto res = find(vec.begin(),vec.end(),val);
    //cout << res << endl;
    cout << (res == vec.end()) << endl;

    cout << "----------" << endl;
    int ia[] = {1,2,3,4,5,61,7,8};
    int val1 = 61;
    //普通数组没有迭代器，可以用begin(ia),end(ia)来起到迭代器的作用或者数组名，数组名+长度，也是表示差不多
    int *r1 = find(ia,ia + 10,val1);
    cout << *r1 << endl;
    //第三个参数累加的初值，同时返回类型也是第三个参数的类型
    int sum = accumulate(vec.begin(),vec.end(),0);
    cout << sum << endl;
    //插入迭代器
    auto insert = back_inserter(vec);
    *insert = 100;
    for(int k: vec) cout << k << " ";
    cout << endl;
    return 0;

}
