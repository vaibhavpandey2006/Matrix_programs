#include<iostream>
#include"join_p.h"

using namespace std;

void output_matrix(int matrixx[3][3])
{
    cout<< " The addition of the two matrix is :"<<endl;

    for( int i =0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<< matrixx[i][j] << " ";
        }
        cout<<endl;
    }
}

int add_matrix ()
{
    int A[3][3] = {{ 3,5,6},{ 4,7,9},{1,4,5}};
    int B [3][3] ={ 4,6,4,6,8,7,5,3,9};

    int C [3][3];

    for ( int i =0;i <3 ; i++)
        {
            for ( int j =0 ; j<3; j++)
            {
                C[i][j]= A[i][j]+B[i][j];
            }
        }

        output_matrix (C);

return 0;

}

void do_addition_matrix ()
{
    add_matrix();

}
