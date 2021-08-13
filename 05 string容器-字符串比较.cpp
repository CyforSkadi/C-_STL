#include<iostream>
using namespace std;
#include<string>

//字符串比较是按字符的ASCII码进行对比
//= 返回 0
//> 返回 1
//< 返回 - 1

//int compare(const string &s) const; //与字符串s比较
//int compare(const char *s) const; //与字符串s比较

void test06()
{
	string str1 = "hello";
	string str2 = "xello";

	if (str1.compare(str2) == 0)
	{
		cout << "str1 =  str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout<<"str1  >  str2" << endl;
	}
	else
	{
		cout << "str1 <  str2" << endl;
	}
	
}


int main5()
{

	test06();

	system("pause");

	return 0;
}