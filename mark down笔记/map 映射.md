#### `map` 映射



#### `1. pair`

>  map包含的第一个(元素)数据结构pair<任意两种类型构成>
>
>   两个相关联的变量pair可以用pair
>
>   pair自带比较函数,默认先比第一个元素再比第二个元素



###### 初始化

```c++
 pair<string, int> pr("小明", 180);
 pair<string, int> id;
 id = make_pair("somebody", 110);
 id.swap(pr);  //将pair的内容交换
```

###### 用法

```c++
pair<int, int> origin;  //映射绑定
origin = make_pair(0, 0);
origin.first == origin.second;
origin.swap();
```



#### `2. map`

> map包含的第二个数据结构是map(映射)
>
>   map可以看成一个超级数组,将第一个参数当成下标
>
>   插入,查询,删除都是O(logn)

###### 声明

```c++
 map<string, int> studentHeight;
```

###### 用法

```c++
studentHeight["小明"] = 170;
studentHeight["小红"] = 150;
studentHeight.insert(id);  // map内部使用了pair,使用insert可以插入一个pair
studentHeight.erase("小明");
```

###### 元素周期表(map初始化)

```c++
 map<string, int> height = {
    {"1", 1}, 
    {"2", 2}
  };  //直接初始化
```



#### `3. unordered_set`和`unordered_map`

> - 是set以及map的另一种实现版本
>
> - 不允许按大小顺序遍历元素,但是能`O(1)`访问和添加一个元素
>
> - 基于哈希函数的写法.
>
> - 基础类型,标准库类型,都自带了哈希函数,不需要自己写,,,但是自定义的结构使用时,需要提供一个哈希函数