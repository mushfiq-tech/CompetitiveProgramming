#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int i;
    cin>> i ;
    int q = 0;
    int an ;
    for (int n=0; n<i; n++)
    {
        int x,y,z;
        cin>> x >> y >> z;
        
        if((x+y+z)>1){
            q = q + 1;
            an = q;
            }
    }
    
    cout<< an ;
    return 0;
}