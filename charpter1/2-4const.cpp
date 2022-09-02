#include <iostream>

using namespace std;
int kp = 66;
constexpr int k = 6;
int main()
{
  // const int point = 1;

  // const int *p = &point;

  // int very = 10;

  // p = &very;

  // cout << *p <<", " << point << endl;
  //注意
  char rl = 'a';
  char b = 'B';
  typedef char *pstr;   //注意这里是将pstr 替换为 char*
  const pstr ps = &rl;  //这里可以直接理解为pstr是地址，所以const的就是地址，而不是value
                        //  ps = &b;//error,无法编译，const pstr ps == char* const ps,而不是const char* pstr;
  const char *pt = &rl; //
  cout << *ps << ", " << *pt << endl;

  cout << "-----------" << endl;
  // c++11后
  //用法必须是一个常量，必须是常量表达式初始化
  constexpr int *pl = &kp; //是一个常量指针，等价于 int* const pl; constexpr const 才是指向常量的常量指针
  // *pl = b;
  cout << *pl << endl;
  int lhs = 1, rhs = 2;
  int *p = &lhs;
  decltype(lhs) c = 3.4;
  decltype(*p) pr = rhs;//(*p)在里面看作为解引用，既然是解引用，那么推断的类型就为引用
  decltype((lhs)) cr;//多重括号都统一看作解引用 == int &cr;
  cout << c << endl;

  return 0;
}
