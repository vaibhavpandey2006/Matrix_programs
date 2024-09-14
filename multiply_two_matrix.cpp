#include<iostream>
#include"join_p.h"

using namespace std;

int multiply_matrix (int a,int b,int c, int d)
{
    int A[a][b];
    int B[c][d];
    int AB[a][d];


    if(b!=c)
    {
        cout<< " Please enter the correct value !!"<<endl;
        cout<< " To multiply any two matrix the number of coloumn of first matrix should be equal to number of rows of another matrix :"<<endl;
        return 0;

    }

    cout<< "Enter the elements in first matrix :"<<endl;

    for(int i=0; i<a; i++)
    {
        for(int j =0; j<b; j++)
        {
            cout<< " Enter the "<<i<< ","<<j<< " element"<<endl;
            cin>>A[i][j];
        }
    }

    cout <<" Enter the elements of the second matrix :" <<endl;

    for(int i=0; i<c; i++)
    {
        for(int j =0; j<d; j++)
        {
            cout<< " Enter the "<<i<< ","<<j<< " element"<<endl;
            cin>>B[i][j];
        }
    }


    for(int i= 0; i<a; i++)
    {
        for(int j =0; j<d;j++ )
        {
            AB[i][j]=0;

            for(int k=0; k<b;k++ )
            {
                AB[i][j] +=A[i][k]*B[k][j];

            }

        }
        cout<<endl;

    }

    cout<< " The product of two matrix is :"<<endl;

    for(int i=0; i<a;i++)
    {
        for(int j=0; j<d; j++)
        {
            cout<< AB[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;

    }

void call_multiplier ()
{
    int a,b,c,d;
    cout<< " Enter the number of row and coloumn for first matrix : "<<endl;
    cin>>a>>b;
    cout<< " Enter the number of row and coloumn for second matrix :"<<endl;
    cin>>c>>d;

    multiply_matrix(a,b,c,d);
}
