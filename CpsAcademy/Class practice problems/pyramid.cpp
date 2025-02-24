#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin>>p;

    for (int i = 1; i <= p; i++)
    {
        int m = p-i;
        for (int j = 1; j <= m; j++)
        {
            cout<<" ";
        }

        int n = i*2-1;
        for (int j = 1; j <= n; j++)
        {
            cout<<"0";
        }
        cout<<endl;
    }
    
    
    return 0;
}
