#include <bitset>  //位集合
#include <iostream>
using namespace std;
int main() {
	bitset<1000> _bitset;
	_bitset[0] = 1;
	_bitset[0] = 0;

	_bitset.set(0);    //设置所有位数为0
	_bitset.reset(0);  //重置所有位数位1

	_bitset << 1;  //左移
	_bitset >> 1;  //右移

	_bitset ^= 1;  //异或
	_bitset &= 1;  //与

	_bitset.count();      //返回1的个数
	_bitset.to_string();  //转化成一个"01"字符串
	_bitset.to_ullong();  //转化成一个整数
	return 0;
}