#ifndef _date_
#define _date_
#include <iostream>

using namespace std;
class Date
{
	public:
		Date(int year=1990,int month=1,int day=1);
		void setDate(int year,int month,int day);
		void setYear(int year);
		int getYear();
		void setMonth(int month);
		int getMonth();
		void setDay(int year,int month,int day);
		int getDay();
		void printFullYear();
		void printStandardYear();
		int fullYearsTo(int year,int month,int day);
		int daysTo(int year,int month,int day);
	private:
		int year1;
		int month1;
		int day1;
		char separator;
};
#endif
Date::Date(int year,int month,int day)
{
	year1=year;
	month1=month;
	day1=day;
}
void Date::setDate(int year,int month,int day)
{
	year1=year;
	month1=month;
	day1=day;
}
void Date::setYear(int year)
{
	year1=year;
}
int Date::getYear()
{
	return year1;
}
void Date::setMonth(int month)
{
	if(month>=1&&month<=12)
	month1=month;
	else
	month1=1;
}
int Date::getMonth()
{
	return month1;
}
void Date::setDay(int year,int month,int day)
{
	if((month>=1&&month<=7&&month%2==1)||(month>=8&&month<=12&&month%2==0))
	{
		if(day>=1&&day<=31)
		{
			day1=day;
		}
		else
		{
			day1=1;
		}
	}
	else if(month==2)
	{
		if(year%4==0&&year%100!=0||year%400==0)
		{
			if(day>=1&&day<=29)
			{
				day1=day;
			}
			else
			{
				day1=1;
			}
		}
		else
		{
			if(day>=1&&day<=28)
			{
				day1=day;
			}
			else
			{
				day1=1;
			}
		}
	}
	else
	{
		if(day>=1&&day<=31)
		{
			day1=day;
		}
		else
		{
			day1=1;
		}
	}
}
int Date::getDay()
{
	return day1;
}
void Date::printFullYear()
{
	separator='-';
    cout<<getYear()<<separator;
    if(month1<=9)
    cout<<"0"<<getMonth()<<separator;
    else
    cout<<getMonth()<<separator;
    if(day1<=9)
    cout<<"0"<<getDay()<<endl;
    else
    cout<<getDay()<<endl;
}
void Date::printStandardYear()
{
	int r,e,p;
	r=year1/1000;
	e=(year1-r*1000)/100;
	p=year1-r*1000-e*100;
	cout<<p<<"-";
	if(month1<=9)
    cout<<"0"<<getMonth()<<separator;
    else
    cout<<getMonth()<<separator;
    if(day1<=9)
    cout<<"0"<<getDay()<<endl;
    else
    cout<<getDay()<<endl;
}
int Date::fullYearsTo(int year,int month,int day)
{
	int u;
	u=year-year1-1;
	return u;
}
int Date::daysTo(int year,int month,int day)
{
	if(year>=year1)
	{
		int sum=0,run,normal,ry,ny,msum=0,msum1=0;
		run=(year-year1-1)/4;
		ry=366*run;
		normal=year-year1-run-1;
		ny=365*normal;
		int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		if(year1%4==0&&year1%100!=0||year1%400==0)
		{
			a[1]=29;
		}
		if(year%4==0&&year%100!=0||year%400==0)
		{
			a[1]=29;
		}
		for(int i=0;i<month1-1;i++)
		{
			msum1+=a[i];
		}
		msum1=msum1+day1;
		for(int i=0;i<month-1;i++)
		{
			msum+=a[i];
		}
		msum=msum+day;
		sum=ry+ny+365-msum1+msum;
		if(year1%4==0&&year1%100!=0||year1%400==0)
		sum=sum+1;
		return sum;
	}
	else
	{
		int sum=0,run,normal,ry,ny,msum=0,msum1=0;
		run=(year1-year-1)/4;
		ry=366*run;
		normal=year1-year-run-1;
		ny=365*normal;
		int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
		if(year1%4==0&&year1%100!=0||year1%400==0)
		{
			a[1]=29;
		}
		if(year%4==0&&year%100!=0||year%400==0)
		{
			a[1]=29;
		}
		for(int i=0;i<month1-1;i++)
		{
			msum1+=a[i];
		}
		msum1=msum1+day1;
		for(int i=0;i<month-1;i++)
		{
			msum+=a[i];
		}
		msum=msum+day;
		sum=ry+ny+365-msum+msum1+1;
		if(year%4==0&&year%100!=0||year%400==0)
		sum=sum+1;
		return -sum;
	}
}
int main()
{
	Date birthDate(1969,8,11);
	birthDate.printFullYear();
	birthDate.printStandardYear();
	cout<<birthDate.fullYearsTo(2010,4,15)<<endl;
	cout<<birthDate.daysTo(2010,4,15)<<endl;
	cout<<birthDate.daysTo(1949,10,1)<<endl;
	return 0;
}
