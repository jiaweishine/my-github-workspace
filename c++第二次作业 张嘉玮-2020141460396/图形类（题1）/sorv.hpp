#include <iostream>
using namespace std;
class Sorv
{
	public:
	void setdate(double x,double y,double z)
	{
		a=x;
		b=y;
		h=z;
		v=a*b*h;
		s=2*(a*b+a*h+b*h);
	}
	void print()
	{
		cout<<"����߷ֱ�Ϊ:"<<a<<","<<b<<","<<h<<endl;
		cout<<"���Ϊ��"<< v<<endl;
		cout<<"�����Ϊ��"<<s<<endl; 
	}
	private:
		double a,b,h,v,s;
};
