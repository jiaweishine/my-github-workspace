/*��дһ��������ʵ�����ַ�����ÿ�����ַ�֮�䶼����һ���ַ�����ԭ�ַ���Ϊabc�������ַ�Ϊt���´�Ϊatbtct��
�ڵ��øú���ʵ���ַ���ת���������ת������´���*/
#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string insert(string s1,char m)
{
	int l;
	l=s1.length();
	string s2;
	for(int i=0,j=-2;i<l;i++)
	{
		j=j+2;
		s2[j]=s1[i];
		cout<<s2[j];
		cout<<m;
	}
}
int main(int argc, char** argv) {
	string s1;
	char m;
	cin>>s1>>m;
	insert(s1,m);
	return 0;
}
