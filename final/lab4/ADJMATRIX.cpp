#include<iostream>
#include<stdio.h>
using namespace std;
#define WHITE -1
#define GREY 0
#define BLACK 1
int vertices;
int Graph[1000][1000];
void outputGraph()
{
    cout<<"The adjacency matrix is : "<<endl;
    for( int i=1; i<=vertices; i++)
    {
        for(int  j=1; j<=vertices; j++)
        {
            cout<<Graph[i][j]<<" ";
        }
        cout<<endl;

    }
}
void noOfEdge()
{
    int sum=0;
    for( int i=1; i<=vertices; i++)
    {
        for(int  j=1; j<=vertices; j++)
        {
            sum=sum+Graph[i][j];
        }
        cout<<endl;

    }

    cout<<"Number of edge "<<sum/2;
}
int main()
{
    int x,y,k=1,outdeg[1000]={0};
    cout<<"How many verticses: "<<endl;
    cin>>vertices;
    int i,j;
    for( i=1; i<=vertices; i++)
    {
        for( j=1; j<=vertices; j++)
        {
            cin>>Graph[i][j];
        }
    }
    outputGraph();
    cout<<endl;
    for( i=1; i<=vertices; i++)
    {
        for( j=1; j<=vertices; j++)
        {
            outdeg[k]=outdeg[k]+Graph[i][j];

        }
        k++;
    }
    for(k=1;k<=vertices;k++)
        cout<<outdeg[k]<<" ";
cout<<"Enter any two vertex ";
cin>>x>>y;
if(Graph[x][y]==1)
    cout<<x<<" and "<<y<<" are connected ";
else
    cout<<x<<" and "<<y<<" are not connected ";
noOfEdge();

    return 0;
}

//4
//0 1 1 1
//1 0 1 0
//1 1 0 1
//1 0 1 0
