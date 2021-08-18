#include<iostream>
using namespace std;
#include<list>

//assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem); //将n个elem拷贝赋值给本身。
//list& operator=(const list &lst); //重载等号操作符
//swap(lst); //将lst与本身的元素互换

void printList2(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


//赋值
void test02()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList2(L1);

	list<int>L2;
	L2 = L1;
	printList2(L2);

	list<int>L3;
	L3.assign(L2.begin(), L2.end());
	printList2(L3);

	list<int>L4;
	L4.assign(10, 100);
	printList2(L4);

}


//交换
void test03()
{
	list<int>L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>L2;
	L2.assign(10, 100);

	cout << "交换前：" << endl;
	printList2(L1);
	printList2(L2);

	L1.swap(L2);
	cout << "交换后：" << endl;
	printList2(L1);
	printList2(L2);


}

int main2()
{

	//test02();
	test03();

	system("pause");

	return 0;
}