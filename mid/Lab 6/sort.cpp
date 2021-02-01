#include<iostream>
using namespace std;

void bubbleSort(int a[],int n)
{
     //write your code here
    int i, j, x;
    for(i=1; i<n; i++)
    {
        for(j=0; j<n-1; j++)
            {
            if(a[j] > a[j+1])
            {
                x = a[j];
                a[j] = a[j+1];
                a[j+1] = x;
            }
        }
    }
}

void selectionSort(int a[],int n)
{
    //write your code here
    int i,index_min,value;
    for(i=0;i<(n-1);i++)
    {
        index_min=i;
        value=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<value)
            {
                value=a[j];
                index_min=j;
            }
        }
        a[index_min]=a[i];
        a[i]=value;
    }

}

void insertionSort(int a[],int n)
{
    //write your code here
    int ptr,temp;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        ptr=i-1;
        while(ptr>=0 && a[ptr]>temp)
        {
            a[ptr+1]=a[ptr];
            ptr--;
        }
        a[ptr+1]=temp;
    }

}
void input(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void output(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int option, value;
    int n,i,arr[50];
    cout<<"Enter Array Size : "<<endl;
    cin>>n;
    cout<<"C program to implement Sorting \n";
    do
    {
        cout<<"\n\n 1.Take array elements from user ";
        cout<<"\n 2.Show array elements in the screen ";
        cout<<"\n 3.Bubble Sort ";
        cout<<"\n 4.Selection Sort ";
        cout<<"\n 5.Insertion Sort ";
        cout<<"\n 6.Exit";
        cout<<"\n Enter your choice: ";
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<"\n Enter array elements ";
            input(arr,n);
            break;
        case 2:
            cout<<"\n Show array elements ";
            output(arr,n);
            break;
        case 3:
            cout<<"\n Calling bubble sort";
            bubbleSort(arr,n);
            break;
        case 4:
            cout<<"\n Calling selection sort";
            selectionSort(arr,n);
            break;
        case 5:
            cout<<"\n Calling insertion sort";
            insertionSort(arr,n);
            break;
        case 6:
            return 0;
        }

    }
    while(option!=6);

    return 0;
}
