#include "student.h"
void student::setid(string id)
{
	for(int i=0;i<6;i++)
	{
		this->id[i]=id[i];
	}
}
void student::setname(string name)
{
	for(int i=0;i<10;i++)
	{
		this->name[i]=name[i];
	}
}
void student::setpgrades(double pgrades)
{
	this->pgrades=pgrades;
}
void student::print()
{
	cout<<"����"<<name<<" "<<"ѧ��"<<id<<" "<<"���˳ɼ�"<<pgrades<<" "<<"�Ŷӳɼ�"<<agrades<<endl; 
}

