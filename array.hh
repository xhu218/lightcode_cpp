#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

#ifndef ARRAY_H
#define ARRAY_H

template <class T> class Array {
  private:
    T items[10];

  public:
    Array() {}
    ~Array() {}

    T& operator[](int ii) { return items[ii]; }
};

#endif