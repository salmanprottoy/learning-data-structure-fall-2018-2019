#include<iostream>
#include<stdio.h>
using namespace std;
#define WHITE -1
#define GREY 0
#define BLACK 1
int vertices;
int Graph[1000][1000];

int main()
{
    int x,y,deg[1000]={0},flag=0;
    cout<<"How many verticses: "<<endl;
    cin>>vertices;
    int i,j;
    for(i=1;i<=vertices;i++)
        cin>>deg[i];
    for( i=1; i<=vertices; i++)
    {
        for( j=1; j<=deg[i]; j++)
        {
            cin>>Graph[i][j];
        }
    }

    cout<<endl;
    for( i=1; i<=vertices; i++)
    {
        for( j=1; j<=deg[i]; j++)
        {
            cout<<Graph[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"Enter any two vertex ";
cin>>x>>y;
for(i=1;i<=deg[x];i++){
    if(Graph[x][i]==y){
        cout<<x<<" and "<<y<<" are connected ";
        flag=1;
        break;
    }
}
    if(flag==0)
        cout<<x<<" and "<<y<<" are not connected ";

    return 0;
}

//4
//3 2 3 2
//2 3 4
//1 3
//1 2 4
//1 3
