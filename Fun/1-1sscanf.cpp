/*
 * @Descripttion: MyCode
 * @Author: CGPan
 * @Date: 2022-10-02 16:50:35
 * @LastEditors: CGPan
 * @LastEditTime: 2022-10-02 17:55:53
 */
#include <iostream>
#include <string>
#include <stdio.h>
//sscanf()从给定的字符串按照一定个人所想要的格式获取其中内容，支持scanf里面的格式和正则等
using namespace std;

int main()
{
    // char buf[100] = "hellog-world";
    // const  char buf1[] = "hello&world";
    // string buf2{"12-78"};
    // int str ;
    // int str2;
    // //要用c_str()函数将string转换为const char* 类型
    // int n = sscanf(buf2.c_str(),"%d-%d",&str,&str2);
    // cout << n << endl;
    // cout << str << " " << str2 << endl;
    string buf = "abc&dfrgh";
    // string s1;
    char s1[100];
    // char s2[100];
    sscanf(buf.c_str(),"%[a-f]",&s1);
    cout << s1 << endl;//abc
    //cout << s2 << endl;
    return 0;

}
