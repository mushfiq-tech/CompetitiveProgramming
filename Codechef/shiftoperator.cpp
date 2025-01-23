#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    int out = (n>>r)<<l;

    cout<<out<<endl;

    return 0;
}
