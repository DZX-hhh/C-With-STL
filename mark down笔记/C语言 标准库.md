#### `C语言` 标准库

##### `1.cstring`

```c++
 strlen(str1);        //字符串长度
  strcmp(str1, str2);  //字符串比较
  strcpy(str1, str2);  //字符串拷贝

  //暴力清空清空数组,并赋值
  //逐字节填充,因此整数只用0和-1使用
  //其他的使用16进制
  memset(str1, 0, sizeof(str1));
  memset(str1, 0x3f3f3f3f, sizeof(str1));
  //暴力拷贝
  memcpy(str1, str2, 100);
```

##### `2.cmath`

```c++
三角函数,指数函数,浮点取整函数
```

##### `3.cstdlib`

```c++
qsort();//C语言快排
rand();//随机数
malloc(),free();//C语言分配内存
```

##### `4.ctime`

```c++
time(0)//从1970年到现在的秒数(配合随机数)
clock()//程序启动到目前为止的毫秒数
```

> 常配合时间戳使用产生一个随机数
>
> `srand`( time(0) );//时间戳

##### `5.cctype`

```c++
isdigit()//判断字符是否为数字
isalpha()//判断字符是否为为大小写字母
```

