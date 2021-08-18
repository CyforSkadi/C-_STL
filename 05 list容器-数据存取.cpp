#include<iostream>
using namespace std;
#include<list>

//front(); //返回第一个元素。
//back(); //返回最后一个元素


void printList5(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test06()
{
	list<int>L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//L1[0] 不可以用[]访问list容器元素
	//L1.at(0) 不可以用at访问list容器元素

	cout << "第一个元素为：" << L1.front() << endl;
	cout << "最后一个元素为：" << L1.back() << endl;

	//验证迭代器不支持随机访问
	list<int>::iterator it = L1.begin();
	it++;	//支持双向
	//it = it + 1;   不支持随机访问
}

int main5()
{

	test06();

	system("pause");

	return 0;
}