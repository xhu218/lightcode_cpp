#include "queen.hh"
#include <cstddef>
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

// 定义一个结构体
struct Person {
    byte *data;
    int age;
};



int main() {

/*
      // 创建一个新线程，并指定要执行的函数
    std::thread myThread(threadFunction);

    // 主线程继续执行自己的任务
    std::cout << "This is the main thread.\n" << std::endl;

    // 等待新线程执行完成
    myThread.join();
    // func(arr);

    int bb[10][5];
    for (int ii = 0; ii < 10; ii++) {
        for (int jj = 0; jj < 5; jj++) {
            bb[ii][jj] = jj * 10 + ii;
        }
    }

    testp1();

    // func1(bb,10);

    

    vector<int> v ={1,2,3};
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }

    for(const int & i:v)
    {
      cout<<i<<endl;
    }

  
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
*/
/*
    const char *str = "123.456";
    char *end;
    double number = strtod(str, &end);
 
    // 检查是否有错误发生
    if (end == str) {
        printf("无法转换字符串到浮点数\n");
    } else {
        printf("转换后的浮点数为: %f\n", number);
    }
 
*/

    // 创建一个包含3个Person结构体的数组
    Person people[3];
 
    // 给数组中的结构体赋值
    people[0].data =new byte[10];
    people[0].age = 30;
    people[1].data = new byte[20];
    people[1].age = 25;
    people[2].data = new byte[30];
    people[2].age = 35;
 
    // 打印每个人的信息
    for (int i = 0; i < 3; ++i) {
        //std::cout << "Name: " << people[i].name << ", Age: " << people[i].age << std::endl;
    }
    cout<<"sizeof people="<<sizeof(people[0].data)<<endl;
    cout<<"sizeof people="<<sizeof(people[1].data)<<endl;
    cout<<"sizeof people="<<sizeof(people[2].data)<<endl;

    char dest[10];
    char src[200] = "Hello, memcpy exception example!";
    try {
    memcpy(dest,src,200);
      } catch (const char* msg) {
        std::cerr << "Caught exception: " << msg << std::endl;
    }

    printf("%s",src);
    printf("%s",dest);



    return 0;
}
