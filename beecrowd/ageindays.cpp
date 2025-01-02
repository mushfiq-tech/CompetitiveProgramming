#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int N;
    cin>>N;
    int year , month , days;
    
    year = N/365;
    N = N%365;
    month = N/30;
    days = N%30;
    
    cout<<year<<" ano(s)"<<endl;
    cout<<month<<" mes(es)"<<endl;
    cout<<days<<" dia(s)"<<endl;
 
    return 0;
}