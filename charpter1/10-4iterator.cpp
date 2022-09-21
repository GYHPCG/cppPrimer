#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5};
    //输出迭代器
    ostream_iterator<int> outs(cout," ");
    for (auto k:vec) *outs ++= k;
    cout << endl;
    for (auto k : vec) outs = k;

    cout << "--------------" << endl;
    vector<int> v1;
    istream_iterator<int> in(cin);
    istream_iterator<int> end;
    while (in != end) {
        vec.push_back(*in++);
    }
    for (auto k : v1) outs = k;
    for (int i = 0; i < v1.size();i++ ) cout << v1[i] << " ";
    return 0;

}
