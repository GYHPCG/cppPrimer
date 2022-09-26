/*
 * @Descripttion: MyCode
 * @Author: CGPan
 * @Date: 2022-08-16 21:03:22
 * @LastEditors: CGPan
 * @LastEditTime: 2022-09-26 22:06:24
 */

#include <iostream>

using namespace std;
//当函数返回值为lvalue时，“const”表示返回值变为rvalue，不可修改
// 1.
/* const int& ConstEx(int &a, int b)
 {
     a += b;
    return a;
 }*/
//"const"在函数体前的作用
class test{
public:
    test() = default;

    //此处的“const”只能用于类成员函数
    int ConstEx(int a ,int b) const {
        a = 6;
        b = 7;
        //x = a+b;const修饰的成员变量不能被改变
        return x;
    }
private:
 int x;
};

int main()
{
    // point to explore the "const" function in the methods
    int a = 0, b = 9;
    // 1.
    //ConstEx(a,b) = 10;
    test A;
    A.ConstEx(a,b);
    return 0;
}
