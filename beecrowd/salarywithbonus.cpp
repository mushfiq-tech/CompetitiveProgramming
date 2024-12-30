#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string name;
    double fixedsal,bonus,sale,total;

    cin>>name;
    cin>>fixedsal;
    cin>>sale;

    total = fixedsal+(sale*0.15);

    cout<<fixed<<setprecision(2);
    cout<<"TOTAL = R$ "<<total<<endl;

    return 0;
}
