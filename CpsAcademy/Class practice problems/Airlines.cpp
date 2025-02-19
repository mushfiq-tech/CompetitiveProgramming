
// https://www.codechef.com/problems/SPCP2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int x,n;
        cin>>x>>n;

        int pas_cap=x*100;
        int craft_need= ceil(n%pas_cap);

        cout<<craft_need<<endl;


    }
    
    

    return 0;
}
