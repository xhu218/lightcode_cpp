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

void func2(int a[])
{
	cout<<"sizeof(a) = " << sizeof(a)<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
	func(1,"a");	

	char const *a = "abc";
	func1(a);

	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	cout<<"sizeof(b) = "<<sizeof(b)<<endl;
	func2(b);

	char c[]="hellowfg";
	cout<<"c = " <<c<<endl;	

	char *d = (char*)malloc(strlen("abc")+1);
	strcpy(d,"abc");
	cout<<"d = "<<d<<endl;
	free(d);	

	return 0;
}
