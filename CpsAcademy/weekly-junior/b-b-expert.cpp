#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T,X,Y;
    double p = (Y/X)*100;
    cin>>T;

    while(T--)
    {
        cin>>X>>Y;
        if (p >= 50)
        {
            
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    
    return 0;
}
