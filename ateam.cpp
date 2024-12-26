#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n ;
    int q = 0;
    for (int i=0; i<n; i++)
    {
        int x,y,z;
        cin>> x >> y >> z;
        
        if((x+y+z)>1){
            q++;
            }
    }
    
    cout<< q ;
    return 0;
}