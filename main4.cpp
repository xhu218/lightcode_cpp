#include <iostream>
using namespace std;

void func1(int **p)
{	
	cout<<"函数里面对这块地址上的值重新赋了一个新地址"<<endl;
	*p= new int(3);   //这个时候p的地址放了另一个地址
	cout<<" *p = "<< *p << " **p = "<< **p <<endl;
	cout<<"函数结束"<<endl;
}


void func2(int * &p)
{
	cout<<"进入函数"<<endl;
	cout<<"~~~~~~"<<endl;
	cout << " p = " << p <<endl;
	p = new int(4);
	cout << " p =  " << p  <<endl;
	cout << " &p = " << &p <<endl;
	cout << " *p = " << *p <<endl;	
	cout<<"退出函数"<<endl;
}

int main()
{
	int *p = nullptr;
	//cout<<"p = "<< p << " &p = "<< &p <<" *p ="<<*p<endl; //空地址不能解引用
	cout<< " &p = " << &p << "这个里面放的数据是 p = " << p <<endl;  		//这里可以看到p的内存地址，但p的里面是空的，没有存任何东西
	func1(&p);
	cout<< " &p = " << &p << "这个里面放的数据是 p = " << p <<endl;
	cout<< " &p = " << &p << "这个里面放的数据  *p = "<< *p <<endl;//这里可以看到

	cout<<"-------------------------------"<<endl;	
	func2(p);
	cout<< " &p = " << &p << "这个里面放的数据是 p = " << p <<endl;
	cout<< " &p = " << &p << "这个里面放的数据是 *p = " << *p <<endl; 

	delete p;
	p = nullptr;
		
	return 0;
}
