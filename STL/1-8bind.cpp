#include <iostream>
#include <functional>
#include <vector>
using namespace std;
//占位符
using namespace std::placeholders;
bool check_size(const string&a, int b) {
    return a.length() > b;
}
int main()
{
    vector<string> vec = {"hello","fake","tdd"};
    //bind
    auto check = bind(check_size,_1,4);
    auto wc = find_if(vec.begin(),vec.end(),check);
    cout << *wc  << endl;
    //for (auto k = wc; k != vec.end();k++) cout << *k << " ";
    return 0;

}
