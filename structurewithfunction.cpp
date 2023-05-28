#include<iostream>
using namespace std;
struct student
{
    int roll_no;
	char name[50];
	float per;	
};
void display_data(student);  //function declaration
int main()
{
	student s;
	cout<<"enter the name :"<<endl;
	cin.get(s.name,50);
	cout<<"enter the rollno :"<<endl;
	cin>>s.roll_no;
	cout<<"enter the per :"<<endl;
	cin>>s.per;
	
	display_data(s); //call function
}
void display_data(student s) //define function
{
	cout<<"display all data of person :"<<endl;
	cout<<"RollNo is :"<<s.roll_no<<endl;
	cout<<"Name is :"<<s.name<<endl;
	cout<<"Per is :"<<s.per<<endl;
}
