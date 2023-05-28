#include<iostream>
using namespace std;
struct person
{
	char name[50];
	int age;
	float salary;
};
int main()
{
	person p;
	cout<<"enter the name :"<<endl;
	cin.get(p.name,50);
	cout<<"enter the age :"<<endl;
	cin>>p.age;
	cout<<"enter the salary :"<<endl;
	cin>>p.salary;
	
	cout<<endl<<"display all data of person :"<<endl;
	cout<<p.name<<endl;
	cout<<p.age<<endl;
	cout<<p.salary;
}
