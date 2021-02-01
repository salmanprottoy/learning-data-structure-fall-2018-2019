#include<iostream>
#include<string>
#include<math.h>
using namespace std;
# define sz 100
int s[sz],u,r;
int top=-1;

void push(int x)
{
    if(top >= sz-1)
	cout<<"stack is full";
    else
	{
        top++;
        s[top]= x;
	}
}
int pop()
{
    if(top<0)
	cout<<"underflow: stack is empty";
    else
	{
	    int w=s[top];
        top--;
        return w;
	}
}
void EvaluatePrefix(string a)
{
    //write your code here
	int x,m,n,length;
	length=a.size();
	for(int i=length-1;i>=0;i--)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			x=a[i]-48;
			push(x);
		}
		else
		{
			m=pop();
			n=pop();
			if(a[i]=='+')
				push(m+n);
			else if(a[i]=='-')
				push(m-n);
			else if(a[i]=='*')
				push(m*n);
			else if(a[i]=='/')
				push(m/n);
			else if(a[i]=='^')
			{
				int a;
				a=pow(m,n);
				push(a);
			}
			else if(a[i]=='%')
			{
				push(m%n);
			}

		}
	}
	x=pop();
	cout<<x<<endl;
}
void EvaluatePostfix(string a)
{
    //write your code here
	int x,m,n,length;
	length=a.size();
	for(int i=0;i<length;i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			x=a[i]-48;
			push(x);
		}
		else
		{
			n=pop();
			m=pop();
			if(a[i]=='+')
				push(m+n);
			else if(a[i]=='-')
				push(m-n);
			else if(a[i]=='*')
				push(m*n);
			else if(a[i]=='/')
				push(m/n);
			else if(a[i]=='^')
			{
				int a;
				a=pow(m,n);
				push(a);
			}
			else if(a[i]=='%')
			{
				push(m%n);
			}
		}
	}
	x=pop();
	cout<<x<<endl;
}
int main()
{
    string a;
    cout<<"ENTER prefix EXPRESSION : "<<endl;
    cin>>a;
    EvaluatePrefix(a);
    cout<<"ENTER postfix EXPRESSION : "<<endl;
    cin>>a;
    EvaluatePostfix(a);

}
