#include<iostream>
using namespace std;

void linearSearch(int a[],int n,int value)
{
    //write your code here
    int index=0;
    int position=-1;
    bool found=false;

    while(index<n && !found)
    {
        if(a[index]==value)
        {
            found=true;
            position=index;
        }
        index++;
    }
    cout<<endl;
    if(position==-1)
    {
        cout<<"Data not found!"<<endl;
    }
    else
    {
        cout<<"Data found!"<<endl;
        cout<<"Your desired value position: "<<position<<endl;
        cout<<"Your desired value: "<<a[position]<<endl;
    }
}
void binarySearch(int a[],int n,int value)
{
    //write your code here
    int first =0, last=n-1,middle,position=-1;
    bool found = false;
     while(!found && first<=last)
     {
         middle = (first+last)/2;
         if(a[middle]==value)
         {
             found = true;
             position = middle;
         }
         else if(a[middle]>value)
         {
             last = middle-1;
         }
         else
         {
             first = middle+1;
         }
     }
     cout<<endl;
    if(position==-1)
    {
        cout<<"Data not found!"<<endl;
    }
    else
    {
        cout<<"Data found!"<<endl;
        cout<<"Your desired value position: "<<position<<endl;
        cout<<"Your desired value: "<<a[position]<<endl;
    }
}

void input(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int option, value;
    int n,i,arr[50];
    cout<<"Enter Array Size : "<<endl;
    cin>>n;
    cout<<"Enter a value you want to search : "<<endl;
    cin>>value;
    cout<<"C program to implement Searching \n";
    do
    {
        cout<<"\n\n 1.Take array elements from user ";
        cout<<"\n 2. Linear Search ";
        cout<<"\n 3.Binary Search ";
        cout<<"\n 4.Exit";
        cout<<"\n Enter your choice: ";
        cin>>option;
        switch(option)
        {
        case 1:
            cout<<"\n Enter array elements ";
            input(arr,n);
            break;
        case 2:
            cout<<"\n Calling linear Search ";
            linearSearch(arr,n,value);
            break;
        case 3:
            cout<<"\n Calling binary search";
            binarySearch(arr,n,value);
            break;
        case 4:
            return 0;
        }

    }
    while(option!=4);

    return 0;
}
