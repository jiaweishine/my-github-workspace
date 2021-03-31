/*在矩阵（不存在相等的值）中，一个数在所在行中是最大值，在所在列中是最小值，则被称为鞍点。设计程序，
求出矩阵中的鞍点，存在输出该鞍点的值，不存在则输出no。*/
#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m]; 
	int count1=0,count2=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		int k=0; 
		int num=a[i][0];
		for(int j=0;j<m;j++)
		{
			if(num<a[i][j])
			{
				num=a[i][j];
				k=j;
			}
		}
		for(int y=0;y<n;y++)
		{
			if(num>a[y][k])
			{
				count1=1;
				break;
			}
		}
		if(count1==0)
		{
			cout<<num;
			count2++;
		}
	}
	if(count2==0)
	{
		cout<<"no"<<endl;
	}
	return 0;
} 
