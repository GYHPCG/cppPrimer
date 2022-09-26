/*
 * @Descripttion: MyCode
 * @version: 
 * @Author: CGPan
 * @Date: 2022-08-03 19:55:19
 * @LastEditors: CGPan
 * @LastEditTime: 2022-09-26 22:03:53
 */

#include <iostream>

using namespace std;

int k;

int main()
{
    bool b = -1;       //在bool类型中，0错，非0都是对的，因为赋值-1给吧，而b不是0，所以就是对的，所以就会变成1
    cout << b << endl; // b = 1

    // char type会根据编译器的不同，有时候有符号的，有时候无符号
    char c = 65;
    unsigned char c1 = -1;
    cout << c << endl;
    cout << "有符号：" << c << " "
         << "无符号：" << c1 << endl;

    //八进制法，在一个正常的整数面前添加多余的一个0，就会被默认为八进制，添加0x则是十六进制
    int eight = 024;
    cout << eight << endl;//20
    // string s = "a";
    char s[] = "a";
    cout << sizeof(s) << endl;//2,字符串后面有一个隐藏的'\0'作为终止符

    //转义符
    cout << "\x4d" << endl;//十六进制的77，也就是M的编码

    cout << "?" << endl;
    //\7:响铃符
    // cout <<"\7" << endl;
    //\a:报警
    // cout << "\a" << endl;

    //列表初始化，c++11后出现的，要求高，但更精确，不会丢失值
    int ld = {3};
    int la(2.222);
    cout << ld <<", " << la << endl;
    //初始化的规则，在c++中，如果是内置类型的话且是在函数之外的话，那么未初始化的变量被赋予0；函数内由该变量
    //所在内存空间的内容来决定
    int k2 = 0;
    cout << k << endl;//0 main函数外，
    cout << k2 << endl;//但一般情况下可能还是0，但容易出bug
    //引用和指针
    int l = 4;
    int k1 = 7;
    int &r = l;
    int *p = &r;
    r = k1;
    *p = 20;
    cout << r <<", " << *p <<", "<< l << endl;
    return 0;
}
