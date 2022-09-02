#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
bool compare(const string& a, const string& b) {
    return a.size() < b.size();
}
void refTest(int &a) {
     ++a;
}
int main()
{
    vector<string> vec {"abc","ac","ab","sdfg"};
    //sort(vec.begin(),vec.end(),compare);
    //sort中的第三个参数称为谓词，有一元谓词和二元谓词，是由算法内部确定的，当你要比较的谓词中的参数是
    //多个，比算法确定的要多是，要用lambda表达式或者bind()来进行
    stable_sort(vec.begin(),vec.end(),compare);

    for (string k: vec)cout << k << " ";
    cout << endl;
    cout << "---------- " << endl;
    int x = 3;
    //[=]隐式捕获，以拷贝的方式进行捕获
    auto fc = find_if(vec.begin(),vec.end(),[=](const string& a)->bool{return a.size() >= x;});
    for_each(fc,vec.end(),[](const string&a){cout << a <<" ";});
    //值捕获时，表达式里面变量的值不能改变，除非加上mutable
    int v1 = 42;
    auto f = [v1]mutable {return ++v1;};
    cout << " lambda------" << endl;
    cout << "f = " << f() << endl;
    int val2 = 3;
    refTest(val2);
    cout << val2 << endl;

    return 0;

}
