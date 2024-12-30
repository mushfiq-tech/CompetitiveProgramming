#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int code,unit;
    double price,pay1,pay2,total;

    cin>>code>>unit>>price;
    pay1=unit*price;
    cin>>code>>unit>>price;
    pay2=unit*price;

    total = pay1+pay2;

    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<total<<endl;

    return 0;
}
