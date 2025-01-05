#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a,b,c;
    cin>>a>>b>>c;
    double r1,r2,d;

    d= b*b-4*a*c;

    r1 = ((-b)+ sqrt(d))/(2*a);
    r2 = ((-b)- sqrt(d))/(2*a);

    if (a==0 || d<0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(5);
        cout<<"R1 = "<<r1<<endl;
        cout<<"R2 = "<<r2<<endl;
    }
    

    return 0;
}
