// ---------------------------IN THE NAME OF ALLAH-----------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;
    long long area = pow(a,b)+pow(b,a);
    cout<<area<<endl;
    return 0;
}
