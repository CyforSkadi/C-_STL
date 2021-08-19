#include<iostream>
using namespace std;
#include<set>

//find(key); //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//count(key); //统计key的元素个数



void printSet4(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//查找
void test05()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	

	set<int>::iterator pos = s1.find(30);

	if (pos != s1.end())
	{
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}


	
}


//统计
void test06()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	
	//统计30的个数
	//对set而言统计结果为0或1
	int num = s1.count(30);
	cout << "num = " << num << endl;

}

int main4()
{

	//test05();
	test06();


	system("pause");

	return 0;
}