#include<iostream>
using namespace std;
#include<set>
#include<string>

//成对出现的数据，利用对组可以返回两个数据
//pair<type, type> p(value1, value2);
//pair<type, type> p = make_pair(value1, value2);



void test08()
{
	//第一种方式
	pair<string, int>p("Tom", 20);

	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;


	//第二种方式
	pair<string, int>p2 = make_pair("Jerry", 30);

	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;

}



int main6()
{

	test08();


	system("pause");

	return 0;
}