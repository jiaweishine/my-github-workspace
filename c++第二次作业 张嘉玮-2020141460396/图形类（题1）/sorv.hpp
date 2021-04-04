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
		cout<<"长宽高分别为:"<<a<<","<<b<<","<<h<<endl;
		cout<<"体积为："<< v<<endl;
		cout<<"表面积为："<<s<<endl; 
	}
	private:
		double a,b,h,v,s;
};
