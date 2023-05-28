#include<iostream>
#include<string.h>
using namespace std;
struct student
{
	int rollno;
	char name[40];
	float per;
	
};
int main()
{
	struct student s;
	s.rollno=1;
	strcpy(s.name,"priya");
	s.per=39.44;
	cout<<s.rollno<<"\t"<<s.name<<"\t"<<s.per<<endl;
}
