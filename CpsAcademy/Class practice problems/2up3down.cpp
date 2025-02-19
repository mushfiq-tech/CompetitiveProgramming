#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if (x<y)
    {
        int k = y-x;
        if (k>2)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
        
        
    }
    else
    {
        int k = x-y;
        if (k>3)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
        
    }
    
    
    return 0;
}