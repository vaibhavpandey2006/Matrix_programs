#include<iostream>
#include"join_p.h"

using namespace std;

int interchanged_coloumn(int n, int m)
{
    int A[n][m];
    int arr[n];

    cout<<" Enter the elements of the matrix:" <<endl;

    for(int i =0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<< " Enter the "<< i<<","<<j<<endl;
            cin>>A[i][j];
        }
        cout<<endl;
    }

    //interchage coloumn
    for(int i=0; i<n;i++)
    {
        arr[i]=A[i][0];
        A[i][0]=A[i][m-1];
        A[i][m-1]=arr[i];
    }

    cout<< " The interchange of the coloumn of the matrix is :"<<endl;

    for(int i =0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<< A[i][j] << " ";
        }
        cout<<endl;
    }
    return 0;
}


void interchang_coloumn ()
{
    int n,m;
    cout<< " Enter the number of rows of matrix: "<<endl;
    cin>>n;
    cout<< " Enter the number of coloumn of matrix " <<endl;
    cin>>m;

    interchanged_coloumn(n,m);
}
