/*
 * @Descripttion: MyCode
 * @Author: CGPan
 * @Date: 2022-11-22 11:54:31
 * @LastEditors: CGPan
 * @LastEditTime: 2022-11-22 22:19:34
 */
#include <stdlib.h>
#include "iostream"
using namespace std;

double fuc(double x, double y)                        //定义函数
{
    if(y==0)
    {
        throw y;                                    //除数为0，抛出异常
    }
    return x/y;                                    //否则返回两个数的商
}
class A{};
class B: public virtual A{};
int main( )
{
    double res;
    cout <<  "A.size: " << sizeof(A) << endl;
    cout << "B.size: " << sizeof(B) << endl;
    try                                            //定义异常
    {
        res=fuc(2,3);
        cout<<"The result of x/y is : "<<res<<endl;
        res=fuc(4,1);                                //出现异常
    }
    catch(double)                                    //捕获并处理异常
    {
        cerr<<"error of dividing zero.\n";
        //exit(1);                                    //异常退出程序
    }
    return 0;
}