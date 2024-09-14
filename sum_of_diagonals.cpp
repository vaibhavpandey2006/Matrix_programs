#include<iostream>
#include"join_p.h"

using namespace std;

int sum_diagonal (int x,int y)
{
     int A [x][y];
     int suM =0;
    // int r=y-1;
    cout<< " Enter the elements of the matrix A "<<endl;

    for (int i =0;i<x; i++)
    {
        for(int j =0; j<y; j++)
        {
            cout<< " Enter the "<<i<<","<<j<< " value" <<endl;
            cin>>A[i][j];
        }
    }

     for( int i=0; i<x; i++)
    {
        for(int j =y-1-i; j>=0;) //j=r;
        {
            suM += A[i][j];
          //r-=1;
            break;
        }
    }

     return suM;

}

void diagonal_sum ()
{
    int n,m ;
    int diagonal_sum_value ;
    cout<< " Enter the row of the matrix :"<<endl;
    cin>>n;
    cout<< " Enter the coloumn of the matrix :"<<endl;
    cin>>m;

    diagonal_sum_value =sum_diagonal(n,m );

    cout<< " The sum of the diagonal of the matrix is :"<< diagonal_sum_value;

}
