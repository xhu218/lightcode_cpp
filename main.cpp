#include <iostream>
#include "queen.hh"
#include <string.h>
#include <stdio.h>
#include <string>
using namespace std;


 

int main1516() {
    int n;
    //while (scanf("%d", &n) != EOF) 
    {
        n = 65535;
        int ans = n * (n + 1) / 2;   // (1)
        printf("%d\n\n", ans);
    }
    return 0;
}



//斐波那契数列，第一二项为1；后面的每一项为前两项之和
int fibonacci(int a){
    if (a == 1 || a == 2)
    {
        return 1;
    }
    else{
        return fibonacci(a - 1) + fibonacci(a - 2);
    }
}

//递归汉诺塔
void hanoi(int i, char x, char y, char z){
    if (i == 1){
        printf("%c -> %c\n", x, z);
    }
    else{
        hanoi(i - 1, x, z, y);
        printf("%c -> %c\n", x, z);
        hanoi(i - 1, y, x, z);
    }
}
typedef struct tagMATERIAL
{
    int nID;
    int nLength;
    tagMATERIAL()
    {
        nLength = 100;
    }
}MATERIAL,*LPMATERIAL;

typedef struct tagEVENT
{
    int nID;
    string name;
    MATERIAL material;
} EVENT,*LPEVENT;


void func(int **a)
{
        int **p = a;
        *p = new int (3);
        cout<<"p="<<p<<"*p="<<*p<<"**p="<<**p<<endl;
        
        
}


struct STUDENT
{
	char name[20];
  
	int age;
    int *a;
}; 
int main()
{
    /*
    int a[5]  = {1, 2, 3, 4, 5};
    int *ptr = (int*)(a + 1);
    printf("%d, %d", *(a + 1), *(ptr-1));
       
    EVENT event;
  
    printf("nLength = %d\n",event.material.nLength);
    if(event.material.nLength>0)
    {
      
    }
    else {
       
    
    }

    int *a = 0;
      
    func(&a);
    cout<<"a="<<a<<"*a="<<*a<<endl;
    delete a;
    cout<<"a="<<a<<"*a="<<*a<<endl;


  

    int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	//使用memcpy()函数将arr1数组的前20字节(即前5个整形)拷进arr2中
	memcpy(arr2, arr1, 20);
    memset(arr2,0,8);
 
	for (int i = 0; i < 10; i++)
		printf("%d\n", arr2[i]);

    

    struct STUDENT person = { "Pierre de Fermat",46,new int(3) };
	struct STUDENT person_copy = { 0 };

    */
 
	/* 使用memcpy拷贝结构体: */
    
    /*
	memcpy(&person_copy, &person, sizeof(person));
    person_copy.a = new int(*person.a);
    char name1[]="wfg";
    strcpy(  person.name, "wfg");
    *person.a = 100;
	printf("person_copy: %s, %d ,%d\n", person_copy.name, person_copy.age,*person_copy.a);
    printf("person: %s, %d ,\%d \n", person.name, person.age,*person.a);
    printf("person_copy: %s, %d %d \n", person_copy.name, person_copy.age,*person_copy.a);

    cout<<"sizeofint = "<<sizeof(int)<<endl;;
    */

    //函数指针
     print_func(my_func);



    cout<<"hello world"<<endl;
    queen q;
    cout<<q.fact(10)<<endl;
   return 0;
}

