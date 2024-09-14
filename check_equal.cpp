#include<iostream>
#include"join_p.h"

using namespace std;

int are_equal (int M[3][3] , int N [3][3])
{
    int counter =0;

    for ( int i =0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if( M[i][j] != N [i][j] )
            {
                counter +=1;

            }

        }
    }
    if(counter >0)
    {
        cout<< "The matrix are not equal :"<<endl;
    }
    else{
        cout<< " The matrix are equal : "<<endl;

    }

    return 0;
}

void check_equal_matrix ()
{
    int A [3][3] = { 3,6,5,6,8,6,4,6,7};
    int B [3][3] = { 3,6,5,6,8,6,4,6,7};

    are_equal(A,B);

}
