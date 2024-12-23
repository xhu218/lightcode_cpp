#include "queen.hh"
#include <iostream>
#include "queen.hh"
#include <string.h>
#include <stdio.h>
#include <string>
#include "array.hh"
#include "stack.hh"
#include "vector.hh"
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


//函数指针
void print_func(void (*pf)(int  ,int  ))
{
    (*pf)(1,2);
    cout << "print is done!" << endl;
}
 
void my_func(int a ,int b)
{
    cout << "the call of my_func" << a << "____"<< b << endl;
}

//求和
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

//指针的指针
void func(int **a)
{
        int **p = a;
        *p = new int (3);
        cout<<"p="<<p<<"*p="<<*p<<"**p="<<**p<<endl;       
        
}

//使用指针的指针
void func_point_point()
{
     int *a = 0;      
    func(&a);
    cout<<"a="<<a<<"*a="<<*a<<endl;
    delete a;
    cout<<"a="<<a<<"*a="<<*a<<endl;
}

//内存COPY
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

//指针运算
void fun_point_yunshuan()
 {
    int c[5]  = {1, 2, 3, 4, 5};
    int *ptr = (int*)(c + 1);
    printf("%d, %d\n", *(c + 1), *(ptr-1));
 }  

//结构体初始化
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

//删除空指针
void fun_delnullptr()
{
    int *test1 = new int(3);
    delete test1;
    test1 = nullptr;
    if(test1 != nullptr)
        delete test1;
}

//结构体COPY
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

//虚函数使用
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



 
void Swap(int &a,int &b)
{

  int temp = a;
  a = b ;
  b = temp;
}

void Swap(int *a,int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;

}

void Swap(string &a,string &b )
{
    string temp = a;
    a = b ;
    b = temp;
}

void Swap(string *a,string *b )
{
    string temp = *a;
    *a = *b ;
    *b = temp;
}

template<typename T>
void Swap(T &a, T&b)
{
    T temp = a;
    a = b ;
    b = temp;
};


template<>
void Swap( MATERIAL &ma, MATERIAL &mb)
{
    MATERIAL temp = ma;
    ma = mb;
    mb = temp;
}

void fun_testswap()
{
    int a = 1;int b = 2;
    Swap(a,b);
    cout<<"a = "<<a<<"b = "<<b<<endl;
    Swap(&a,&b);
    cout<<"a = "<<a<<"b = "<<b<<endl;

    string s1 = "hello";
    string s2 = "wfg";
    Swap(s1,s2);
    cout<<"s1 = "<<s1 <<"s2 = "<<s2 <<endl;
    Swap(&s1,&s2);
    cout<<"s1 = "<<s1 <<"s2 = "<<s2 <<endl;
}

void fun_testswap1()
    {
        
    int a = 10,b=30;
    Swap<int>(a,b);
    cout<<"a= "<<a<<"b= "<<b<<endl;

    string s1 = "hello";
    string s2 = "wfg";
    Swap(s1, s2);
    cout<<"s1= "<<s1<<"s2= "<<s2<<endl;    
    
}

void fun_testswap2()
{
    MATERIAL ma;
    ma.nID = 1;
    ma.nLength = 100;

    MATERIAL mb;
    mb.nID = 2;
    mb.nLength = 200;
    Swap(ma,mb);
    cout<<"ma.nID="<<ma.nID<<"ma.nLength="<<ma.nLength<<endl;
}
int func()
{
  return 1;
}
void fun_testdeclartype()
{short a = 5;
  short b = 6;
  decltype((a)) c = b;
  decltype(func()) d = 1;
 

  cout<<"b = "<<b<<endl;}


void fun_testfan()
{
    

    Stack<int> stack(5);

  

    stack.enquence(1);   
     
    stack.enquence(2);
    stack.enquence(3);
    stack.enquence(4);
    stack.enquence(5);  



    while(stack.isempty()==false)
    {
      int b ;
        stack.dequence(b);
      cout<<"b = " << b<< endl;
    }

  cout<<"stack.empty()="<<stack.isempty()<<endl;
  cout<<"stack.isfull()="<<stack.isfull()<<endl;
  


  Array<int> a;
  a[0] = 0;
  a[1] = 1;
  a[2] = 2;

  for(int i = 0;i<2;i++)
  {
    cout<<a[i]<<endl;
  }
  

   Array<string> b;
  b[0] = "wfg";
  b[1] = "hello";
  b[2] = "lxx";

  for(int i = 0;i<2;i++)
  {
    cout<<b[i]<<endl;
  }
  

  Vector<int> v(10);
  v[1]= 1;
  v[2] = 2;
  v[20] = 100;

int size = v.getsize();
cout<<"size = "<<size<<endl;
for(int i=0;i<size;i++)
{
  cout<<" "<<v[i]<<endl;
}

}  

