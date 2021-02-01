/*
Assignment designed by Jannatul Maowa, Assistant Professor, CS, AIUB
For query: maowa@aiub.edu
*/

#include<iostream>
using namespace std;
#define row 5
#define col 5

void input2DArray(int array[][col])
{
    int i,j;
    for(i = 0; i<row; i++)
    {
        for(j =0; j<col; j++)
        {
            cin>>array[i][j];
        }
    }
}

void output2DArray(int array[][col])
{
    int i,j;
   cout<<"\nOutput of 2D Array: \n";
    for(i = 0; i<row; i++)
    {
        for(j =0; j<col; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
   cout<<endl;
}


void columnRotateRight(int array[][col])
{
    // your code here

	int i,j,temp;
	for(i=0;i<row;i++)
	{
		temp=array[i][col-1];
		for(j=col-2;j>=0;j--)
		{
			array[i][j+1]=array[i][j];
		}
		array[i][0]=temp;
	}
    /*
        suppose an array of dim = ( 3 x 3) having the following values
                1 2 3
                4 5 6
                7 8 9
        after this function being executed the array will be looks like:
                3 1 2
                6 4 5
                9 7 8
    */
}

void columnRotateLeft(int array[][col])
{
    // your code here

	int i,j,first;
	for(i=0;i<row;i++)
	{
		first=array[i][0];
		for(j=0;j<col;j++)
		{
			array[i][j]=array[i][j+1];
		}
		array[i][col-1]=first;
	}
    /*
        suppose an array of dim = ( 3 x 3) having the following values
                1 2 3
                4 5 6
                7 8 9
        after this function being executed the array will be looks like:
                2 3 1
                5 6 4
                8 9 7
    */
}

void rowRotateUp(int array[][col])
{
    // your code here
	int i,j,temp;
	for(i=0;i<row;i++)
	{
		temp=array[0][i];
		for(j=0;j<col;j++)
		{
			array[j][i]=array[j+1][i];
		}
		array[row-1][i]=temp;
	}
    /*
        suppose an array of dim = ( 3 x 3) having the following values
                1 2 3
                4 5 6
                7 8 9
        after this function being executed the array will be looks like:
                4 5 6
                7 8 9
                1 2 3
    */
}

void rowRotateDown(int array[][col])
{
    // your code here
	int i,j,temp;
	for(i=0;i<row;i++)
	{
		temp=array[row-1][i];
		for(j=row-2;j>=0;j--)
		{
			array[j+1][i]=array[j][i];
		}
		array[0][i]=temp;
	}
    /*
        suppose an array of dim = ( 3 x 3) having the following values
                1 2 3
                4 5 6
                7 8 9
        after this function being executed the array will be looks like:
                7 8 9
                1 2 3
                4 5 6

    */
}

void sortColumnWise(int array[][col])
{
    // your code here
    //sorting will be in ascending order
    int i,j,k,temp;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            for(k=(i+1);k<row;k++)
            {
                if (array[i][j] > array[k][j])
                {
                    temp=array[i][j];
                    array[i][j]=array[k][j];
                    array[k][j]=temp;
                }
            }
        }
    }
    /*
        suppose an array of dim = ( 3 x 3) having the following values
                9 8 7
                6 5 4
                1 2 3
        after this function being executed the array will be looks like:
                1 2 3
                6 5 4
                9 8 7

    */
}



void sortRowWise(int array[][col])
{
    // your code here
    //sorting will be in ascending order
    int i,j,k,temp;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            for(k=(j+1);k<col;k++)
            {
                if (array[i][j] > array[i][k])
                {
                    temp=array[i][j];
                    array[i][j]=array[i][k];
                    array[i][k]=temp;
                }
            }
        }
    }
    /*
        suppose an array of dim = ( 3 x 3) having the following values
                9 8 7
                6 5 4
                1 2 3
        after this function being executed the array will be looks like:
                7 8 9
                4 5 6
                1 2 3

    */
}

int main()
{


    int array[row][col];
    input2DArray(array);
    output2DArray(array);

    columnRotateRight(array);
    cout<<"output after columnRotateRight: \n";
    output2DArray(array);


    columnRotateLeft(array);
    cout<<"output after columnRotateLeft: \n";
    output2DArray(array);


    rowRotateUp(array);
   cout<<"output after rowRotateUp: \n";
    output2DArray(array);


    rowRotateDown(array);
    cout<<"output after rowRotateDown: \n";
    output2DArray(array);


    sortColumnWise(array);
    cout<<"output after sortColumnWise: \n";
    output2DArray(array);


    sortRowWise(array);
    cout<<"output after sortRowWise: \n";
    output2DArray(array);


    return 0;
}
