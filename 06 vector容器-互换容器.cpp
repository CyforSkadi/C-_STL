#include<iostream>
using namespace std;
#include<vector>

//swap(vec); // 将vec与本身的元素互换

void printVector6(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



//1、基本使用
void test06()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "互换前：" << endl;
	printVector6(v1);

	vector<int>v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector6(v2);


	cout << "互换后：" << endl;
	v1.swap(v2);

	printVector6(v1);
	printVector6(v2);

}

//2、实际用途 巧用swap可以收缩内存空间
void test07()
{
	vector<int>v;

	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	v.resize(3);
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	//利用swap收缩内存
	vector<int>(v).swap(v);	//创建匿名对象和原对象互换，匿名对象当前行执行完毕自动回收

	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

}



int main6()
{

	//test06();
	test07();

	system("pause");

	return 0;
}