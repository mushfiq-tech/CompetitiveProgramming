#include<bits/stdc++.h>
using namespace std;

int main(){

        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int k,n,t=0;
        cin>> n >> k ;
        vector<int>a(n);
        
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        
        for (int i= 0 ; i < a[k];i++)
        {
                
            t++;
                
        }

        cout<<t;


    return 0;
}