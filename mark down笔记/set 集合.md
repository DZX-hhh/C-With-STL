#### `set` 集合

```c++
 set<int> _set;  //集合::平衡树实现

  _set.insert(1);  //插入"1"
  _set.find(1);    //是否存在"1"
  _set.erase(1);   //删除"1"
```

#### `multiset`多重集合

```c++
multiset<int> mul_set;  //多重集合
  //允许元素重复,通过count可以返回某个元素的数量

  mul_set.insert(1);
  mul_set.insert(1);  // set中插入一个
  mul_set.count(1);   // set中1的个数为2
```

#### 时间复杂度

```c++
/* O(logn)
  迭代器的++和--能够在O(logn)的时间里找到第一个比他大的数
  */
```

