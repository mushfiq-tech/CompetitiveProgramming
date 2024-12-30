#include <bits/stdc++.h>

using namespace std;

int main()
{   

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int X;
    int n;
    X=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {   
        string state;
        cin>>state;
        if (state == "++X" )
        {   
            X++;
            
        }
        else if (state == "--X" )
        {
            X--;
            
        }
        
        
    }
    cout<<X<<endl;   
    return 0;
}
