#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a = -1000000;
    long long b = 1000000;
    long long min, max,sum = 0;
    int t = 0;
    cin>>t;
    while (t--)
    {
        long long k=0;
        cin>>k;
        if (k>=a)
        {
            min = k;
        }
        if (k<=b)
        {
            max = k;
        }
        sum += k;

    }
    cout<<min<<" "<<max<<" "<<sum<<endl;
    return 0;
}
