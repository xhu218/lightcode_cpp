#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <typeinfo>

#include <thread>

using namespace std;

#ifndef PERSON_HPP
#define PERSON_HPP

#define product(x) (x*x)

typedef struct tagMATERIAL {
    int nID;
    int nLength;
    tagMATERIAL() { nLength = 100; }
} MATERIAL, *LPMATERIAL;

typedef struct tagEVENT {
    int nID;
    string name;
    MATERIAL material;
} EVENT, *LPEVENT;

struct STUDENT {
    char name[20];

    int age;
    int* a;
};

class queen {

  public:
    int fact(int n);
};

class A {
  public:
    virtual void print(void) { cout << "A:print" << endl; }
    A() {}
    A(const A& a) {
        this->m_a = a.m_a;
        cout << "copy contruct" << endl;
    }

  private:
    int m_a;
};

class B : public A {
  public:
    void print(void) override { cout << "B:print" << endl; }
};

void _fun_virtualfun();

void print_func(void (*pf)(int, int));

void my_func(int a, int b);

void sum();

int fibonacci(int a);

void hanoi(int i, char x, char y, char z);

void func(int** a);

void func_point_point();

void fun_memcpy();

void fun_point_yunshuan();

void fun_struct_init();

void fun_delnullptr();

void fun_struct_copy();

void fun_testmain();

void Swap(int& a, int& b);

void Swap(int* a, int* b);

void Swap(string& a, string& b);

void Swap(string* a, string* b);

void fun_testswap();

void fun_testswap1();

void fun_testswap2();

template <typename T> void Swap(T& a, T& b);

template <> void Swap(MATERIAL& ma, MATERIAL& mb);

void fun_testfan();

void fun_testfan1();

void fun_testpara_const();

inline void func(const A a) {}
inline void func2(const A& a) {}
inline A& func1() {
    static A a;
    return a;
}

inline void fun_test_copy_construct() {

    A a;
    A b(a);   //会      调用一次copy构造函数
    func(a);  //会      调用一次copy构造函数
    func1();  //不会    调用一次copy构造函数
    func2(a); //不会    调用一次copy构造函数
}

class A1 {
  public:
    void show() { cout << "A1:show()" << endl; }
};
class A2 {
  public:
    void show() { cout << "A2:show()" << endl; }
};
class A3 {
  public:
    void show() { cout << "A3:show()" << endl; }
};
template <class T> class D : public T {
  public:
    void show1() { cout << "D:show()" << endl; }
};

inline void fun_testtemplateinherit() {
    D<A1> d1;
    d1.show1();
    d1.show();

    D<A2> d2;
    d2.show1();
    d2.show();
}

template <class T1, class T2> class A4 {
  private:
    T1 m_a;
    T2 m_b;

  public:
    A4(T1 a, T2 b) : m_a(a), m_b(b) {}
    void show() { cout << "a = " << m_a << "b = " << m_b << endl; }
    friend void show1(const A4<T1,T2> & t)
    {
      cout<<"a = " << t.m_a << "b = " << t.m_b<<endl;
    }
};
template <class T> inline void show(T t) { t.show(); }

inline void fun_testtemplateclassinherit() {

    A4<int, string> a4(1, "222");
    show(a4);

    A3 a3;
    show(a3);

  
    show1(a4);
  
}
//程序员面试宝典

class Abc{
  char d,e;
  int a;
};
struct bcd
{
  char d,e;
  int a;
};
inline void testp1()
{
  int i=3,j,k;
  j = i++*i++;
  k = ++i*++i;;

  printf("j = %d,k = %d\n",j,k);


  unsigned int a = 6;
  int b = -20;
  if(a+b>6)
  {printf("greater than 6");}
  printf("result = %d",a+b);

  char* ss1 = "12345";
  char ss2[] = "12345";

  printf("sizeof ss1 = %d, sizeof ss2 = %d\n",sizeof(ss1),sizeof(ss2));

  printf("sizeof Abc = %d\n",sizeof(Abc));
  Abc a1;
  Abc *a2 = new Abc();
  Abc *a3;
  printf("sizeof a1 = %d,a2 = %d, a3 = %d bcd = %d \n",sizeof(a1),sizeof(a2),sizeof(a3),sizeof(bcd));
  
}


// 线程函数，将在新线程中执行
inline void threadFunction() {
    std::cout << "This is a new thread.\n" << std::endl;
}

#endif