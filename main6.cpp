#include <iostream>
//#include <stdlib.h>
#include <string.h>
using namespace std;

class student
{
	char name[256];
	int age;
	string sz_name;
	public:
	student()
	{
		memset(name,0,sizeof(name));
		age = 0;
	}
	void setname(const char * _name)
	{
		memcpy(name, _name,256);
		
	}
	void setname1(string _name)
	{
		sz_name = _name;
	}	
	void setage(int _age)
	{
		age = _age;	
	}
	void show()
	{
		cout<< "name = " << name << "age = " << age<<endl;	
		cout << "sz_name = " << sz_name <<endl;
	}

};

int main()
{
	enum sex {body =1,girl=2};
	sex a = body;
	sex b = girl;
	cout<<"sizeof(sex)"<<sizeof(sex)<<endl;
	cout<<"sizeof(a)"<<sizeof(a)<<endl;
	cout<<"a = " << a << "b = "<<b<<endl;
	
	student s;
	char name[256];
	strcpy(name,"wfg");
	s.setname(name);
	s.setage(10);
	s.setname1("wfg1");
	s.show();	
	
	return 0;

}

