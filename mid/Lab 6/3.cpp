/*
Assignment designed by Md. Jannatul Maowa, Assistant Professor, CS, AIUB
For query: maowa@aiub.edu
*/

#include<iostream>
using namespace std;
#define MAXSIZE 5




//function prototype declaration
void enqueue(int element);
int dequeue();
int isQueueEmpty();
int queueSize();
int isQueueFull();
void display_queue();



//functions implementations are from here

void enqueue(int element)
{
    //your code here
    
    //enqueue will be in circular fashion if array is not full
    // before enqueue check whether array of Queue is full or not. If full then show a message to user that
    // Queue is full. Otherwise enqueue the value.

    // use isQueueFull() function here to implement the enqueue()
}

int dequeue()
{
   //your code here
   //dequeue will be in circular fashion if array is not empty
    // before dequeue check whether array of Queue is empty or not. If empty then show a message to user that
    // Queue is empty. Otherwise dequeue the value & return it.

    // use isQueueEmpty() function here to implement the dequeue()
}

int isQueueEmpty()
{
    //your code here
    // return 1 if Queue is empty 0 otherwise
}

int isQueueFull()
{
    //your code here
    // return 1 if Queue is full 0 otherwise

}

int queueSize()
{
    //your code here
   //return current allocated size of the queue
}

void display_queue()
{
    //your code here
    // display all elements of Queue from front to rear.

}
int main()
{
    int option,n, value;
    cout<<"C program to implement Queue operations\n";
    do
    {
        cout<<"\n\n 1.Insert an element in Queue";
        cout<<"\n 2.Delete an element from Queue";
        cout<<"\n 3.Display Queue";
        cout<<"\n 4.Exit";
        cout<<"\n Enter your choice: ";
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<"\n Insert an element in Queue";
            cin>>n;
            enqueue(n);
            break;
        case 2:
            value = dequeue();
            cout<<"\n Dequeue element is: "<<value<<endl;
            break;
        case 3:
            display_queue();
            break;
        case 4:
            return 0;
        }

    }
    while(option!=4);

    return 0;
}
