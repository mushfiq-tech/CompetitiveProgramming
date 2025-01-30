#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if (a<3)
    {
        cout<<"GOLD"<<endl;
    }
    else if (a>=3 && a<6)
    {
        cout<<"SILVER"<<endl;
    }
    
    else if (a>=6 && a<=10)
    {
        cout<<"BRONZE"<<endl;
    }
    
    return 0;
}
