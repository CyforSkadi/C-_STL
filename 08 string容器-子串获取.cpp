#include<iostream>
using namespace std;
#include<string>

//string substr(int pos = 0, int n = npos) const; //返回由pos开始的n个字符组成的字符串

void test09()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;
}

//实用操作
void test10()
{
	string email = "zhangsan@sina.com";

	//从邮件地址中获取用户名信息

	int pos = email.find("@");
	cout << "pos = " << pos << endl;

	string userName = email.substr(0, pos);
	cout << "用户名为： " << userName << endl;
	

}



int main()
{

	//test09();

	test10();

	system("pause");

	return 0;
}