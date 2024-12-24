#include <iostream>
#include <string.h>

//结构体与枚举类型练习


using namespace std;
struct student
{
	//string name;
	int age;
	char name[100];
	student()
	{
		age = 0;
		memset(name,0,sizeof(name));
	}
	
} s2;
enum color {red = 0, yellow =2};

int main()
{
	int a = yellow;
	int b = red;
	cout<<"b = "<<b<<endl;
	cout<<"a = "<<a<<endl;
	char t[20]="this is test";
	cout<<t<<endl;
	student  s1 ;
	strcpy(s1.name,"wangfugui");
	cout<<s1.name<<endl;
	cout<< sizeof(student) <<endl;

	student *ps =&s1;//new student();
	//memset(ps,0,sizeof(student));
	strcpy(ps->name,"liangx");
	memcpy(ps,&s1,sizeof(student));
	cout<<"psname = "<<ps->name<<endl;	
	//delete ps;
	return 0;
}
