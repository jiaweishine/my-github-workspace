#include "book.h"
#include "book.cpp"
#include <cstdlib>
#include <conio.h> 
int main()
{
	book book1;
	cout<<"������������";
	cin>>book1.bookname;
	cout<<endl<<"������۸�";
	cin>>book1.price;
	cout<<endl;
	cout<<"��b/B���飬��r/R���飬��s/S��ѯͼ�����,��e/E�˳�ϵͳ"<<endl;
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
