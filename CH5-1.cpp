#include<iostream>
using namespace std;
class Calculate
{
	public:
		
		void math(int a1,int b,int c,int d,int e)
		{
			cout<<"sum :\n"<<endl;
			cout<<"sum\t:"<<a1+b+c+d+e<<endl;
		}
		void math(int a2,int b,int c,int d)
		{
			cout<<"sub\t:"<<a2-b-c-d<<endl;
			cout<<"sub\t:"<<a2-b-c-d<<endl;
		}
		void math(int a3,int b,int c)
		{
			cout<<"multiplication:\n";
			cout<<"multi\t:"<<a3*b*c<<endl;
		}
		void math(int a,int b)
		{
			cout<<"divison:\n";
			cout<<"div\t:"<<a/b<<endl;
		}
};

int main()
{
	Calculate c;
	
	c.math(5,6,7,8,9);
	c.math(4,5,6,7);
	c.math(1,2,3);
	c.math(5,6);
}
