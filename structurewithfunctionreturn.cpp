#include<iostream>
#include<string.h>
using namespace std;
struct student
{
	int roll_no;
	char name[40];
	float per;
};
 student getdata(student); //function declaration
 void display(student); //function decalration
 
 int main()
 {
 	student s,temp;
 	temp=getdata(s);
 	s=temp;
 	
 	 display(s);
 }
 
 	student getdata(student s){ //function defination
    s.roll_no =12;
 	strcpy(s.name,"priya");
 	s.per =66.4;
 	return s;
 }
 void display(student s) //function defination
 {
 	cout<<s.roll_no<<"\t"<<s.name<<"\t"<<s.per<<endl;
 }
 
