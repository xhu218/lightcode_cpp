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

