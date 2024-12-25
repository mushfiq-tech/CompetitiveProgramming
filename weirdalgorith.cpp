#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>> n;

    if (n%2 == 0)
    {
        n = n/2;
        cout<<n;
    }
    else if (n%2 != 0)
    {
        n = n*3+1;
        cout<<n;
    }

    else if (n == 1)
    {
        cout<<n;
    }
    else if (n>1 && n%2 == 0)
    {
        n = n/2;
        cout<<n;
    }
    

    

    return 0;
}