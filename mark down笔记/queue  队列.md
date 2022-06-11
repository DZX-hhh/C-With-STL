#### `queue`  队列

```c++
 queue<int> que;
  que.push(1);                     //入队
  int frontElemtnt = que.front();  //返回第一个元素
  que.pop();                       //出队
  que.empty();                     //队列是否为空
  que.size();                      //队列元素个数
```

#### `priority_queue` 优先队列

```c++
priority_queue<int> pri_que;     //优先队列
  pri_que.push(1);                 //优先队列入队
  int minElement = pri_que.top();  //小根堆,对头元素为最小值
  pri_que.pop();                   //出队
  pri_que.empty();                 //是否为空
  pri_que.size();                  //优先队列元素个数
```

