#include<iostream>
using namespace std;
struct employee
{
	char name[40];
	int age;
	float salary;
};
void show_data(employee); //function declare
int main()
{
	employee e;
	cout<<"enter the name :"<<endl;
	cin.get(e.name,40);
	cout<<"enter the age :"<<endl;
	cin>>e.age;
	cout<<"enter the salary :"<<endl;
	cin>>e.salary;
	
	show_data(e); //call function
}
void show_data(employee e)  //function defination
{
	cout<<"display all data employee :"<<endl;
	cout<<"Name is :"<<e.name<<endl;
	cout<<"Age is :"<<e.age<<endl;
	cout<<"Salary is :"<<e.salary;
}

