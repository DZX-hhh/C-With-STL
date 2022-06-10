#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 2.自定义排序:bool intcmp
//   内部排序默认是升序return a < b
bool cmpInt(int a, int b) { return a > b; }  //这里是>,也就是降序

// 3.自己定义的结构体一定要写比较函数
struct Point {
  int x, y;
} points[1111];  //定义了一个[1111]结构体数组
// 3.优先级比较
bool cmpStruct(Point a, Point b) {
  if (a.x != b.x) {
    return a.x < b.x;
  } else {
    return a.y < b.y;
  }
}

// 4.运算符重载operator<
bool operator<(Point a, Point b) {
  if (a.x != b.x) {
    return a.x < b.x;
  } else {
    return a.y < b.y;
  }
}
int main() {
  /*
    sort()快排
  */
  int arr[]{2, 3, 1, 5, 4};
  int n = 5;
  // 参数
  // 排序开始指针
  // 排序结束指针(最后一个元素的下一个元素的指针)
  // 复杂度O(nlogn)
  sort(arr, arr + n);

  vector<int> arr2(5, 1);  //初始化了5个值为1的元素
  sort(arr2.begin(), arr2.end());

  // 3.自定义排序
  vector<int> arr3;
  arr3.push_back(2);
  arr3.push_back(3);
  arr3.push_back(1);
  sort(arr3.begin(), arr3.end(), cmpInt);

  // 3.结构体排序
  sort(points, points + 10, cmpStruct);

  // 4.运算符重载
  sort(points, points + 10);
  points[0] < points[111];

  /*
  其他algorithm函数
  */
  //最值函数O(1)
  min(1, 2);
  max(2, 1);
  //数组最大最小指针O(n)
  min_element(arr2.begin(), arr2.end());
  max_element(arr2.begin(), arr2.end());
  //把数组中第n小的(从0开始算)的数放到第n个位置
  //类似" 快排 ",并保证左边的数比他小,右边的数字比他大
  // O(n)
  nth_element(arr2.begin(), arr2.begin() + n, arr2.end());

  /*
  交换函数O(1)
  */
  swap(arr[0], arr[1]);
  /*
  翻转数组O(n)
  */
  reverse(arr2.begin(), arr2.end());

  /*
  假设arr已经排好了序
  去重,使得arr中不出现重复的数字
  返回去重后数字的结束指针
  O(n)
  */

  // unique多用于离散化,在"线段树与树状数组"也会用到
  sort(arr2.begin(), arr2.end());
  int newLength = unique(arr2.begin(), arr2.end()) - arr2.begin();

  /*
  二分查找:有序数组对应元素是否存在
  O(logn)
  */
  bool isExist = binary_search(arr2.begin(), arr2.end(), 1);

  //两个函数都是做一件事情
  //如果将一个数插入 "有序数组" ,它应该插入到那个位置?
  //下线:lower_bound()返回第一个插入位置的指针
  //上限:upper_bound()返回最后一个位置的指针
  // O(logn)
  int firstLoc = lower_bound(arr2.begin(), arr2.end(), 2) - arr2.begin();
  int lastLoc = upper_bound(arr2.begin(), arr2.end(), 2) - arr2.begin() + 1;
  return 0;
}
