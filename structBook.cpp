/*Structure
 1) Structure is collection of dissimilar elements.
 2) Structure is a way to group variables.
 3) Structure is used to create data type.
 4) Structure mean in structure we can store different types of datatype variable 
*/ 

// Structure with Function program
#include<iostream>
using namespace std;
struct book                                                  //  struct book
{                                                           //   {
   int bookid;       //4byte    total=9byte                //      int bookid;
   char title[20];  //1byte                               //       char title[20];
   float price;	     //4byte                             //        float price;
   //in cpp in struct we can use function but not in c 
   void Book()
   {
   	cout<<"enter the bookid title and price of book"<<endl;
    cin>>bookid>>title>>price;
   }
   void display()
   {
    cout<<bookid<<"\t"<<title<<"\t"<<price<<endl;
   }
};                                                  //      }b2;
int main()
{     //create b variable or object 
  book b;           //struct book b;//struct keyword is optional in cpp before datatype book
  b.Book();     //call function Book
  b.display();  //call function display

}


