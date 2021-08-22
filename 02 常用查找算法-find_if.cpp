#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

//find_if(iterator beg, iterator end, _Pred);
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// _Pred 函数或者谓词（返回bool类型的仿函数）

//内置数据类型
class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test03()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到大于5的数为：" << *pos << endl;
	}
}

//自定义数据类型
class Person2
{
public:
	Person2(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class Greater20
{
public:
	bool operator()(Person2 &p)
	{
		return p.m_Age > 20;
	}
};


void test04()
{
	vector<Person2>v;

	Person2 p1("aaa", 10);
	Person2 p2("bbb", 20);
	Person2 p3("ccc", 30);
	Person2 p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//查找年龄大于20的人
	vector<Person2>::iterator pos = find_if(v.begin(), v.end(), Greater20());
	if (pos == v.end())
	{
		cout << "没有找到" << endl;
	}
	else
	{
		cout << "找到姓名为：" << (*pos).m_Name << " 年龄为：" << (*pos).m_Age << endl;
	}

	
}

int main2()
{

	//test03();
	test04();


	system("pause");

	return 0;
}