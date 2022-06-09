#### `vector` 数组

> `vector`可以看作一个"超级数组"

##### 特点

- 可以像C语言数组用下标访问

```c++
//和C语言数组
  vector<int> arr1(100);
```

- 可以像链表一样动态改变长度

```c++
 //和链表类似
  vector<int> list;
  list.push_back(1);
  list.push_back(2);
  list.push_back(3);
  list.push_back(4);
```

##### 遍历

- C语言数组

```c++
//和C语言数组
  vector<int> arr1(100);
  int arr2[100];
  //遍历
  for (int i = 0; i < 100; i++) {
    scanf("%d", &arr1[i]);
    cout << arr1[i] << endl;
  }
```

- 链表

```c++
  //和链表类似
  vector<int> list;
  for (int i = 0; i < list.size(); i++) {
    int a;
    cin >> a;
    list.push_back(a);
    printf("%d", list[i]);
  }
```

- 迭代器`iterator`

> `STL`中的指针称为迭代器

```c++
  //迭代器遍历
  //指针访问每一个元素
  // stl中的指针成为"迭代器"
  vector<int>::iterator p1 = arr1.begin();
  int* p2 = arr2;  //数组的地址
  p1++;
  p2++;
  for (p1 = arr1.begin(); p1 != arr1.end(); p1++) {
    cout << *p1 << endl;
  }
  //普通指针遍历
  int i;
  for (p2 = arr2, i = 0; i < 100; i++, p2++) {
    cout << *p2 << endl;
  }
```



###### vector常见操作

```c++
 // vector常见操作
  list.size();   //数组元素个数O(1)
  list.clear();  //一件清空数组O(n)
  list.empty();  //数组是否为空O(1)

  list.begin();  //数组的首元素迭代器O(1)
  list.end();    //数组的最后一个元素的下一个元素的迭代器O(1)
                 //该元素实际在数组中不存在

  list.erase(p1);     //删除数组某个迭代器虽在位置的数字O(n)
  list.push_back(1);  //往数组后面添加元素O(1)
  list.pop_back();    //删除数组最后一个元素O(1)
```

