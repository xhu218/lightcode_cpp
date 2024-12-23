#include <iostream>
#include <string.h>




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

int main()
{
	char t[20]="this is test";
	 cout<<t<<endl;
	student  s1 ;
	strcpy(s1.name,"wangfugui");
	cout<<s1.name<<endl;
	cout<< sizeof(student) <<endl;

	student *ps = new student();
	//memset(ps,0,sizeof(student));
	strcpy(ps->name,"liangxiaoxia");
	memcpy(ps,&s1,sizeof(student));
	cout<<"psname = "<<ps->name<<endl;	
	delete ps;
	return 0;
}
