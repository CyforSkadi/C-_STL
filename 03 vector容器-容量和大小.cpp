#include<iostream>
using namespace std;
#include<vector>

//empty(); //判断容器是否为空
//capacity(); //容器的容量
//size(); //返回容器中元素的个数
//resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
  //如果容器变短，则末尾超出容器长度的元素被删除。
//resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
  //如果容器变短，则末尾超出容器长度的元素被删除

void printVector3(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test03()
{
	vector<int>v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector3(v1);

	if (v1.empty())
	{
		cout << "v1为空！" << endl;
	}
	else
	{
		cout << "v1不为空！" << endl;
		cout << "v1的容量为：" << v1.capacity() << endl;
		cout << "v1的大小为：" << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15);
	printVector3(v1);	//重新指定过长，默认用0填充
	v1.resize(15,100);	//指定填充值

	v1.resize(5);
	printVector3(v1);	//重新指定过短，超出部分删除

}


int main3()
{

	test03();


	system("pause");

	return 0;
}