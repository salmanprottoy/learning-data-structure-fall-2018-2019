#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*top=NULL,*p;

Node* newnode(int x)
{
    p=new Node;
    p->data=x;
    p->next=NULL;
    return(p);
}

void push(Node *q)
{
    if(top==NULL)
        top=q;
    else
    {
        q->next=top;
        top=q;
    }
}

void pop(){
    if(top==NULL){
        cout<<"Stack is empty!!"<<endl;
    }
    else{
        cout<<"Deleted element is: "<<top->data<<endl;
        p=top;
        top=top->next;
        delete(p);
    }
}

void showstack()
{
    Node *q;
    q=top;

    if(top==NULL){
        cout<<"Stack is empty!!"<<endl;
    }
    else{
        while(q!=NULL)
        {
            cout<<q->data<<" "<<endl;
            q=q->next;
        }
    }
}

int main()
{
    int ch,x;
    Node *nptr;

    while(1)
    {
        cout<<"1.Push\n2.Pop\n3.Display\n4.Exit"<<endl;
        cout<<"Enter your choice(1-4):";
        cin>>ch;

        switch(ch){
            case 1: cout<<"\nEnter data:";
                    cin>>x;
                    nptr=newnode(x);
                    push(nptr);
                    break;

            case 2: pop();
                    break;

            case 3: showstack();
                    break;

            case 4: return 0;

            default: cout<<"Wrong choice!!"<<endl;
        }
    }

    return 0;
}
