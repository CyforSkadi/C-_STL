#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

//reverse(); //反转链表
//sort(); //链表排序


void printList6(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//反转
void test07()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "反转前：" << endl;
	printList6(L1);

	//反转后
	L1.reverse();
	cout << "反转后：" << endl;
	printList6(L1);
	
}

bool MyCompare(int v1,int v2)
{
	//降序 让第一个数大于第二个数
	return v1 > v2;

}


//排序
void test08()
{
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "排序前：" << endl;
	printList6(L1);

	//所有不支持随机访问迭代器的容器，不可以用标准算法
	//sort(L1.begin(), L1.end());

	//不支持随机访问迭代器的容器，内部会提供对应的一些算法
	L1.sort();	//默认从小到大
	cout << "排序后：" << endl;
	printList6(L1);

	//降序
	L1.sort(MyCompare);
	printList6(L1);



}

int main6()
{

	//test07();
	test08();


	system("pause");

	return 0;
}