#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[20];
    //转换为字符串
    //sprintf(s,"%d",123);//123->"123",注意s不能是string;
    //sprintf(s,"%8d%8d",123,45678);//右对齐
    //sprintf(s,"%-8d%-8d",123,45678);//左对齐
    int i = 100;
    //double k;
    //sprintf(s,"%.2f",i);
    //cout << s <<endl;
    char s1[] = {'a','b','c','d'};
    char s2[] = {'e','f','g','h','l','k'};
    int n = sprintf(s,"%.*s%.*s",sizeof(s1),s1,sizeof(s2),s2);//*号占位符
    // string c = s;
    //sprintf(s,"%p",&i);
    cout << n << endl;
    cout << s<< endl;
    return 0;

}
