#include<iostream>
#include"join_p.h"

using namespace std;

int transpose_matrix (int n,int m)
{
    int A [n][m];
    int AA[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j =0; j<m;j++)
        {
            cout<< " Enter the " <<i<< ","<<j<<" element" <<endl;
            cin>>A[i][j];
        }
    }
    // transpose process
    for(int i =0; i<n;i++)
    {
        for (int j=0; j<m;j++)
        {

            AA[j][i]=A[i][j];
        }
    }

    cout<<" The transpose of the matrix :" <<endl;

    for( int i=0; i< n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<< AA[i][j]<< " ";
        }
        cout<<endl;
    }

    return 0;

}

void call_transpose()
{
    int n,m;
    cout<< " Enter the number of the row for square matrix :"<<endl;
    cin>>n;
    cout<< " Enter the number of the coloumn for square matrix:"<<endl;
    cin>>m;

    transpose_matrix(n,m);
}
