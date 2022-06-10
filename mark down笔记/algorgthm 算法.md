#### `algorgthm` 算法

> 和<string>以及<vector>这两个头文件不同
>
> 没有定义新类型,而是定义了很多使用的方法
>
> 极大简化了代码量

##### `1. sort()  O(nlogn)`

> 内置快排

###### 普通数组排序

```c++
  // 参数
  // 排序开始指针
  // 排序结束指针(最后一个元素的下一个元素的指针)
  // 复杂度O(nlogn)
  sort(arr, arr + n);
```

###### `vector`数组排序

```c++
  vector<int> arr2(5, 1);  //初始化了5个值为1的元素
  sort(arr2.begin(), arr2.end());
```

###### 自定义排序

```c++
// 3.自定义排序:bool intcmp
//   内部排序默认是升序return a < b
bool cmpInt(int a, int b) { return a > b; }  //这里是>,也就是降序
```

```c++
  // 3.自定义排序
  vector<int> arr3;
  arr3.push_back(2);
  arr3.push_back(3);
  arr3.push_back(1);
  sort(arr3.begin(), arr3.end(), cmpInt);
```

###### 结构体排序

结构体

```c++
// 3.自己定义的结构体一定要写比较函数
struct Point {
  int x, y;
} points[1111];  //定义了一个[1111]结构体数组
```

优先级比较

```c++
// 3.优先级比较
bool cmpStruct(Point a, Point b) {
  if (a.x != b.x) {
    return a.x < b.x;
  } else {
    return a.y < b.y;
  }
}
```

排序

```c++
// 3.结构体排序
sort(points, points + 10, cmpStruct);
```



###### 运算符重载`operator<`

```c++
bool operator<(Point a, Point b) {
  if (a.x != b.x) {
    return a.x < b.x;
  } else {
    return a.y < b.y;
  }
}
```

排序

```c++
sort(points, points + 10);
points[0] < points[111];
```

##### 2.  最值函数`O(1)`

```c++
 //最值函数O(1)
  min(1, 2);
  max(2, 1);
```

##### 3. 数组最大最小指针`O(n)`

```c++
 //数组最大最小指针O(n)
  min_element(arr2.begin(), arr2.end());
  max_element(arr2.begin(), arr2.end());
```

##### 4. `nth_element() O(n)`

```c++
//把数组中第n小的(从0开始算)的数放到第n个位置
//类似" 快排 ",并保证左边的数比他小,右边的数字比他大
// O(n)
nth_element(arr2.begin(), arr2.begin() + n, arr2.end());
```

##### 5. 交换函数 `O(1)`

```c++
swap(arr[0], arr[1]);
```

##### 6. 翻转数组 `O(n)`

```c++
 reverse(arr2.begin(), arr2.end());
```

##### 7. 去重`unique` `O(n)`

```c++
/*
  假设arr已经排好了序
  去重,使得arr中不出现重复的数字
  返回去重后数字的结束指针
  O(n)
*/
```

```c++
// unique多用于离散化,在"线段树与树状数组"也会用到
  sort(arr2.begin(), arr2.end());
  int newLength = unique(arr2.begin(), arr2.end()) - arr2.begin();
```

##### 8.  二分查找 `O(logn)`

- ""有序数组""对应元素是否存在

```c++
bool isExist = binary_search(arr2.begin(), arr2.end(), 1);
```

- 查找某个元素的第一个出现或最后一个出现

```c++
//两个函数都是做一件事情
//如果将一个数插入 "有序数组" ,它应该插入到那个位置?
//下线:lower_bound()返回第一个插入位置的指针
//上限:upper_bound()返回最后一个位置的指针
// O(logn)
```

```c++
int firstLoc = lower_bound(arr2.begin(), arr2.end(), 2) - arr2.begin();
int lastLoc = upper_bound(arr2.begin(), arr2.end(), 2) - arr2.begin() + 1;
```