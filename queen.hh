#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

#ifndef PERSON_HPP
#define PERSON_HPP

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
#endif