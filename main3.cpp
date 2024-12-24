
#include <iostream>
using namespace std;
int main()
{
	int a = 100;
	int a1 = 2;
	int *b = &a;
	*b = 200;
	cout<<"a = "<<a<<" *b  = "<<*b<<endl;
	
	//常量指针，这是一个常量，不能改他的东西了
	//
	int const *c = &a;
        //*c = 400;//这行代码有问题
	c = &a1;   //可以指向其他地方	


	//指针常量，这个指针不能再动了。
	//
	int *const d = &a;
	//d = &a1;   //这行有问题，不能指向其他地方了，
	*d = 200;  //但是可以重新赋值

	const int *const e = &a;
	e = &a1;   //这行有问题
	*e = 200;  //这行有问题

	return 0;
}
