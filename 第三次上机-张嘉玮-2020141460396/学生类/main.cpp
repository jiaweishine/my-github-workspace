#include "student.h"
#include "student.cpp"
int main()
{
	cout<<"请依次输入每位同学的姓名、学号、个人成绩，最后输入团体成绩"<<endl;
	student *p=new student[4];
	student t;
	for(int j=0;j<4;j++)
	{
		cin>>p[j].name;
		cin>>p[j].id;
		cin>>p[j].pgrades;
	}
	cin>>student::agrades;
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			if(p[i].pgrades<p[j].pgrades)
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
			else if(p[i].pgrades==p[j].pgrades)
			{
				for(int k=0;k<6;k++)
				{
					if(p[i].id[k]<p[j].id[k])
					{
						t=p[i];
						p[i]=p[j];
						p[j]=t;
						break;
					}
				}
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		p[i].print();
	}
}
