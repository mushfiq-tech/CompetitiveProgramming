#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m ;
    cin>>m;

    // for (int i = m; i >= 1; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // }
    
    for (int i = 1; i <= m; i++)
    {
        for (int j = i; j <= m; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    
    // for (int i = 1; i <= m; i++)
    // {
    //     // int j = 5;
    //     // while (j>=1)
    //     // {
    //     //     cout<<"*";
    //     // }
    //     // j=j-1;
    //     for (int j = m; j >= 1; j=j-1)
    //     {
    //         cout<<'*';
    //     }
    //     cout<<endl;
        
    // }
    
    return 0;
}
