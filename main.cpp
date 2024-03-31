#include "queen.hh"
#include <iostream>
//#include "vector.hh"
#include <array>
#include <stdio.h>
#include <string.h>
#include <string>
#include <utility>
#include <vector>

using namespace std;
namespace AA {
int aa;
}
using namespace AA;

template <typename T> void func(const T& arr) {
    for (int ii = 0; ii < arr.size(); ii++) {
        for (int jj = 0; jj < arr[ii].size(); jj++) {
            cout << arr[ii][jj] << " ";
        }
        cout << endl;
    }
}

void func1(int (*arr)[5], int n) {
    for (int ii = 0; ii < n; ii++) {
        for (int jj = 0; jj < 5; jj++) {
            cout << arr[ii][jj] << " ";
        }
        cout << endl;
    }
}

int main() {


    
    // func(arr);

    int bb[10][5];
    for (int ii = 0; ii < 10; ii++) {
        for (int jj = 0; jj < 5; jj++) {
            bb[ii][jj] = jj * 10 + ii;
        }
    }

    // func1(bb,10);

    /*

    vector<int> v ={1,2,3};
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }

    for(const int & i:v)
    {
      cout<<i<<endl;
    }

  */
    cout << "aa = " << aa << endl;
    char *a = new char[1] ;
    strcpy(a,"hello wfg");
    char b[] = "hello world";
    
    // fun_test_copy_construct();

    // fun_testpara_const();
    //_fun_virtualfun();
    // fun_testmain();
    // fun_testfan();
    // fun_testfan1();

    // fun_testtemplateinherit();
    // fun_testtemplateclassinherit();

    // cout<<__FILE__<<"$"<<__DATE__<<"$"<<__TIME__<<"$"<<__LINE__<<endl;

    return 0;
}
