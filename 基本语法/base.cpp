#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  // 1.字符串
  //  string cppstring;
  // char line[100];
  // cin.getline(line, 100);
  //  getline(cin, cppstring);
  //  cout << cppstring << endl;

  // 2.输入输出流
  //  c++判断异常(1e5之下使用)
  // int a, b;
  // while (cin >> a >> b) {
  //   cout << "判断异常,多次使用数据" << endl;
  // }
  // c判断异常(使用小数printf更方便)
  // int a;
  // while (scanf("%d", &a)) {
  //   /* code */
  // }

  // 3.动态开辟内存
  // int* a = new int[100];
  // delete[] a;  //销毁
  // int* number = new int;
  // int* carr = (int*)malloc(100 * sizeof(int));

  // 4.引用&  当成一个不能改变对象的指针
  // void swap(int& a, int& b) {
  //   int t = a;
  //   a = b;
  //   b = t;
  // }
  // int num = 10;
  // int& a = num;   //引用变量
  // int* b = &num;  //指针变量

  // 5.函数重载
  // int add(int a, int b) {}
  // int add(int a, int b = 0) {}  //缺省参数b为0

  // 6.struct结构体
//   struct node {
//     int number;
//     node* next;
//     //构造函数,结构同名,无返回值的构造函数,,创建对象自动调用构造函数
//     node(int _number = 0,
//          node* _next = NULL) {  //配合缺省参数(默认值)配合使用
//       number = _number;
//       next = _next;
//     }
//   };
//   node* head;
//   node nodea = node();
//   node nodeb = node(1);
//   return 0;
// }
