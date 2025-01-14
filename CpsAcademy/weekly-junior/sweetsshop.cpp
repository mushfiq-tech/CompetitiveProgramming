// ---------------------------IN THE NAME OF ALLAH-----------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;
    int left = a-b*10;
    int cost = left/20;
    cout<<cost<<endl;
    return 0;
}
