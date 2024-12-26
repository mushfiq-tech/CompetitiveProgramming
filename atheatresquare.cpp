#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,a;
    cin>>n>>m>>a;
    int r = ceil(double(n)/double(a));
    int p = ceil(double(m)/double(a));
    int k,l,s;
    k = 0;
    l= 0;

    for(int i=0; i<r; i++){
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