#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m,a;
    cin>>n>>m>>a;
    ll r = ceil(double(n)/double(a));
    ll p = ceil(double(m)/double(a));
    ll k,l;
    ll s;
    k = 0;
    l= 0;

    for(int i=0; i<r; i++)
        {
        k++;  
        }

    for (int i = 0; i < p; i++)
        {
            l++;
        }
    s=k*l;
    cout<<s;
    return 0;
}