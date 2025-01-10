// ---------------------------IN THE NAME OF ALLAH-----------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,nx,lx,lx2=0;
    cin>>x;

    nx = (x/10)*10;
    lx = x - nx;
    
    nx = (x/10);
    x = nx;
    nx = (x/10)*10;
    lx2 = x - nx;

    cout<<"k"<<lx2<<lx<<endl;
    
    return 0;
}
