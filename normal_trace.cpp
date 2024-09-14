#include<iostream>
#include"join_p.h"
#include<cmath>

using namespace std;

int calculate_normal_trace (int n, int m)
{
    int A[n][m];
    int sumM=0;
    float normal;
    int trace =0;
    cout<< " Enter the elements of the matrix :"<<endl;

    for(int i=0; i<n;i++)
    {
        for(int j =0;j<m;j++)
        {
            cout<< "Enter the "<<i<<","<<j<< " element"<<endl;
            cin>>A[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0;j <m; j++)
        {
            sumM+=A[i][j];
        }
    }

    cout<< " The sum of square of all the elements of matrix is :"<<sumM<<endl;

    normal = sqrt(sumM);
    cout<< " Now taking square root that is normal of A matrix is :" << normal<<endl;


    for(int i=0; i<n; i++)
    {
        for( int j=i; j<m;)
        {
            trace += A[i][j];
            break;
        }
    }

    cout<< " The trace of the matrix A is :"<<  trace <<endl;

    return 0;
}

void operation_matrix ()
{
    int n,m;
    cout<< " Enter the number of the rows of matrix :"<<endl;
    cin>>n;
    cout<<" Enter the number of the coloumn of the matrix :" <<endl;
    cin>>m;
    calculate_normal_trace( n,m);

}
