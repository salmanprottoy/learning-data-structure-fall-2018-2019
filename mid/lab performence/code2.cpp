#include<iostream>
using namespace std;
#define SIZE 5

int stck[SIZE];
int top;
void push(int x);
int pop();
int Top();
int isStackEmpty();
int isStackFull();
void display_stack();
int stackSize();

void push(int x)
{

	if(isStackFull()==1)
		{
			cout<<"Stack is full!"<<endl;
		}
	else
	{
		top++;
		stck[top] = x;
	}

}

int pop()
{
	int x;
	if(isStackEmpty()==1)
		{
			cout<<"Stack is empty!"<<endl;
			return 0;
		}
	else
	{
		x=stck[top];
		top--;
	}

	return x;
}

int isStackEmpty()
{

	return (top < 0);

}

int isStackFull()
{

	return (top>=SIZE-1);

}

int stackSize()
{
	return top+1;

}

void display_stack()
{
	for(int i=top;i>=0;i--)
	{
		cout<<" "<<stck[i];
	}

}
int Top()
{
	return stck[top];
}
void stack_initialize()
{
	top=-1;
}
int main()
{
    int n, value;
	stack_initialize();
	int c;
    do
    {
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display stack"<<endl;
        cout<<"4.stack size "<<endl;
        cout<<"5.top element "<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter your Option: "<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            cout<<"Insert an element:"<<endl;
            cin>>n;
            push(n);
            break;
        case 2:
            value = pop();
			if(value!=0)
            cout<<"Popped element: "<<value<<endl;
            break;
        case 3:
            display_stack()
            cout<<"\nk                                                  ";
            break;
        case 4:
            value=stackSize();
	    cout<<"stack size is: "<<value<<endl;
            break;
        case 5:
            value=Top();
	    cout<<"top element of stack is: "<<value<<endl;
            break;
        case 6:
            return 0;
        }
    }
    while(c<=6);
    return 0;
}
