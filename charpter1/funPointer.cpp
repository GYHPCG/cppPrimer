#include <iostream>

int comp( int a , int b) {
    return a - b;
}
int test (int a,int b,int (*pf)(int a1,int b1)) {
 return a+b - pf(a,b);
}
using namespace std;

int main()
{
    int (*pf)(int a,int b);
    //int* pf = &comp;
    pf = comp;
    cout << pf(1,2) << endl;
    cout << test(2,3,pf) << endl;
    return 0;

}
