#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    cin>>a;
    if (a<1000)
    {   

        cout<<a<<endl;
    }
    else if (1000<=a && a<10000)
    {
        int s = (a/10)*10;
        cout<<s<<endl;
    }
     else if (10000<=a && a<100000)
    {
        long long s = (a/100)*100;
        cout<<s<<endl;
    }
     else if (100000<=a && a<1000000)
    {
        long long s = (a/1000)*1000;
        cout<<s<<endl;
    }
     else if (1000000<=a && a<10000000)
    {
        long long s = (a/10000)*10000;
        cout<<s<<endl;
    }
     else if (10000000<=a && a<100000000)
    {
        long long s = (a/100000)*100000;
        cout<<s<<endl;
    }
     else if (100000000<=a && a<1000000000)
    {
        long long s = (a/1000000)*1000000;
        cout<<s<<endl;
    }
 
    
    return 0;
}
