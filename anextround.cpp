#include<bits/stdc++.h>
using namespace std;

int main(){

        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int k,n,t;
        cin>> k >> n ;
        vector<int>a(n);
        
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
                t=i+(a[i]>=k);
                
            }

        cout<<t;


    return 0;
}
