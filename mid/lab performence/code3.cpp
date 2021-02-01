#include<iostream>
#include<string>
using namespace std;
struct student{
	string id;
	string name;
	float marks;
	};
int main(void)
{
	struct student data[100];
	cout<<"Enter data size:"<<endl;
	int x;
	float avg_marks=0;
	cin>>x;
	cout<<"Enter Student data:"<<endl;
	for(int i=0;i<x;i++)
	{
		cout<<"ID: "<<endl;
		cin>>data[i].id;
		cout<<"Name: "<<endl;
		cin>>data[i].name;
		cout<<"Marks: "<<endl;
		cin>>data[i].marks;
	}
	cout<<"\n";
	cout<<"--------------------------------"<<endl;
	cout<<"Entered Student data:"<<endl;
	cout<<"--------------------------------"<<endl;
	for(int i=0;i<x;i++)
	{
		cout<<"ID: ";
		cout<<data[i].id<<endl;
		cout<<"Name: ";
		cout<<data[i].name<<endl;
		cout<<"Marks: ";
		cout<<data[i].marks<<endl;
		cout<<"--------------------------------"<<endl;
	}
	for(int i=0;i<x;i++)
	{
		avg_marks=avg_marks+data[i].marks;
	}
	avg_marks=avg_marks/x;
	cout<<"Average mark is: "<<avg_marks<<endl;
}
