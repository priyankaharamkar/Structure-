//Complex Number in struct
#include<iostream>
using namespace std;
struct Complex
{
	private :
		int a,b;
	public:
		void setdata(int x,int y)
		{
			a=x;
			b=y;
		}
		void showdata()
		{
			cout<<a<<"\t"<<b;
		}
};
int main()
{
	Complex c1; //c1 is block of variable
	c1.setdata(20,4);
	c1.showdata();
}
