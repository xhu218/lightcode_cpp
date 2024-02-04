#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

#ifndef STATCK_H
#define STATCK_H

template <class T> class Stack {
  private:
    T* item;

    int stacksize;

  public:
    Stack();
    int top;
    Stack(int size);
    bool isempty();
    bool isfull();
    bool enquence(const T & a);
    bool dequence(T& it);
    Stack<T>& operator=(const Stack<T>& v);

    ~Stack();
};

template <class T> Stack<T>::Stack() {
    top = 0;
    stacksize = 3;
    item = new T[stacksize];
}
template <class T> Stack<T>::Stack(int size) {
    top = 0;
    stacksize = size;
    item = new T[size];
}

template <class T> bool Stack<T>::enquence( const T & a) {
    if (top < stacksize) {
        item[top++] = a;
        return true;
    }
    return false;

}

template <class T> bool Stack<T>::dequence(T& it) {
    if (top > 0) {
        it = item[--top];
        return true;

    } else {
        return false;
    }
}

template <class T> Stack<T>& Stack<T>::operator=(const Stack<T>& v) {
    delete[] item;
    stacksize = v.stacksize;
    item = new T[stacksize];
    for (int ii = 0; ii < stacksize; ii++)
        item[ii] = v.item[ii];
    top = v.top;
    return *this;
}

template <class T> bool Stack<T>::isfull() { return top == stacksize; }

template <class T> bool Stack<T>::isempty() { return top == 0; }

template <class T> Stack<T>::~Stack() {
    if (item != nullptr) {
        delete[] item;
        item = nullptr;
    }
}

#endif