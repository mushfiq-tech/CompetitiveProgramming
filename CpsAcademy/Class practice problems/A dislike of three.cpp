#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,k = 0;
    cin>>t;

    for (int i = 0; i < t; i++)
    {   
        
        cin>>k;
        
        for (int i = 1; i < k; i++)
        {
            if (i%3==0 && (i%10==3 || i%100==3 || i%1000==3))
            {
                continue;
            }
            cout<<i<<endl;
        }
            
        
        
    }
    
    return 0;
}
