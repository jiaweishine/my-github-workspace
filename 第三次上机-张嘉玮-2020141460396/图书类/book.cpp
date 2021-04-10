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
	cout<<"作者"<<author<<" "<<"书名"<<bookname<<" "<<"价格"<<price<<" "<<"存书数量"<<number<<endl; 
}
int book::borrow()
{
	number--;
	cout<<"成功借书"<<endl;
	return number;
}
int book::restore()
{
	number++;
	cout<<"成功还书"<<endl;
	return number; 
}
void book::setprice(double price)
{
	this->price=price;
}
