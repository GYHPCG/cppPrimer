/*
 * @Descripttion: MyCode
 * @Author: CGPan
 * @Date: 2022-09-24 18:54:47
 * @LastEditors: CGPan
 * @LastEditTime: 2022-10-04 20:50:25
 */
#include "dog.h"
#include <iostream>

#include <memory>
using namespace std;
void share(shared_ptr<int>x) {
    cout << x.use_count() << endl;
}
int main()
{

    //普通类型，可使用use_count()查看指针指向的内容被共享次数,本质其实就是多个指针指向同一个内存
    shared_ptr<int> sptr = make_shared<int>(100);
    // cout << sizeof(sptr) << endl;//16个字节
    // cout << " sptr count: " << sptr.use_count() << endl;
    // cout << " sptr address: " << sptr.get() << " " << &sptr<< endl;
    // shared_ptr<int> sptr2  = sptr;
    // shared_ptr<int> sptr3 = sptr2;

    // sptr.reset();
    // //sptr 等价于 sptr.get(),都是指针所指向的内存的地址，指针本身的地址用&sptr;
    // cout << " sptr2 count: " << sptr2.use_count() << endl;
    // cout << " sptr address: " << sptr2.get() << " " << &sptr2<< endl;
    // cout << " sptr3 count: " << sptr3.use_count() << endl;

    // cout << " sptr address: " << sptr3.get() << " " << &sptr3<< endl;

    cout << "------gyh-----" << endl;
    shared_ptr<int> sptr4 = sptr;
    sptr = make_shared<int>(120);
    cout << "sptr count: " << sptr.use_count() << " " << *sptr << endl;
    //shared_ptr<int>p1 = new int(23);//eoor,不支持隐式调用
    shared_ptr<int>p2(new int(23));//
    int* p1 = new int(2);
    // p2.reset(p1);
    // int p3 = *p2;
    // cout << p2.use_count() << endl;
    // cout << *p2 << endl;
    share(shared_ptr<int>(p1));//显示将普通指针和智能指针混合使用，容易出问题
    int pi = *p1;
    //cout << pi << endl;//未知值，因为share()离开作用域时，智能指针delete掉了，那块地址消失了，
    //将普通指针强转为智能指针，在函数调用时，引用次数不会增加。
    // share(p2);
    // cout << "shared_ptr: " << *p2 << endl;
    
    /// @brief 
    /// @return
    //可以用get获取智能指针指向的地址，从而变为普通指针
    //用普通指针获取得到智能指针指向的地址，又赋值给新的智能指针，引用次数不会增加。
    int *p4 = p2.get();
    shared_ptr<int>p5(p2);
    cout << p5.use_count() << endl; 
    return 0;
}