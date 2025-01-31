#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if (a<b)
    {
        cout<<"Old"<<endl;
    }
    else if (b<a)
    {
        cout<<"New"<<endl;
    }
    
    else if (b==a)
    {
        cout<<"Same"<<endl;
    }
    
    
    
    return 0;
}
