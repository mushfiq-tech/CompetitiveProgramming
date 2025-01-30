#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1,r2,d1,d2;
    cin>>r1>>r2;
    cin>>d1>>d2;

    int s1,s2;
    s1 = (r1 - abs(d1));
    s2 = (r2 - abs(d2));    
    if (s1>s2)
    {
        cout<<"Dominater"<<endl;
    }
    else
    {
        cout<<"Everule"<<endl;
    }
    
    return 0;
}
