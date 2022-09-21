#include <iostream>
#include <map>
using namespace std;

int main()
{
    pair<string,string> anon;
    pair<string,size_t> word_count;
    cout << anon.first << " " <<anon.second <<endl;
    cout << word_count.first << " " << word_count.second << endl;
    auto k = make_pair("abc",3);
    map<string,size_t>mp;
    ++mp[k.first];
    cout << mp[k.first];
    string s;
    int in;
    //tie的参数不能跟类型，而是用该类型声明的变量，tie可用来接接受pair
    tie(s,in) = k;
    return 0;

}
