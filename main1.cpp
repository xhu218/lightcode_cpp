#include <iostream>
using namespace std;

//行指针练习
//
//
//
void show( int (*p)[3], int len)
{
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<< p[i][j] <<" ";
		}
		cout<<endl;
	}
}

void show1( int p[][3], int len)
{
	for(int i=0;i<len;i++){
		for(int j=0;j<3;j++){
			cout << p[i][j] << " ";
		}
		cout<<endl;
	}
}

int main()
{
	cout<<"hello world"<<endl;
	int a[2][3] ={ {1,2,3},{4,5,6}};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j] <<" ";
		}
		cout<<endl;
	}
	show(a,2);
	show1(a,2);
	return 0;
}

