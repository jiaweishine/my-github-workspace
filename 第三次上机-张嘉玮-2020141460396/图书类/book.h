#ifndef _BOOK_
#define _BOOK_
#include <iostream>
#include <cstring>
using namespace std;
class book
{
	public:
		string bookname;
		double price;
		void display();
		int borrow();
		int restore();
		void setbookname(string bookname);
		static string author;
		void setprice(double price);
		int t;
		static int number;
};
string book::author="zhang jiawei";
int book::number=100;
#endif
