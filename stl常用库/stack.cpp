#include <iostream>
#include <stack>
using namespace std;
int main() {
  // stack大部分数据结构和vector一样,自带size(),empty()函数
  // 栈的入,出,获取栈顶元素O(1)
  stack<int> sta;
  sta.push(1);
  int topElement = sta.top();
  sta.pop();
  sta.empty();
  sta.size();
  return 0;
}