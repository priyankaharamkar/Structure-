#include<iostream>
using namespace std;
struct distance
{
	int feet;
	float inch;
};
 int main()
 {
 	 struct distance d,*ptr; //struct is must with pointer
 	ptr=&d;
 	cout<<"enter the feet"<<endl;
    cin>>(*ptr).feet;
  //  cin>>d.feet;
 	cout<<"enter the inch"<<endl;
 	cin>>(*ptr).inch;
 //cin>>d.inch;
 	
 	cout<<"display data :"<<endl;
 	cout<<(*ptr).feet<<"\t"<<(*ptr).inch<<endl;
 //cout<<d.feet<<"\t"<<d.inch;
 }
