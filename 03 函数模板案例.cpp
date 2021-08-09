#include<iostream>
using namespace std;

//���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
//�������Ӵ�С�������㷨Ϊѡ������
//�ֱ�����char�����int������в���

//��������ģ��
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

//�����㷨
template<class T>
void mySort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			mySwap(arr[max], arr[i]);
		}
	}
}

template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test04()
{
	//����char����
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);

}

void test05()
{
	//����int����
	int intArr[] = { 7,3,5,2,4,9,8,0,6,1 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);

}

int main3()
{
	test04();
	test05();

	system("pause");

	return 0;
}