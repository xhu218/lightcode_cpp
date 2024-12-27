
#include <iostream>
using namespace std;

class Person {
private:
    // 私有成员变量（属性）
    std::string name;
    int age;
	char *a;

public:
    // 构造函数
    Person(const std::string& name, int age) : name(name), age(age) {
        std::cout << "Person created: " << this->name << std::endl;
		a = new char[256];
		std::cout<< "sizeof(a)"<<sizeof(a)<<endl;
    }
	
	void init(){
		std::cout << "Person created: 1111" << this->name << std::endl;
		a = new char[256];
	}

    // 析构函数
    ~Person() {
        std::cout << "Person destroyed: " << this->name << std::endl;
		if(a !=nullptr)
		{
			delete []a;
			a = nullptr;
		}
    }
	
	void distroy(){
		std::cout << "Person destroyed 111: " << this->name << std::endl;
		if(a !=nullptr)
		{
			delete []a;
			a = nullptr;
		}
	}

    // 公有成员函数（方法）
    void introduce() const {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
    }

    // 获取器（访问私有成员）
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    // 设置器（修改私有成员）
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        if (newAge > 0) {
            age = newAge;
        } else {
            std::cout << "Invalid age!" << std::endl;
        }
    }
};



int main()
{
	
	// 创建一个 Person 对象
    Person person("Alice", 30);

    // 调用成员函数
    person.introduce();

    // 修改对象的属性
    person.setName("Bob");
    person.setAge(25);

    // 再次调用成员函数
    person.introduce();
	
	person.distroy();
	
	person.init();
	
	person.distroy();
	
	
	
	
	int a = 100;
	int a1 = 2;
	int *b = &a;
	*b = 200;
	cout<<"a = "<<a<<" *b  = "<<*b<<endl;
	
	//常量指针，这是一个常量，不能改他的东西了
	//
	int const *c = &a;
        //*c = 400;//这行代码有问题
	c = &a1;   //可以指向其他地方	


	//指针常量，这个指针不能再动了。
	//
	int *const d = &a;
	//d = &a1;   //这行有问题，不能指向其他地方了，
	*d = 200;  //但是可以重新赋值

	const int *const e = &a;
	//e = &a1;   //这行有问题
	//*e = 200;  //这行有问题

	return 0;
}
