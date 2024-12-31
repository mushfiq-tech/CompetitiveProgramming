#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R ;
    cin>>R;
    double pi;
    pi = 3.14159;
    
    
    double volume = (4/3.0)* pi * pow(R,3);
    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<volume<<endl;
 
    return 0;
}