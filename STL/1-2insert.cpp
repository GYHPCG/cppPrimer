#include <iostream>
#include <vector>
#include <forward_list>
using namespace std;

int main()
{
    vector<int> arr(10,0);
    /*vector中插入元素，可用insert,然后由迭代器的位置来确定
    实现push_front()  */
    arr.insert(arr.begin(),5);
    /* 一次性插入多个元素 */
    arr.insert(arr.end(),10,8);
    /* emplace是通过调用constructor来构造元素而不是拷贝元素
    emplace_back */
    arr.emplace_back(12);
    arr.emplace(arr.begin(),111);
    /* 访问at()函数，但是只能用于可用[]来访问的容器 */
    cout<<arr.at(0)<<endl;//111
    cout << arr.back() << endl;//12,front()函数访问最前面
    for (int k : arr) cout << k << " ";
    cout << endl << "----------" <<endl;
    forward_list<int> flist(10,1);
    /*cout << flist.back()//false,forward_list没有back函数  */
    for (int k : flist) printf("%d ",k);
    printf("\n");
    return 0;

}
