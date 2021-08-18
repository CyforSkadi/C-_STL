#include<iostream>
using namespace std;
#include<list>

//size(); //返回容器中元素的个数
//empty(); //判断容器是否为空
//resize(num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//  //如果容器变短，则末尾超出容器长度的元素被删除。
//resize(num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置

void printList3(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test04()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList3(L1);

	//判断容器是否为空
	if (L1.empty())
	{
		cout << "L1为空" << endl;
	}
	else
	{
		cout << "L1不为空" << endl;
		cout << "L1元素个数为：" << L1.size() << endl;

	}

	//重新指定大小
	L1.resize(10,10000);
	printList3(L1);

	L1.resize(2);
	printList3(L1);

}

int main3()
{

	test04();

	system("pause");

	return 0;
}