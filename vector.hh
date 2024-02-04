#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

#ifndef VECTOR_H
#define VECTOR_H

template <class T> class Vector {
  private:
    T* items;
    int len;

  public:
    Vector() {
        len = 2;
        items = new T[2];
    }

    Vector(int size) : len(size) { items = new T[size]; }
    ~Vector() {
        if (items != nullptr) {
            delete[] items;
            items = nullptr;
        }
    }

    int getsize() { return len; }

    void resize(int size) {
        if (size <= len)
            return;
        T* temp = new T[size];
        for (int i = 0; i < len; i++) {
            temp[i] = items[i];
        }
        delete [] items;
        items = temp;
        len = size;
    }

    T& operator[](int ii) {
        if (ii >= len)
            resize(ii+1);
        return items[ii];
    }

    Vector<T>& operator=(const Vector<T>& v) {
        delete[] items;
        len = v.len;
        items = new T[len];
        for (int ii = 0; ii < len; ii++)
            items[ii] = v.items[ii];
        return *this;
    }

    const T& operator[](int ii) const { return items[ii]; }
};

#endif