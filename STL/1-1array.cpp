#include <iostream>
#include <array>
#include <vector>
#include <string>
#include <list>
using namespace std;
//容器关系运算符操作
bool ContainEquals();
int main()
{
    /*对于array的一点小测试  */
    //array<int,6>arr(1,2,3,4,5,6);//数组必须用括号括起来的初始值设定项初始化
    array<int,6>arr{1,2,3,4,5,6};
    // for (auto i = arr.begin(); i != arr.end();i++) {
    //     cout << *i <<" ";
    // }
    // cout << endl;

    //int test[6] = arr;//内置类型不支持数组拷贝或赋值
    //array<int,6>test = arr;//stl中的array支持
    //array<int,6>test(arr);
    array<int,6>test;
     for (int i : test) {
        cout << i << " ";//16 0 0 0 -507308272 32759
    }
    cout << endl;
    test.swap(arr);///交换的是地址，所以比swap快得多,可以理解为将两个数组名字交换了。
    for (int i : test) {
        cout << i << " ";//1，2，3，4，5，6
    }
    cout << endl;
    //因为上面的swap交换了两个数组的地址，所以此时指向了未经初始化的内存，得出的结果显得有点奇怪。
    for (auto i = arr.begin(); i != arr.end();i++) {
         cout << *i <<" ";//16 0 0 0 -507308272 32759
     }
    cout <<"-----------"<<endl;
     list<string> name;
     vector<string>na;
     vector<const char*>oldStle{"123","abc"};
     //name = oldStle;//两个容器不一样，无法赋值
     //na = oldStle;//无法赋值，事实上，const char* 要隐式转换才成为string对象
     name.assign(oldStle.begin(),oldStle.end());

     //容器关系运算符操作
     /* 容器直接比较的话，直接比较的是它的内容的大小 */
     cout << "*********"<<endl;
     
     cout << ContainEquals();
    return 0;

}
bool ContainEquals() {
    vector<int>v1 = {1,2,3,4,5,6,7};
    vector<int>v2 = {1,2,3};
    vector<int>v3 = {1,2,3};
    vector<int>v4 = {1,2,3,4,5};
    //return v1  > v2;//true
    //return v2 > v4;//false
    return v2 == v3;//true;

}
