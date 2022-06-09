#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  //字符串string可以看作一个特殊的vector
  // string和C语言字符串关系就像vector和普通数组关系一样
  string str1 = "hello";
  char str2[] = "world";
  string str3;
  str3.push_back('!');
  // hello world
  cout << str1 << " " << str2 << str3 << endl;

  //基本操作:vector有的string基本都有
  //唯一区别:size()的复杂度为O(n)
  //所有参数为字符串的地方既可以是string也可以是c字符串
  str1.length(), str1.size();  // O(n)
  str1.insert(1, "insert");  //在下标为1处,插入一个字符或字符串O(1)
  str1.insert(str1.begin(), 'insert');  //在迭代器插入一个字符或字符串O(n)

  str1.c_str();        //返回C语言字符串,用于printf() O(n)
  str1.append(str2);   //将str2拼接到str1后面
  str1.compare(str2);  // strcmp(str1,str2)

  str1 == str2;  // strcmp(str1,str2)==0
  str1 += str2;  // str.append(str2)
  str1 += 'a';   // str.push_back('a')
  return 0;
}