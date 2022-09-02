#include <iostream>
//旨在探明类的成员初始化顺序和要求
using namespace std;

// class X {
//     private:
//         int i;
//         int j;
//     public:
//         X(int val):j(val),i(j){//这里的代码是有问题的,因为编译代码时，是看变量在类中声明的顺序，而不是在
//         //构造函数书写的顺序。

//         }

// };
// class X1 {
//     private:
//         int i;
//         const int ci;
//         int &ri;
//     public:
//     //当变量为const或reference时，初始化变量必须用初始化列表，不能用赋值
//         X1(int val) {
//             i = val;
//             ci = val;//error
//             ri = val;//error
//         }
// };
class X2 {
    private:
    string x;
    public:
    X2(string s=""):x(s) {};//当一个构造函数为所有变量提供了默认参数时，也就定义了默认构造函数

};
int main()
{
    X2 a;
    string s;
   // X2 a1(cin >> s);
   cout << "hi" <<ends<<"world"<<endl;
    return 0;

}
