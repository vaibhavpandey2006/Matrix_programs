#include<iostream>
#include"join_p.h"

using namespace std;

int print_boundry (int n,int m)
{
    int A[n][m];

    cout<< " Enter the elements of the matrix :"<<endl;

    for(int i=0; i<n;i++)
    {
        for(int j =0; j<m; j++)
        {
            cout<< " Enter the "<< i << ","<<j<<" element" <<endl;
            cin>>A[i][j];
        }
    }

    cout<<endl;
//assingning 0 to center element ..
    for(int i=1; i<n-1; i++ )
    {
        for(int j=1; j<m-1; j++)
        {
            cout<< A[i][j] <<" ";
            A[i][j] = 0;
        }
    }

    cout<<endl;

    cout<< " Print the boundry of the matrix :"<<endl;

    for( int i = 0; i<n; i++ )
    {
        for(int j =0; j<m; j++)
        {

            cout<< A[i][j] <<" " ;
        }
        cout<<endl;
    }

    return 0;
}

void matrix_boundry ()
{
    int n,m;
    cout<< " Enter the number of row of the square matrix :"<<endl;
    cin>>n;
    cout<< " Enter the number of coloumn of the square matrix :"<< endl;
    cin>>m;

    print_boundry(n,m);

}
