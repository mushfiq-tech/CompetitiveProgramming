#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T,X;
    cin>>T;

    for (int i = 0; i < T; i++)
    {
        cin>>X;
        if (X > 100)
        {
            X= X-10;
            cout<<X<<endl;
        }
        else
        {
            cout<<X<<endl;
        }
        
    }
    
    
    return 0;
}
