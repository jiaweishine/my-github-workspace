#include "book.h"
#include "book.cpp"
#include <cstdlib>
#include <conio.h> 
int main()
{
	book book1;
	cout<<"请输入书名：";
	cin>>book1.bookname;
	cout<<endl<<"请输入价格：";
	cin>>book1.price;
	cout<<endl;
	cout<<"按b/B借书，按r/R还书，按s/S查询图书情况,按e/E退出系统"<<endl;
	while(1)
	{
		getch(); 
    	while(getch()=='b'||getch()=='B')
    	{
        	cout<<book1.borrow()<<endl;
   		}
    	while(getch()=='r'||getch()=='R')
    	{
        cout<<book1.restore()<<endl;
    	}
    	while(getch()=='s'||getch()=='S')
    	{
        	book1.display();
    	}
    	while(getch()=='e'||getch()=='E')
    	{ 
        	exit(0);
   		}
	}
} 
