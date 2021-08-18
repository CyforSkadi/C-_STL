#include<iostream>
using namespace std;
#include<list>

//push_back(elem);//在容器尾部加入一个元素
//pop_back();//删除容器中最后一个元素
//push_front(elem);//在容器开头插入一个元素
//pop_front();//从容器开头移除第一个元素
//insert(pos, elem);//在pos位置插elem元素的拷贝，返回新数据的位置。
//insert(pos, n, elem);//在pos位置插入n个elem数据，无返回值。
//insert(pos, beg, end);//在pos位置插入[beg,end)区间的数据，无返回值。
//clear();//移除容器的所有数据
//erase(beg, end);//删除[beg,end)区间的数据，返回下一个数据的位置。
//erase(pos);//删除pos位置的数据，返回下一个数据的位置。
//remove(elem);//删除容器中所有与elem值匹配的元素

void printList4(const list<int>&L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test05()
{
	list<int>L1;

	//尾插
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	//头插
	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);

	printList4(L1);

	//尾删
	L1.pop_back();
	printList4(L1);

	//头删
	L1.pop_front();
	printList4(L1);

	//insert插入
	list<int>::iterator it = L1.begin();
	L1.insert(++it, 1000);
	printList4(L1);

	//删除
	it = L1.begin();
	L1.erase(it);
	printList4(L1);

	//移除
	L1.push_back(10000);
	L1.push_back(10000);
	L1.push_back(10000);	
	L1.push_back(10000);
	printList4(L1);
	
	L1.remove(10000);
	printList4(L1);

	//清空
	L1.clear();
	printList4(L1);


}

int main4()
{

	test05();

	system("pause");

	return 0;
}