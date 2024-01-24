#include "queen.hh"
#include <iostream>
#include "queen.hh"
#include <string.h>
#include <stdio.h>
#include <string>
using namespace std;

//递归求阶乘
int queen::fact(int n) {
    if (n < 0)
        return 0;
    else if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}



void print_func(void (*pf)(int  ,int  ))
{
    (*pf)(1,2);
    cout << "print is done!" << endl;
}
 
void my_func(int a ,int b)
{
    cout << "the call of my_func" << a << "____"<< b << endl;
}


void sum()
{
    int n;
    cout<<"please input n"<<endl;
    while (scanf("%d", &n) != EOF) 
    {
        //n = 65535;
        int ans = n * (n + 1) / 2;   // (1)
        printf("%d\n\n", ans);
    }
}


//斐波那契数列，第一二项为1；后面的每一项为前两项之和
int fibonacci(int a){
    if (a == 1 || a == 2)
    {
        return 1;
    }
    else{
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}


//递归汉诺塔
void hanoi(int i, char x, char y, char z){
    if (i == 1){
        printf("%c -> %c\n", x, z);
    }
    else{
        hanoi(i - 1, x, z, y);
        printf("%c -> %c\n", x, z);
        hanoi(i - 1, y, x, z);
    }
}

//指针对指针
void func(int **a)
{
        int **p = a;
        *p = new int (3);
        cout<<"p="<<p<<"*p="<<*p<<"**p="<<**p<<endl;       
        
}

void func_point_point()
{
     int *a = 0;      
    func(&a);
    cout<<"a="<<a<<"*a="<<*a<<endl;
    delete a;
    cout<<"a="<<a<<"*a="<<*a<<endl;
}



void fun_memcpy()
{
    int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	//使用memcpy()函数将arr1数组的前20字节(即前5个整形)拷进arr2中
	memcpy(arr2, arr1, 20);
    for (int i = 0; i < 10; i++)
        printf("%d ", arr2[i]);
    printf("\n");    
    memset(arr2,0,8);
    for (int i = 0; i < 10; i++)
        printf("%d ", arr2[i]);
    printf("\n");
}

void fun_point_yunshuan()
 {
    int c[5]  = {1, 2, 3, 4, 5};
    int *ptr = (int*)(c + 1);
    printf("%d, %d\n", *(c + 1), *(ptr-1));
 }  


 void fun_struct_init()
{
    EVENT event;  
    printf("nLength = %d\n",event.material.nLength);
    if(event.material.nLength>0)
    {
       cout<< "event.material.nLength="  <<event.material.nLength<<endl;
    }
    else {
       cout<< "event.material.nLength="  <<event.material.nLength<<endl;    
    }
}

void fun_delnullptr()
{
    int *test1 = new int(3);
    delete test1;
    test1 = nullptr;
    if(test1 != nullptr)
        delete test1;
}


void fun_struct_copy()
{
    
    struct STUDENT person = { "Pierre de Fermat",46,new int(3) };
	struct STUDENT person_copy = { 0 };
	memcpy(&person_copy, &person, sizeof(person));
    person_copy.a = new int(*person.a);
    
    strcpy(  person.name, "wfg");
    *person.a = 100;
	printf("person_copy: %s, %d ,%d\n", person_copy.name, person_copy.age,*person_copy.a);
    printf("person: %s, %d ,\%d \n", person.name, person.age,*person.a);
    printf("person_copy: %s, %d %d \n", person_copy.name, person_copy.age,*person_copy.a);

}



void print (A a)
{
    a.print();
}
void print (A *a)
{
    a->print();
}


void _fun_virtualfun()
{
      A a;B b;
    a.print(); //A:print
    b.print(); //B:print

    print(a);  //A:print
    print(b);  //A:print   为什么这里还是打印的A：print？？？

    print(&a);  //A:print
    print(&b);  //B:print  重载了，所以打印子类的

    A *c = new B();
    c->print(); //B:print
    delete c;
}

void fun_testmain()
{

  fun_struct_init();
    
  func_point_point();     
   
  fun_point_yunshuan();

  fun_memcpy();

  fun_delnullptr();
    
  fun_struct_copy();
    

  //求和
  //sum();   


  //函数指针
  print_func(my_func);

  //斐波那契数列，第一二项为1；后面的每一项为前两项之和
  cout<<"10"<<fibonacci(10)<<endl;

  cout<<"hello world"<<endl;
  queen q;
  cout<<q.fact(10)<<endl;

  //递归汉诺塔
  hanoi(3,'A','B','C');    
}



 
void swap(int &a,int &b)
{

  int temp = a;
  a = b ;
  b = temp;
}

void swap(int *a,int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;

}

void swap(string &a,string &b )
{
    string temp = a;
    a = b ;
    b = temp;
}

void swap(string *a,string *b )
{
    string temp = *a;
    *a = *b ;
    *b = temp;
}