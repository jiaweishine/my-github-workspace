/*输入一个整数，代表输入数组个数，将每个数组(定长为10)的值逆序输出(要求用函数实现)。*/
#include <iostream>
using namespace std;
string reverse(string s1)
{
    for(int i=9;i>=0;i--)
    {
    	cout<<s1[i];
    }
    cout<<endl;
    return s1;
}
int main()
{
    string s1,s2;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<10;j++)
    	{
    		cin>>s1[j];
    	}
        reverse(s1);
    }
    return 0;
}
