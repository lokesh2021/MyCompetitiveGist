#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            if((i+j)%2==0){     //when row+column number is even print 0 else 1
                cout<<"0 ";
            }
            else{
                cout<<"1 ";
            }
        }
        cout<<endl;
    }
}

// Output:
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1