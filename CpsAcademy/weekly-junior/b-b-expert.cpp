#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T,X,Y;
    double p = X/Y;
    double half = 1/2;
    cin>>T;

    for (int i = 0; i < T; i++)
    {
        cin>>X>>Y;
        if (p >= half)
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
