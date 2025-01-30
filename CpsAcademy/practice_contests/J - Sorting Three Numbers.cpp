#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b && a>c && b>c)
    {
        cout<<a<<' '<<b<<' '<<c<<endl;
    }
    else if (a<b && b<c && a>c)
    {
        cout<<a<<' '<<c<<' '<<b<<endl;
    }
    else if (a<b && b>c && a>c)
    {
        cout<<b<<' '<<a<<' '<<c<<endl;
    }
    else if (a<b && b>c && a<c)
    {
        cout<<b<<' '<<c<<' '<<a<<endl;
    }
    else if (a<c && b<c && a>b)
    {
        cout<<c<<' '<<a<<' '<<b<<endl;
    }
    else if (a<c && b<c && a<b)
    {
        cout<<c<<' '<<b<<' '<<a<<endl;
    }
    
    return 0;
}
