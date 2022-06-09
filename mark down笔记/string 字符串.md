#### `string` 字符串

> 字符串`string`可以看作一个特殊的`vector`
>
> 唯一区别:`size()`的复杂度为`O(n)`
>
> 所有参数为字符串的地方既可以是string也可以是c字符串

###### 常用函数

```c++
  str1.length(), str1.size();  // O(n)
  str1.insert(1, "insert");  //在下标为1处,插入一个字符或字符串O(1)
  str1.insert(str1.begin(), 'insert');  //在迭代器插入一个字符或字符串O(n)

  str1.c_str();        //返回C语言字符串,用于printf() O(n)
  str1.append(str2);   //将str2拼接到str1后面
  str1.compare(str2);  // strcmp(str1,str2)

  str1 == str2;  // strcmp(str1,str2)==0
  str1 += str2;  // str.append(str2)
  str1 += 'a';   // str.push_back('a')
```

