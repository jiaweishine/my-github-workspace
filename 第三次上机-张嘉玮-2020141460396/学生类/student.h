#ifndef _STUDENT_
#define _STUDENT_
#include <iostream>
#include <string>
using namespace std;
class student
{
	public:
		string name,id;
		void print();
		double pgrades;
		void setid(string id);
		void setname(string name);
		void setpgrades(double pgrades);
		static double agrades;
		void sort(student *p);
};
double student::agrades=0;
#endif
