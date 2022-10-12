/*
 * @Descripttion: MyCode
 * @Author: CGPan
 * @Date: 2022-10-10 19:54:23
 * @LastEditors: CGPan
 * @LastEditTime: 2022-10-10 20:33:33
 */
#include <iostream>

using namespace std;

//创建一个类似于share_pointer指针的类，当类的引用计数为0时，才销毁
class HasPtr {
    private:
        string* value;
        int i;
        unsigned int* use;//当做引用计数
    public:
        HasPtr(const string& s = string()):value(new string(s)),i(0),use(new unsigned(1)){};

        HasPtr(const HasPtr& p): value(p.value), i(p.i),use(p.use){
            ++*use;
        };
        HasPtr& operator=(const HasPtr& p);
        int getUse() {
            return *use;
        }
        ~HasPtr();

};
HasPtr& HasPtr::operator=(const HasPtr& p) {
    ++*p.use;
    if (--*use == 0) {
        delete value;
        delete use;
        cout << " operator=: disconstructor " << endl;
    }
    value = p.value;
    i = p.i;
    use = p.use;
    return *this;

}
HasPtr::~HasPtr() {
    if (--*use == 0) {
        delete value;
        delete use;
        cout << "~HasPtr is called " << endl;
    }
}
int main()
{
    //test
    HasPtr p1;
    cout << "p1.use: " << p1.getUse() << endl;//p1.use: 1
    HasPtr p2(p1);
    cout << "p1.use: " << p1.getUse() << endl;//p1.use: 2
    cout << "p2.use: " << p2.getUse() << endl;//p2.use: 2
    HasPtr p3;
    p3 = p2; //operator=: disconstructor,这里 p3改变指向，原来指向的要被释放
    cout << "p2.use: " << p2.getUse() << endl;//p2.use: 3
    cout << "p3.use: " << p2.getUse() << endl;//p3.use: 3
    //~HasPtr is called
    return 0;

}
