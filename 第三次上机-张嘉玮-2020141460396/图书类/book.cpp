#include "book.h"

void book::setbookname(string bookname)
{
	for(int i=0;i<20;i++)
	{
		this->bookname[i]=bookname[i];
	}
}
void book::display()
{
	cout<<"����"<<author<<" "<<"����"<<bookname<<" "<<"�۸�"<<price<<" "<<"��������"<<number<<endl; 
}
int book::borrow()
{
	number--;
	cout<<"�ɹ�����"<<endl;
	return number;
}
int book::restore()
{
	number++;
	cout<<"�ɹ�����"<<endl;
	return number; 
}
void book::setprice(double price)
{
	this->price=price;
}
