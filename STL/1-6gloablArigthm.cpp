#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a1[] = {1,2,3,4,5,6,7};
    int a2[sizeof(a1)/sizeof(a1[0])];
    //copy返回a2尾元素后面的位置
    copy(begin(a1),end(a1),a2);
    for(int i = 0; i < 7; i++) cout << a2[i] << " ";
    return 0;

}
