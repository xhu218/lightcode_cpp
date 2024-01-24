#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string>
using namespace std;


#ifndef PERSON_HPP
#define PERSON_HPP


typedef struct tagMATERIAL
{
    int nID;
    int nLength;
    tagMATERIAL()
    {
        nLength = 100;
    }
}MATERIAL,*LPMATERIAL;

typedef struct tagEVENT
{
    int nID;
    string name;
    MATERIAL material;
} EVENT,*LPEVENT;

struct STUDENT
{
	char name[20];
  
	int age;
    int *a;
};

class queen
{
    
    public:
        int fact(int n);

};




class A
{
    public: virtual void print(void)
    {
        cout << "A:print" <<endl;
    }
};
class B :public A
{
    public:  void  print (void) override
    {
        cout << "B:print" <<endl;
    }
};



void _fun_virtualfun();

void print_func(void (*pf)(int  ,int  ));

 
void my_func(int a ,int b);



void sum();


int fibonacci(int a);


void hanoi(int i, char x, char y, char z);


void func(int **a);

void func_point_point();


void fun_memcpy();

void fun_point_yunshuan();

void fun_struct_init();

void fun_delnullptr();

void fun_struct_copy();

void fun_testmain();



 
void swap(int &a,int &b);
void swap(int *a,int *b);
void swap(string &a,string &b );
void swap(string *a,string *b );

#endif