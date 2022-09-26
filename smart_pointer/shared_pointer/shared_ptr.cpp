#include "dog.h"
#include <iostream>

#include <memory>
using namespace std;

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


    return 0;
}