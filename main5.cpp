#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

void func(const int &a, const string b)
{
	cout<< " a = " << a << " b = " << b<<endl;
}

void func1(const char *a)
{
	cout <<" a = "<<a <<endl;
}
//数据其实就是传的一个首地址过来
//在这里做了修改，其实也相当于修改了原来的数据
void func2(int a[],int len)
{
	cout<<"sizeof(a) = " << sizeof(a)<<endl;
	for(int i=0;i<len;i++)
	{
		cout<<a[i]<<endl;
	}
	for(int i=0;i<len;i++)
	{
		a[i] = 100;
	}
}

void func3(){}

int main()
{
	char const *a = "abc";
	func1(a);

	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	cout<<"sizeof(b) = "<<sizeof(b)<<endl;
	func2(b,10);
	
	for(int i=0;i<10;i++)
	{
		cout<<b[i]<<endl;
	}
	char c[]="hellowfg";
	cout<<"c = " <<c<<endl;	

	char *d = (char*)malloc(strlen("abc")+1);
	strcpy(d,"abc");
	cout<<"d = "<<d<<endl;
	free(d);	

	return 0;
}
