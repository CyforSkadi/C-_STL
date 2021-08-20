#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<functional>

//使用内建函数对象，需要引入头文件 #include<functional>

//template<class T> T plus<T> //加法仿函数
//template<class T> T minus<T> //减法仿函数
//template<class T> T multiplies<T> //乘法仿函数
//template<class T> T divides<T> //除法仿函数
//template<class T> T modulus<T> //取模仿函数
//template<class T> T negate<T> //取反仿函数


//negate 一元仿函数 取反
void test06()
{
	negate<int>n;
	cout<< n(50) << endl;
}

//plus 二元仿函数 加法
void test07()
{
	plus<int>p;
	cout << p(10, 20) << endl;
}

int main4()
{

	//test06();
	test07();


	system("pause");

	return 0;
}