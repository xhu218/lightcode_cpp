#include "array.hh"
#include "queen.hh"
#include "stack.hh"
#include "vector.hh"
#include <algorithm>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>
using namespace std;

int main() {
//    typedefine unsinged int uint
    // auto f = fun_testfan;
    // f();

    Vector<Stack<string>> vs(2);
    vs[0].enquence("basic_string<char> 11");
    vs[0].enquence("basic_string<char> 22");

    vs[1].enquence("basic_string<char> 33");
    vs[1].enquence("basic_string<char> 44");

    for (int ii = 0; ii < vs.getsize(); ii++) {

        cout << vs[ii].top << endl;
        while (vs[ii].isempty() == false) {
            string s;
            vs[ii].dequence(s);
            cout << s << endl;
        }
    }

    Stack<Vector<string>> s2(5);

    Vector<string> temp(4);
    temp[0] = "wfg1";
    temp[1] = "lxx2";
    temp[2] = "lxx3";
    temp[3] = "lxx4";

    s2.enquence(temp);
    s2.enquence(temp);
    s2.enquence(temp);
    s2.enquence(temp);
    s2.enquence(temp);

    while (s2.isempty() == false) {
        Vector<string> temp1;
        s2.dequence(temp1);

        for (int ii = 0; ii < temp1.getsize(); ii++) {
            cout << temp1[ii] << endl;
        }
        cout<<endl;
    }

    return 0;
}
