/*
 * @Descripttion: MyCode
 * @Author: CGPan
 * @Date: 2022-10-20 20:18:12
 * @LastEditors: CGPan
 * @LastEditTime: 2022-10-20 20:25:12
 */
#include "MyClass.hpp"

int main()
{
    MyClass m_class;
    m_class.print();
    int x;
    std::cin >> x;
    m_class = 5;
    m_class.print();

}