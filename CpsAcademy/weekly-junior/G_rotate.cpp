// ---------------------------IN THE NAME OF ALLAH-----------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin>>num;
    int a = num/100;
    int b = (num/10)%10;
    int c = num%10;

    int s = 111*(a+b+c);
    cout<<s<<endl;
    
    return 0;
}
