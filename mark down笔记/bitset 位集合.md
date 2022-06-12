#### `bitset` 位集合

######  

###### 声明

```c++
bitset<1000> _bitset;
```

###### 设置

```c++
_bitset[0] = 1;
_bitset[0] = 0;

_bitset.set(0);    //设置所有位数为0
_bitset.reset(0);  //重置所有位数位1
```

###### 移位

```c++
 _bitset << 1;  //左移
 _bitset >> 1;  //右移
```

###### 逻辑

```c++
 _bitset ^= 1;  //异或
 _bitset &= 1;  //与
```

###### 其他

```c++
 _bitset.count();      //返回1的个数
 _bitset.to_string();  //转化成一个"01"字符串
 _bitset.to_ullong();  //转化成一个整数
```





