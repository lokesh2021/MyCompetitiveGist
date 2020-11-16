#include<iostream>
using namespace std;
int main()
{
    //  1st Method: Using only Array
    cout<<"Accessing 2D Array using Arrays"<<endl;
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    //  2nd Method: Using both Pointer and Array
    cout<<"Accessing 2D Array using both Pointer and Array"<<endl;
    int *B[3];
    B[0]=new int[3];
    B[1]=new int[3];
    B[2]=new int[3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            B[i][j]=i+j+1;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    //  3rd Method: Using only Pointers
    cout<<"Accessing 2D Array using only pointers"<<endl;
    int **C;
    C=new int* [3];
    C[0]=new int[4];
    C[1]=new int[4];
    C[2]=new int[4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            C[i][j]=i+j+1;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

}