#include <bits/stdc++.h>

using namespace std;

int main()
{
    float A,B,C;
    float media;
    float wa,wb,wc;

    wa=2;
    wb=3;
    wc=5;

    cin>>A;
    cin>>B;
    cin>>C;

    media = ((A*wa)+(B*wb)+(C*wc))/(wa+wb+wc);
    cout<<fixed<<setprecision(1);
    cout<<"MEDIA = "<<media<<endl;
    return 0;
}
