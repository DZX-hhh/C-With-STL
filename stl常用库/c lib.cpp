#include <cmath>    //三角函数,指数函数,浮点取整函数
#include <cstdlib>  //标准库
#include <cstring>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;
char str1[100];
char str2[100];
int main() {
	int t1 = clock();
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
	int t2 = clock();
	int all = t1 - t2;  //总时间
	return 0;
}