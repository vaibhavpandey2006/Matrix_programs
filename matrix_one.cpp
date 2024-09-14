#include<iostream>
#include"join_p.h"

using namespace std;

int the_matrix ( int a , int b)
{
    int A [a][b];

    cout<< " Enter the elements of the matrix :"<<endl;

    for(int i =0;i<a  ; i++)
    {
        for ( int j =0; j<b; j++)
        {
            cout<< " Enter the element at "<< i<< ","<< j <<endl;
            cin>>A[i][j];
        }
    }

    cout<< endl;
    cout<< " The elements in matrix A are :"<<endl;

    for( int i=0; i< a; i++)
    {
        for(int j
             =0; j< b; j++)
        {
            cout<< A[i][j]<< "  ";
        }
        cout<<endl;
    }

    return 0;

}

void create_matrix ()
{
    int n, m;

    cout<< " Enter the number of rows of matrix "<<endl;
    cin>>n ;
    cout<< " Enter the number of coloumn of matrix "<<endl;
    cin>>m;

    the_matrix (n,m);

}
