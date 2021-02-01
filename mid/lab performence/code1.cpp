#include<iostream>
using namespace std;
int main(void)
{
	int a[2][3],b[2][3],c[2][3];
	cout<<"Enter elements of matrix A[2][3]:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter elements of matrix B[2][3]:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"Sum of matrix A and B is:"<<endl;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
