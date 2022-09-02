#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(7);//capacity:1
    vec.push_back(7);// 2
    vec.push_back(7);//4
    vec.push_back(7);//4
    vec.push_back(7);//8
    /* vector增长确实是每两倍增长，按照 2的n次幂增长 */
   // for (int i = 0; i < 6; i++) vec.push_back(i);
    cout << "vec.size: "<<vec.size() <<endl;
   /*  vec.reserve(19); 设置capacity的大小*/
    vec.shrink_to_fit();//归还多余的内存，使size和capacity大小相等；
    cout << "vec.capicity(): " << vec.capacity() << endl; 
    return 0;

}
