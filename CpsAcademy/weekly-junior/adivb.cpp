// ---------------------------IN THE NAME OF ALLAH-----------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,d,r =0;
    double f;
    cin>>a>>b;

    d = a/b;
    r = a%b;
    f = (double)a/b;

    cout<<fixed<<setprecision(5);
    cout<<d<<" "<<r<<" "<<f<<endl;
    
    return 0;
}
