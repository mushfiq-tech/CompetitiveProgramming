#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    int A,B,C,D,E;
    int counts;
    counts = 0;

    cin>>T;
    cin>>A>>B>>C>>D>>E;

    int M[5] = {A,B,C,D,E};

    for (int i = 0; i < 5; i++)
    {
        if (M[i]==T)
        {
            counts ++;
        }
        
    }
    cout<<counts<<endl;
    return 0;
}
