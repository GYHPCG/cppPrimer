/*
 * @Descripttion: MyCode
 * @Author: CGPan
 * @Date: 2022-10-20 20:11:49
 * @LastEditors: CGPan
 * @LastEditTime: 2022-10-20 20:21:50
 */
#ifndef MYCLASS_HPP
#define MYCLASS_HPP
// hpp文件是h plus plus的意识，可以将声明和实现放在一起，不在像.h和.cpp文件分离
#include <iostream>
class MyClass
{
private:
    /* data */
    int value;
public:
    MyClass( );
    MyClass(int x): value(x){ };
    void print() {
        std::cout << "value: " << value << std::endl;
    }
    ~MyClass();
};

MyClass::MyClass(/* args */): value(0)
{

}

MyClass::~MyClass()
{
    std::cout << "destructor is called: " << std::endl;
}



#endif
