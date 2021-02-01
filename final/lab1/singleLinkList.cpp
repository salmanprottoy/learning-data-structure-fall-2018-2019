#include<iostream>
using namespace std;
typedef struct Node{

	int data;
	struct Node *next;
}*nodeptr;
nodeptr head=NULL,current;
void insert(int n)
{
	int value;
	for(int i=0;i<n;i++)
	{
		cin>>value;
		nodeptr newNode = new Node;
		newNode->data = value;
		newNode->next = NULL;
		if(head==NULL)
		{
			head = newNode;
		}
		else
		{
			current->next = newNode;
		}
		current = newNode;
	}
}

void insertAtFirst(int n)
{
	nodeptr newNode = new Node;
	newNode->data = n;
	newNode->next = head;
	head = newNode;
}

void insertAtLast(int n)
{
	nodeptr newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;
	if(head==NULL)
	{
		head = newNode;
	}
	else
	{
		current = head;
		while(current->next!=NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
}

void insertAtMid(int n)
{
	int x,y;
	cout<<"Enter before and after value: "<<endl;
	cin>>x>>y;
	nodeptr ptr = head;
	while(ptr->data!=x && ptr->next->data!=y && ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
	if(ptr->data==x && ptr->next->data==y)
	{
		nodeptr newNode = new Node;
		newNode->next = ptr->next;
		ptr->next = newNode;
		newNode->data = n;
	}
	else
	{
		cout<<x<<" and "<<y<<" not found!"<<endl;
	}
	
}

void insertBefore(int value, int p)
{
    nodeptr ptr=head;
    while(ptr->next->data!=p&&ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->next->data==p)
    {
        nodeptr newnode=new Node;
        newnode->next=ptr->next;
        ptr->next=newnode;
        newnode->data=value;
    }
    else
        cout<<p<<" Not found !!!";

}

void insertAfter(int value,int p)
{
    nodeptr ptr=head;
    while(ptr->data!=p&&ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==p)
    {
        nodeptr newnode=new Node;
        newnode->next=ptr->next;
        ptr->next=newnode;
        newnode->data=value;
    }
    else
        cout<<p<<" Not found !!!";
}

void insertBetween(int value,int p,int q)
{
    nodeptr ptr=head;
    while(ptr->data!=p&&ptr->next->data!=q&&ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==p&&ptr->next->data==q)
    {
        nodeptr newnode=new Node;
        newnode->next=ptr->next;
        ptr->next=newnode;
        newnode->data=value;
    }
    else
        cout<<p<<" and "<<q<<" Not found !!!";
}

void deleteFirst()
{
	nodeptr ptr = head;
	head = ptr->next;
	delete(ptr);
	cout<<"Element deletion successful!"<<endl;
}

void deleteLast()
{
	nodeptr ptr = head, dptr;
	while(ptr->next->next!=NULL)
	{
		ptr = ptr->next;
	}
	dptr = ptr->next;
	ptr->next = NULL;
	delete(dptr);
	cout<<"Element deletion successful!"<<endl;
}

void deleteMid()
{
	int n;
	cout<<"Enter a value to delete: "<<endl;
	cin>>n;
	nodeptr ptr =  head, dptr;
	while(ptr->next->data!=n && ptr->next->next!=NULL)
	{
		ptr = ptr->next;
	}
	dptr = ptr->next;
	ptr->next = ptr->next->next;
	delete(dptr);
	cout<<"Element deletion successful!"<<endl;
}

void display()
{
	nodeptr ptr = head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
	cout<<endl;
}
int main(void)
{
	int x;
	cout<<"Enter size: ";
	cin>>x;
	cout<<"Enter elements: ";
	insert(x);
	cout<<endl;
	while(1)
	{
		cout<<"1. Insert at first"<<endl;
		cout<<"2. Insert at last"<<endl;
		cout<<"3. Insert at between two position"<<endl;
		cout<<"4. Delete at first"<<endl;
		cout<<"5. Delete at last"<<endl;
		cout<<"6. Delete at any position"<<endl;
		cout<<"7. Display"<<endl;
		cout<<"8. Exit"<<endl;
		int option;
		cout<<"Enter your option: "<<endl;
		cin>>option;
		switch (option)
		{
		case 1:
			{
				int n;
				cout<<"Enter an element: "<<endl;
				cin>>n;
				insertAtFirst(n);
				break;
			}
		case 2:
		{
			int n;
			cout<<"Enter an element: "<<endl;
			cin>>n;
			insertAtLast(n);
			break;
		}
		case 3:
		{
			int n;
			cout<<"Enter an element: "<<endl;
			cin>>n;
			insertAtMid(n);
			break;
		}
		case 4:
		{
			cout<<"Deleting first element"<<endl;
			deleteFirst();
			break;
		}
		case 5:
		{
			cout<<"Deleting last element"<<endl;
			deleteLast();
			break;
		}
		case 6:
		{
			cout<<"Deleting mid element"<<endl;
			deleteMid();
			break;
		}
		case 7:
		{
			display();
			break;
		}
		case 8:
		{
			exit(1);
		}
		default:
			break;
		}
	}
}
