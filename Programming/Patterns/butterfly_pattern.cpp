#include <iostream>

using namespace std;

int main()
{
	int n, i, j, s;
    cin>>n;
    
	//Left half of the star butterfly start
    for(i=n ; i>0 ; i--)
    {
        for(j=n ; j>=i ; j--)
        {
            cout<<"*";
        }
        
        s = i * 2 - 2;
        while(s>=0)
        {
            cout<<" ";
            s--;
        }
        
        for(j=i ; j<=n ; j++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
    //Left half of the star butterfly end
	
	//Middle line of butterfly start
    for(i=n ; i>=0 ; i--)
    {
        cout<<"*";
    }
    
    for(i=1 ; i<=n ; i++)
    {
        cout<<"*";
    }
    
    cout<<"\n";
	//Middle line of butterfly end

    //Right half of the star butterfly start
    for(i=1 ; i<=n ; i++)
    {
        for(j=n ; j>=i ; j--)
        {
            cout<<"*";
        }
        
        s = i * 2 - 2;
        while(s>=0)
        {
            cout<<" ";
            s--;
        }
        
        for(j=i ; j<=n ; j++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
	//Right half of the star butterfly end

    return 0;
}