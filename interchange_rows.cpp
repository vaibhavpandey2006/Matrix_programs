#include<iostream>
#include"join_p.h"

using namespace std;

int interchanged_rows (int n , int m)
{
    int temp;
    int A[n][m];
    cout<< " Enter the  elements  of matrix "<<endl;

    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m ; j++)
        {
            cout<<" Enter the "<<i<< ","<<j<<" element ";
            cin>>A[i][j];
        }
    }
    //interchanging of rows

    for(int i=0;i<m;i++)
    {
        temp=A[0][i];
        A[0][i]=A[n-1][i];
        A[n-1][i]=temp;

    }

    cout<< " The interchanged matrix is :"<<endl;

    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m ; j++)
        {
            cout<<A[i][j]<< " ";
        }
        cout<< endl;
    }

    return 0;
}

void interchage_rows ()
{
    int n,m;
    cout<< " Enter the number of rows of matrix: "<<endl;
    cin>>n;
    cout<< " Enter the number of coloumn of matrix " <<endl;
    cin>>m;

    interchanged_rows(n,m);

}
