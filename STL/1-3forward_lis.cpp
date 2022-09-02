#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> flist{1,2,3,4,5};
    auto prev = flist.before_begin();//指向第一个元素的前面的位置
    auto begin = flist.begin();
    /* cout << *prev << endl;
    cout << *begin << endl;  */
    while(begin != flist.end()) {
        if (*begin % 2) {
            begin = flist.erase_after(prev);//合情合理，因为是单链表实现，所以删除即要找到当前元素的上一个
            //位置，然后改变上个元素指向的指针，指向当前元素的下一个元素。
        }else {
            prev = begin;
            ++begin;
        }
    }
    for (int k: flist) cout << k << " ";
    return 0;

}
