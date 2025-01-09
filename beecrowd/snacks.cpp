#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int pcode , qnt;
    double total = 0.0;

    cin>>pcode>>qnt;

    switch (pcode)
    {
    case 1:
        total = 4.00 * qnt;
        break;
    
    case 2:
        total = 4.50 * qnt;
        break;
    case 3:
        total = 5.00 * qnt;
        break;
    case 4:
        total = 2.00 * qnt;
        break;
    case 5:
        total = 1.50 * qnt;
        break;
    }
    
    cout<<fixed<<setprecision(2);
    cout<<"Total: R$ "<<total<<endl;
    return 0;
}
