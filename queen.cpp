#include "queen.hh"

//递归求阶乘
int queen::fact(int n) {
    if (n < 0)
        return 0;
    else if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}


